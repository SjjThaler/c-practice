#include <stdio.h>

int main() {
    int prior = 777;
    int value = 999;
    int *ptr = &value;

    printf("Secret value: %d\n", *ptr);
    
    // Peeking at the "next" position in the stack which is still empty
    printf("Future position value: %d\n", *(ptr - 1)); 
}

/*
another (Declared first)
Padding/Alignment (Empty space)
secret (Declared second)
ptr - 1 (Unallocated)
value of 0,"ptr - 1 */