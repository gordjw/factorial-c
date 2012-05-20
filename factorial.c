#include <stdio.h>
#include <stdlib.h>

double do_hello_factorial(double val) {
	if (val <= 1) return 1;   
	return val * do_hello_factorial(val - 1);
}

int main( int argc, char** argv ) {
	printf( "%f", do_hello_factorial( atof( argv[1]) ) );
	printf( "\n" );
}

