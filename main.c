#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int repeat = 1;
    int a, b, c;

    srand(time(NULL));

    while (repeat) {
        a = rand() % 100;
        b = rand() % 100;
        c = rand() % 100;

        printf("\nTrojúhelník o stranách a=%d, b=%d a c=%d ", a, b, c);

        if ((a + b > c) && (a + c > b) && (c + b > a)) {

            printf("LZE sestrojit.");
            repeat = 0;
        } else {
            printf("NELZE sestrojit.");
        }
    }
    return 0;
}
