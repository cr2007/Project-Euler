#include <stdio.h>

int main(int argc, char const *argv[]) {
    int multiples = 0;
    multiples = 0;

    for (int i = 1; i < 1000; i++) {
        if ((i % 3 == 0) || (i % 5 == 0)) {
            multiples += i;
        }
    }

    printf("%d \n", multiples);
}
