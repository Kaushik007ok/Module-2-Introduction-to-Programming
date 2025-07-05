#include <stdio.h>
int main() {
 int number = 10;
 int *ptr; // Pointer declaration
 ptr = &number; // Pointer initialization (stores address of number)
 printf("Original value of number: %d\n", number);
 // Using pointer to modify the value
 *ptr = 25;
 printf("Modified value of number using pointer: %d\n", number);
 return 0;
}