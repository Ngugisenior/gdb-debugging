// To address the Page faults due to trying to access a memory location that is currently unavailable, we would need to
// 1. Initialize ptr: If ptr should point to a valid memory location, make sure it is properly initialized with a valid memory address. For example, you can allocate memory dynamically using ```malloc``` or assign it to a valid variable.
// 2. Check for NULL: Always check if ptr is a NULL pointer before dereferencing it. Trying to dereference a NULL pointer is a common cause of segmentation faults.
// 3. Ensure valid memory allocation: If ptr points to dynamically allocated memory, verify that the allocation was successful and that the memory is still valid when you attempt to access it. Memory allocated with ```malloc``` should be checked for null.
// 4. Avoid Using uninitialized pointers: Always initialize pointers to valid values before using them.
// 5. Use Proper memory management: If ptr is related to memory management (e.g freeing memory with free or delete), make sure you handle memory allocation and deallocation correctly to prevent memory access violations.
//
//
//
#include <stdio.h>
#include <stdlib.h>

int main(){
        int *ptr=malloc(sizeof(int)); // allocate dynamic memory
	


        if (ptr != NULL){
		*ptr = 42; // You can now safely dereference ptr
	} else {
		// Handle the case where ptr is a null pointer
	}
	int value;


        // attempt to acces memory through the null pointer
        value = *ptr; // This will trigger a page fault


        printf("Accessed memory: %d\n", value); // This line may not be reached if a page fault occurs

	free(ptr);
        return 0;
}

