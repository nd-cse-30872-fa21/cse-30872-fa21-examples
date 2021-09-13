/* Exercise 13-A: Subsets */

#include <stdio.h>

/* Functions */

int divisible_subsets(int n) {
    /* TODO: Determine how many subsets of {0...9} are divisible by N */
    return 0;
}

/* Main execution */

int main(int argc, char *argv[]) {
    int n;

    while (scanf("%d", &n) != EOF) {
    	printf("%d\n", divisible_subsets(n));
    }

    return 0;
}
