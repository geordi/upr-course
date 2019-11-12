#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int * p = (int *)malloc( 10000 * sizeof( p[ 0 ] ) );

    for ( int i = 0; i < 100; i++ ) {
        p[ i ] = i;
    }

    // free of p is missing
    // will be detected by address sanitizer

    return 0;
}
