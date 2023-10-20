// In this example we'll demonstrate a page fault accessing memory that is not currently available in the physical RAM
//
//
#include <stdio.h>

int main(){
	int *ptr=NULL; // Initialize a pointer to NULL (Unallocated memory)
	int value;


	// attempt to acces memory through the null pointer
	value = *ptr; // This will trigger a page fault
	

	printf("Accessed memory: %d", value); // This line may not be reached if a page fault occurs
	

	return 0;
}
