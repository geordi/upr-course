#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

typedef struct ListInt_ ListInt;

struct ListInt_ {
    int value;
    ListInt * next;
};

ListInt * list_int_new( const int value ) {
    ListInt * list = (ListInt *)malloc( sizeof( ListInt ) );

    list->value = value;
    list->next = NULL;

    return list;
}

void list_int_append( ListInt * self, const int value ) {
    ListInt * ni = list_int_new( value );

    ListInt * p = self;
    while( p->next ) {
        p = p->next;
    }

    p->next = ni;
}

void list_int_print( ListInt * self ) {
    ListInt * p = self;

    while( p ) {
        printf( "%d ", p->value );
        p = p->next;
    }

    printf( "\n" );
}

int main() {
    ListInt *li = list_int_new( 5 );

    list_int_append( li, 6 );
    list_int_append( li, 16 );
    list_int_append( li, 61 );

    list_int_print( li );

    return 0;
}















/*
typedef struct Array_ Array;

struct Array_ {
    int * items;
    int len;
};

Array * array_new( const int len ) {
    Array * array = NULL;

    array = (Array *)malloc( sizeof( Array ) );

    array->items = (int *)malloc( len * sizeof( int ) );
    array->len = len;

    return array;
}


int stat( const Array * a ) {
    int max = a->items[ 0 ];

    for ( int i = 0; i < a->len; i++ ){
        if ( a->items[ i ] > max ) {
            max = a->items[ i ];
        }
    }

    return max;
}

int main() {
    Array * a = array_new( 10 );

    for ( int i = 0; i < a->len; i++ ){
        a->items[ i ] = i + 1;
    }

    printf( "Array len= %d\n", a->len );

    printf( "Max= %d\n", stat( a ) );


    return 0;
}
*/
