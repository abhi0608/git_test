#include <iostream>  
using namespace std;

// Declare a volatile pointer to the memory-mapped device  
volatile int* device_ptr = (volatile int*) 0x1000;  

int main() {  
    // Read the current value of the device register  
    int value = *device_ptr;  
printf("Current device value: %d\n", value);  
    // Modify the value of the device register  
    *device_ptr = 42;  
printf("New device value: %d\n", *device_ptr);  
    return 0;  
}  