#include <stdio.h>


int main(){
	// Access a null pointer, which will result in a segmentation fault (crash)
	int *ptr = NULL;
	*ptr = 42;

	return 0;

}
