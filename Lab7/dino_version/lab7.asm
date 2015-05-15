#
# Calculate sum from A to B.
#
# Authors: 
#	Dino Bollinger, Nicolas Hafner 
#
# Group: F32
#

.text
main:

	addi $t0, $zero, 10
	addi $t1, $zero, 10
	addi $t2, $zero, 0
loop:	
	add $t2, $t2, $t0 
	beq $t0, $t1, end 
	addi $t0, $t0, 1
	j loop
	# Put your sum S into register $t2
end:	 
	j	end	# Infinite loop at the end of the program. 
