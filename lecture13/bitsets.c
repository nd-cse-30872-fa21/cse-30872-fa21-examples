/* bitsets.c */

#include <stdint.h>
#include <stdio.h>

int main(int argc, char *argv[]) {
    int elements[] = {1, 2, 4, 0};
    uint8_t bitset = 0;		    /* 1. Initialize bitset */

    /* Add elements to bitset */
    for (size_t i = 0; elements[i]; i++) {
    	bitset |= 1<<elements[i];   /* 2. Add element to bitset */
    }

    printf("%u\n", bitset);

    /* Test for elements in bitset */
    for (size_t i = 0; i < 6; i++) {
    	if (bitset & 1<<i) {	    /* 3. Test if element is in bitset */
    	    printf("%lu\n", i);
	}
    }

    /* Remove elements from bitset */
    for (size_t i = 0; elements[i]; i++) {
    	bitset ^= 1<<elements[i];   /* 4. Remove element from bitset */
    }
    
    printf("%u\n", bitset);
    return 0;
}
