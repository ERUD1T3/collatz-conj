// test file to execute the collatz conjecture on 1 proc
#include <stdio.h>
#include <stdlib.h>
typedef unsigned int uint;

uint hotpo(uint currn);

int main(int argc, char** argv) {
    uint n, // track current n
        imax = 1000, // max number of iteration for a seed n
        nmax = (argc > 1) ? atoi(argv[1]) : 6; 
    

    

    for(uint j = 1; j <= nmax; ++j) {
        n = j;
        printf("n: %d", n);
        for(uint i = 1; i <= imax; ++i) {

            n = hotpo(n);
            printf(",%d",n);
            if( n == 1 ) break; // stop if reach 1

        }
        printf("\n");
    }

    printf("\n");



    return 0;
}


uint hotpo(uint currn) {
    return (
        (currn % 2 == 0)? currn/2 : 3*currn + 1
    );
}