## Load the Program
``` gcc -g -o crash01 core_crash01* ```

## Debug the problem
```
Core was generated by `./crash01'.
Program terminated with signal SIGSEGV, Segmentation fault.
#0  0x000055705c5ee161 in main () at crash01.c:12
12		value = *ptr; // This will trigger a page fault

```

## Problem in line 12 where we have dereferenced *ptr
## Lets the value of *ptr
```
(gcc) print ptr
$1 = (int *) 0x0
``` 
## The output indicates that the value of ptr is a NULL pointer
