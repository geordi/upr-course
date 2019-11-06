#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE * f = NULL;
    int a = 787567865;

    f = fopen( "out.txt", "wb" );
    if ( !f ) {
      fprintf( stderr, "Unable to open file: %s (%s, %d)\n", "out.txt", __FILE__, __LINE__ );
      exit( -1 );
    }

    fwrite( &a, sizeof( int ), 1, f );

    fclose( f );

    return 0;
}
