#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <pool.h>


#define MAX_RAND 1000000
#define NUM_ALLOCS 4000


int main()
{
    printf( "Let's pool!\n\n" );

    pool_t *pool_a = pool_new( 0 );
    pool_t *pool_b = pool_new( rand() % MAX_RAND );

    int i, size_a, size_b;
    char *buf_a, *buf_b;
    
    for( i = 0; i < NUM_ALLOCS; i++ )
    {
	pool_set( POOL_SET_SIZE, rand() % MAX_RAND );
    
	size_a = rand() % MAX_RAND;
	size_b = rand() % MAX_RAND;
		
	if( ( buf_a = pool_alloc( pool_a, size_a ) ) ) {
	    buf_a[size_a-1] = '.'; printf( "a" );
	}
	else {
	    printf( "x" );
	}
	
	if( ( buf_b = pool_alloc( pool_b, size_b ) ) ) {
	    buf_b[size_b-1] = '.'; printf( "b" );
	}
	else {
	    printf( "x" );
	}	
    }
    
    printf( "\nLet's get out the pool kids.\n" );
    
    pool_free( pool_a );
    pool_free( pool_b );

    printf( "Bye, thanks!\n" );
    return 0;
}
