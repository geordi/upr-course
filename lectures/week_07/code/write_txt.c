#include <stdio.h>

int main() {
    int a = 2, b = 3;

    FILE * f = NULL;

    f = fopen( "out.txt", "wt" );
    if ( !f ) {
        fprintf( stderr, "Unable to open file: %s (%s, %d)\n", "out.txt", __FILE__, __LINE__ );
    }

    fprintf( f, "%d %d\n", a, b );

    fclose( f );

    return 0;
}

