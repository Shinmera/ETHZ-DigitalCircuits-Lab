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
	ADDI    $t0, $0, 5
        ADDI    $t1, $0, 100
        ADDI    $t2, $0, 0
loop:
        ADD     $t2, $t2, $t0
        BEQ     $t2, $t1, end
        ADDI    $t0, $t0, 1
        J       loop
end:	
	J	end	# Infinite loop at the end of the program. 
