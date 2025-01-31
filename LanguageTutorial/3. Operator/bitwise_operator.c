#include <stdio.h>
#include <stdint.h>

int main()
{
    uint16_t num1 = 1;  // 0000 0001
    uint16_t num2 = 5;  // 0000 0101

    /**
     * 0000 0001
     * 0000 0101
     * AND
     * 0000 0001 -> 1
     */
    printf("%d\n", num1 & num2);
    
    /**
     * 0000 0001
     * 0000 0101
     * OR
     * 0000 0101 -> 5
     */
    printf("%d\n", num1 | num2);

    /**
     * 0000 0001
     * 0000 0101
     * XOR
     * 0000 0100 -> 4
     */
    printf("%d\n", num1 ^ num2);

    /**
     * 0000 0001
     * NOT
     * 1111 1110 -> 0xFFFF FFFE
     */
    printf("0x%x\n", ~num1);

    /**
     * 0000 0101
     * Shift right 1 position
     * 0000 0010 -> 2
     */
    printf("%d\n", num2 >> 1);

    /**
     * 0000 0101
     * Shift left 2 position
     * 0001 0100 -> 20
     */
    printf("%d\n", num2 << 2);
}