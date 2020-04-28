// test file to execute the collatz conjecture on 1 proc
#include <stdio.h>
#include <stdlib.h>

typedef unsigned long long ullong;

ullong hotpo(ullong currn);

int main(int argc, char** argv) {
    ullong n, // track current n
        high, // highest number recorded
        nmax = (argc > 1) ? atoi(argv[1]) : 50,
        imax = 2000000; // max number of iteration for a seed n 
    

    high = 0; // starting with n itself as highest

    for(ullong j = 1; j <= nmax; ++j) {
        n = j;
        // printf("n: %lld", n);

        for(ullong i = 1; i <= imax; ++i) {

            n = hotpo(n);

            if(n > high) high = n;

            // if(i < 10) printf(",%lld",n);
            

            if( n == 1 ) break; // stop if reach 1

        }
        // printf("\n");
    }

    printf("\nHigh: %lld\n", high);



    return 0;
}


ullong hotpo(ullong currn) {
    return (
        (currn % 2 == 0)? currn/2 : 3*currn + 1
    );
}