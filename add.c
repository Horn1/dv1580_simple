#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        return 1;
    }
    
    int a1 = atoi(argv[1]);
    int a2 = atoi(argv[2]);
    printf("%d\n", a1 + a2);
    
    return 0;
}
