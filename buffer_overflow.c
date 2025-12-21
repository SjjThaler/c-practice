#include <stdio.h>
#include <string.h>

int main() {
    int authorized = 0; // 0 means "No", 1 means "Yes"
    char buffer[8];     // A small space for a name

    printf("Authorized: %d (Addr: %p)\n", authorized, (void*)&authorized);
    
    // This is dangerous! 'gets' doesn't check the size of the input.
    printf("Enter your name: ");
    gets(buffer); 

    if (authorized != 0) {
        printf("ACCESS GRANTED! You hacked the stack.\n");
    } else {
        printf("Access Denied.\n");
    }

    return 0;
}

// inputting long names like "AAAAAAAAAAAAA" spills over into the authorized variable
// sitting right next to the buffer in the stack

// can only be compiled by disabling security features (i.e. the stack canary) of the compiler
// gcc -fno-stack-protector -Wno-implicit-function-declaration buffer_overflow.c -o overflow_test