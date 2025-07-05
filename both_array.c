// // One Dimensional Array
#include <stdio.h>
int main() 
{
//  int arr[5];
//  int i;
//  // Input 5 integers
//  printf("Enter 5 integers:\n");
//  for (i = 0; i < 5; i++) {
//  scanf("%d", &arr[i]);
//  }
//  // Display the integers
//  printf("The 5 integers are:\n");
//  for (i = 0; i < 5; i++) {
//  printf("%d ", arr[i]);
//  }
//  printf("\n");
// Two Dimensional Array
 int matrix[3][3];
 int row, col, sum = 0;
 // Input 3x3 matrix
 printf("\nEnter elements for a 3x3 matrix:\n");
 for (row = 0; row < 3; row++) 
 {
    for (col = 0; col < 3; col++) 
    {
        scanf("%d", &matrix[row][col]);
    }
 }
 // Display the matrix and calculate sum
 printf("The 3x3 matrix is:\n");
 for (row = 0; row < 3; row++) {
 for (col = 0; col < 3; col++) {
 printf("%d ", matrix[row][col]);
 sum += matrix[row][col]; // Add each element to sum
 }
 printf("\n");
 }
 // Display sum
 printf("Sum of all elements in the matrix = %d\n", sum);
 return 0;
}