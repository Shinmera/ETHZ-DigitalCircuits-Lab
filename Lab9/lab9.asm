#
# Calculate sum from A to B.
#
# Authors: 
#	X Y, Z Q 
#
# Group: ...
#

.text
main:
	ADDI    $t0, $0, 0
        ADDI    $t1, $0, 200
 
        ADDI 	$t7, $t0, 1
        multu   $t0, $t7
        mflo    $t3
        srl 	$t3, $t3, 1
        
        ADDI    $t7, $t1, 1
        multu   $t1, $t7
        mflo    $t4
        srl 	$t4, $t4, 1
        
        SUB 	$t2, $t4, $t3
        ADD 	$t2, $t2, $t0
        
end:	
	J	end	# Infinite loop at the end of the program. 
