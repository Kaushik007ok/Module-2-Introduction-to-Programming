#include <stdio.h>
int main() {
 int a, b;
 // Input two integers
 printf("Enter first number: ");
 scanf("%d", &a);
 printf("Enter second number: ");
 scanf("%d", &b);
 // Arithmetic operations
 printf("\n--- Arithmetic Operations ---\n");
 printf("Addition (a + b) = %d\n", a + b);
 printf("Subtraction (a - b) = %d\n", a - b);
 printf("Multiplication (a * b) = %d\n", a * b);
 if (b != 0) {
 printf("Division (a / b) = %d\n", a / b);
 printf("Modulus (a %% b) = %d\n", a % b);
 } else {
 printf("Division and Modulus by zero are not allowed.\n");
 }
 return 0;
}
// Relational Operator
#include <stdio.h>
int main() 
{
 int a, b;
 // Input two integers
 printf("Enter first number: ");
 scanf("%d", &a);
 printf("Enter second number: ");
 scanf("%d", &b);
 // Arithmetic operations
 printf("\n--- Arithmetic Operations ---\n");
 printf("Addition (a + b) = %d\n", a + b);
 printf("Subtraction (a - b) = %d\n", a - b);
 printf("Multiplication (a * b) = %d\n", a * b);
 if (b != 0) {
 printf("Division (a / b) = %d\n", a / b);
 printf("Modulus (a %% b) = %d\n", a % b);
 } else {
 printf("Division and Modulus by zero are not allowed.\n");
 }
 return 0;
}
// Logical Operator
#include <stdio.h>
int main() 
{
 int a, b;
 // Input two integers
 printf("Enter first number: ");
 scanf("%d", &a);
 printf("Enter second number: ");
 scanf("%d", &b);
 // Logical operations
 printf("\n--- Logical Operations ---\n");
 printf("a && b (AND) : %d\n", a && b);
 printf("a || b (OR) : %d\n", a || b);
 printf("!a (NOT a) : %d\n", !a);
 printf("!b (NOT b) : %d\n", !b);
 return 0;
}