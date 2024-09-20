#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc < 3) {
        return 1;
    }

    double a1 = atof(argv[1]);
    double a2 = atof(argv[2]);

    if (a2 == 0) {
        printf("DIV ZERO NOT ALLOWED!\n");
    } else {
        printf("%.4f\n", a1 / a2);
    }

    return 0;
}
