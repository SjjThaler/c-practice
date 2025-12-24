#include <stdio.h>

void set_stack() {
    int secret = 1337;
    printf("Setting secret to: %d at %p\n", secret, (void*)&secret);
}

void peek_stack() {
    int ghost; // Uninitialized!
    printf("Ghost value found: %d at %p\n", ghost, (void*)&ghost);
}

int main() {
    set_stack();
    peek_stack();
    return 0;
}

// unitialized variables are haunted!