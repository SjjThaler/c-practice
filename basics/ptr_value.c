#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = malloc(sizeof(int));
    *ptr = 100;
    printf("%d\n", *ptr); //prints value of address
    printf("%p\n", ptr); //prints the adress itself

    free(ptr);
    return 0;
}
