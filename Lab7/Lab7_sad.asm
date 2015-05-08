### Sum of Absolute Differences Algorithm
# Authors: Nicolas Hafner
# Group: F32

.text

## Implicitly fixed registers:
# $s0 left_image
# $s1 right_image
# $s2 sad_image
# We do this since we don't have enough return and argument
# registers, and keeping them all intact over jumps would be
# a pain.

main:
        jal     memory_init

        li      $a0, 9
        jal     calculate_sad

        move    $a0, $s2
        li      $a1, 9
        jal     recursive_sum

        move    $t2, $v0
        j       end

memory_init:
	lui     $t1, 0x0000
	ori     $t1, 0x0000

        #left starting at $s0
        move    $s0, $t1
        # left_image[0]
	li      $t0, 5
	sw      $t0, ($t1)
        addi    $t1, $t1, 4
        # left_image[1]
	li      $t0, 16
	sw      $t0, ($t1)
        addi    $t1, $t1, 4
        # left_image[2]
	li      $t0, 7
	sw      $t0, ($t1)
        addi    $t1, $t1, 4
        # left_image[3]
	li      $t0, 1
	sw      $t0, ($t1)
        addi    $t1, $t1, 4
        # left_image[4]
	li      $t0, 1
	sw      $t0, ($t1)
        addi    $t1, $t1, 4
        # left_image[5]
	li      $t0, 13
	sw      $t0, ($t1)
        addi    $t1, $t1, 4
        # left_image[6]
	li      $t0, 2
	sw      $t0, ($t1)
        addi    $t1, $t1, 4
        # left_image[7]
	li      $t0, 8
	sw      $t0, ($t1)
        addi    $t1, $t1, 4
        # left_image[8]
	li      $t0, 10
	sw      $t0, ($t1)
        addi    $t1, $t1, 4

        # right starting at $s1
        move    $s1, $t1
        # right_image[0]
	li      $t0, 4
	sw      $t0, ($t1)
        addi    $t1, $t1, 4
        # right_image[1]
	li      $t0, 15
	sw      $t0, ($t1)
        addi    $t1, $t1, 4
        # right_image[2]
	li      $t0, 8
	sw      $t0, ($t1)
        addi    $t1, $t1, 4
        # right_image[3]
	li      $t0, 0
	sw      $t0, ($t1)
        addi    $t1, $t1, 4
        # right_image[4]
	li      $t0, 2
	sw      $t0, ($t1)
        addi    $t1, $t1, 4
        # right_image[5]
	li      $t0, 12
	sw      $t0, ($t1)
        addi    $t1, $t1, 4
        # right_image[6]
	li      $t0, 3
	sw      $t0, ($t1)
        addi    $t1, $t1, 4
        # right_image[7]
	li      $t0, 7
	sw      $t0, ($t1)
        addi    $t1, $t1, 4
        # right_image[8]
	li      $t0, 11
	sw      $t0, ($t1)
        addi    $t1, $t1, 4

        # target starting at $s2
        move    $s2, $t1
        # implicit zero allocation

        jr      $ra

calculate_sad:
	li      $s3, 0
	move    $s4, $a0
        li      $t0, 4
        mul     $s4, $s4, $t0
        j       sad_body

sad_body:
	beq     $s3, $s4, branch_ra

        add     $t0, $s0, $s3
        lw      $a0, ($t0)

        add     $t0, $s1, $s3
        lw      $a1, ($t0)

        move    $t0, $ra
        la      $t1, abs_diff
	jal     jump_preserve

        add     $t0, $s2, $s3
        sw      $v0, ($t0)

        addi    $s3, $s3, 4
	j       sad_body

abs_diff:
        sub     $v0, $a0, $a1
        bgtz    $v0, branch_ra
        li      $t0, -1
        mul     $v0, $v0, $t0
        jr      $ra

recursive_sum:
        addi    $a1, $a1, -1
        bgtz    $a1, recursive_sum_calc
        li      $v0, 0
        jr      $ra

recursive_sum_calc:
        move    $t0, $ra
        la      $t1, recursive_sum
        jal     jump_preserve

        li      $t0, 4
        mul     $t0, $t0, $a1
        add     $t0, $t0, $a0
        lw      $t0, ($t0)
        add     $v0, $v0, $t0
        jr      $ra

## Explanation of jump_preserve:
# Jumps while preserving $ra, $a0, $a1 and the callee's $ra. We do
# this by conventionally requiring the original $ra be stored in $t0.
# The value in $t1 is used as the label to jump to. Thus a call to
# jump_preserve will always first move the $ra to $t0 and set $t1 to
# the desired label.
jump_preserve:
        addi    $sp, $sp, -16
        sw      $ra, ($sp)
        sw      $t0, 4($sp)
        sw      $a0, 8($sp)
        sw      $a1, 12($sp)
        jalr    $t1
        lw      $t0, ($sp)
        lw      $ra, 4($sp)
        lw      $a0, 8($sp)
        lw      $a1, 12($sp)
        addi    $sp, $sp, 16
        jr      $t0

# Convenience to jump to the return address on branching.
branch_ra:
        jr      $ra

end:
	j	end
