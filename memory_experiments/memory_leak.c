#include <stdlib.h>
#include <stdio.h>

int memory_leak() {
    int *ptr = malloc(1000 * sizeof(int)); // size of int == 4 bytes * 1000
    *ptr = 100;
    return 0;
    // doesn't free the heap and leaves a 4 byte orphan
}

int main() {
    for (int i = 0; i < 1000000; i++) { // 1 million * 4000 bytes
        memory_leak(); // approximately 4G of orphans
    }
    printf("Approximately 3 GB RAM leaked! Press any key to exit... \n");
    getchar();
    return 0; // OS reclaims the memory after the entire program exits
}
