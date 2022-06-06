/* Compile code with optimization option */
#include <stdio.h> 
//
int main(void) 
{   //Initial value of local : 10 
    //Modified value of local: 100 
    const volatile int vol = 10; 
    int * ptr_vol = (int*) & vol; 
    printf("Initial value of vol : %d \n", vol); 
    *ptr_vol = 100; 
    printf("Modified value of vol: %d \n", vol); 
//No volatile
    const int local = 10; 
    int *ptr = (int*) &local; 
    printf("Initial value of local : %d \n", vol); 
    *ptr = 100; 
    printf("Modified value of local: %d \n", vol); 
    return 0; 
} 
