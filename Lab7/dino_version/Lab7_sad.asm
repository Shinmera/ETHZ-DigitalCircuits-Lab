#
# Sum of Absolute Differences Algorithm
#
# Authors: 
#	Dino Bollinger, Nicolas Hafner 
#
# Group: F32
#

#Store data
.data
left_image:     .word 5, 16, 7, 1, 1, 13, 2, 8, 10
right_image:    .word 4, 15, 8, 0, 2, 12, 3, 7, 11
target_image:   .word 0,  0, 0, 0, 0,  0, 0, 0,  0


.text
main:

	la      $s0, left_image
        la      $s1, right_image
        la      $s7, target_image
		     	     
	addi $s2, $0, 0 # $s1 = i = 0
	addi $s3, $0, 9	# $s2 = image_size = 9
	add $s4, $0, $0
	

loop:

	# Check if we have traverse all the elements 
	# of the loop. If so, jump to end_loop:
	beq $s2, $s3, end_loop
	
	
	# Load left_image{i} and put the value in the corresponding register
	# before doing the function call
	add  $t0, $s0, $s4
	lw $a0, ($t0)
	
	
	# Load right_image{i} and put the value in the corresponding register
	add $t0, $s1, $s4
	lw $a1, ($t0)
	
	
	# Call abs_diff
	jal abs_diff
	
	#Store the returned value in sad_array[i]
	add $t0, $s7, $s4
	 sw $v0 , ($t0)  
	
	# Increment variable i and repeat loop:
	addi $s2, $s2, 1
	addi $s4, $s4, 4
	j loop 

	
end_loop:

	#Calculate the base address of sad_array (first argument
	#of the function call)and store in the corresponding register   
	move $a0, $s7
	
	# Prepare the second argument of the function call: the size of the array
	add $a1, $s3, $0
	
	# Call to funtion
	jal recursive_sum
	
	#Store the returned value in $t2
	move $t2, $v0
	

end:	
	j	end	# Infinite loop at the end of the program. 


#Calculate the difference of each individual vector element
abs_diff:
	addi $sp, $sp, -8
	sw $t0, 0($sp)
	sw $t1, 4($sp)
	sub $t0, $a0, $a1
	slt $t1, $t0, $0
	beq $t1, 1, negative

abs_diff_end:
	add $v0, $t0, $0
	lw $t1, 4($sp)
	lw $t0, 0($sp)
	addi $sp, $sp, 8
	jr $ra
	 
negative:
	addi $t7, $0, -1
	mul $t0, $t0, $t7
	j abs_diff_end 
	
  
# Recurisvely adds up the differences
recursive_sum:
	addi $sp, $sp, -8
	sw $a1, 0($sp)
	sw $ra, 4($sp)
	bne $a1, $0, else
	add $v0, $0, $0
	addi $sp, $sp, 8
	jr $ra 	
else:	
	addi $a1, $a1, -1
	jal recursive_sum
	li     $t0, 4
	mul   $t0, $t0, $a1
	add   $t0, $t0, $a0
        lw    $t0, ($t0)
        add $v0, $v0, $t0
	lw $ra, 4($sp)
	lw $a1, 0($sp)
	addi $sp, $sp, 8
	jr $ra
	
