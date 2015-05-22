        .text
main:   
        addi    $s3, $0, 0
        addi    $s4, $0, 10

        move    $a0, $s3
        jal     consecutive_sums
        addi    $s0, $v0, 0

        move    $a0, $s4
        jal     consecutive_sums
        addi    $s1, $v0, 0

        sub     $v0, $s0, $s1
        
consecutive_sums:
        addi    $t0, $a0, 1
        multu   $t0, $a0
        mflo    $v0
        jr      $ra
