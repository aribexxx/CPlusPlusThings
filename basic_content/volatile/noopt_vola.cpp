/* Compile code without optimization option */
#include <stdio.h> 
int main(void) 
{   //Initial value of local : 10 
    //Modified value of local: 10 
    const int local = 10; 
    int *ptr = (int*) &local; 
    //const int local2 = 10; 
    //int * ptr2 = &local2;// a value of type "const int *" cannot be used to initialize an entity of type "int *"
    printf("Initial value of local : %d \n", local); 

    *ptr = 100; 

    printf("Modified value of local: %d \n", local); 

    return 0; 
} 
