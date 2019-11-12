#include <stdio.h>
#include <stdlib.h>

int write_to_file( int argc, char ** argv ) {
    FILE * f = NULL;

    f = fopen( argv[ 1 ], "wt" );
    if ( !f ) {
      fprintf( stderr, "Unable to open file: %s (%s, %d)\n", "out.txt", __FILE__, __LINE__ );
      exit( -1 );
    }

    for ( int i = 2; i < argc; i++ ) {
        fprintf( f, "%s\n", argv[ i ] );
    }

    fclose( f );

    return 0;
}

int main( int argc, char ** argv ) {
    printf( "argc: %d\n", argc );

    for ( int i = 0; i < argc; i++ ) {
        printf( "argv[ %d ]: %s\n", i, argv[ i ] );
    }

    write_to_file( argc, argv );
    
    return 0;
}
