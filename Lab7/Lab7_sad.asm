#
# Sum of Absolute Differences Algorithm
#
# Authors: 
#	X Y, Z Q 
#
# Group: ...
#

.text
main:
	lui     $t1, 0x0000 # Address of first element in the vector
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

loop_init:
	li      $s3, 0
	li      $s4, 9

loop:
	beq     $s3, $s4, loop_end
	
	move    $t1, $s0
        add     $t1, $t1, $s3
        lw      $a0, ($t1)
	
        move    $t1, $s1
        addi    $t1, $t1, $s3
        lw      $a1, ($t1)
	
	jal     abs_diff

        move    $t1, $s2
        addi    $t1, $t1, $s3
        sw      $v0, ($t1)
        
        addi    $s1, $s1, 1
	j       loop
	
loop_end:
        move    $a0, $s2
        move    $a1, $s4
        jal     recursive_sum

        move    $t2, $v0

end:	
	j	end

abs_diff:
        sub     $v0, $a0, $a1
        bgtz    $v0, abs_diff_return
        li      $t1, -1
        mul     $v0, $v0, $t1

abs_diff_return:
        jr      $ra

recursive_sum:
        addi    $sp, $sp, -8
        addi    $a1, $a1, -1
        sw      $a1, ($sp)
        sw      $ra, 4($sp)
        bgtz    $a1, recursive_sum_calc
        li      $v0, 0
        addi    $sp, $sp, 8
        jr      $ra

recursive_sum_calc:
        jal     recursive_sum
        lw      $a1, ($sp)
        lw      $ra, 4($sp)
        li      $t7, 4
        mul     $t1, $a1, $t7
        add     $t1, $t1, $a0
        lw      $t2, ($t1)
        add     $v0, $v0, $t2
        addi    $sp, $sp, 8
        jr      $ra
        
