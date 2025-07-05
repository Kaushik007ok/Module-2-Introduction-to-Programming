#include <stdio.h>
#include <string.h>
int main() {
 char str1[100], str2[100]; // Allocate enough space
 char result[200]; // Final string to hold the concatenated result
 // Input two strings
 printf("Enter the first string: ");
 fgets(str1, sizeof(str1), stdin);
 str1[strcspn(str1, "\n")] = '\0'; // Remove newline character
 printf("Enter the second string: ");
 fgets(str2, sizeof(str2), stdin);
 str2[strcspn(str2, "\n")] = '\0'; // Remove newline character
 // Copy first string into result and then concatenate second string
 strcpy(result, str1);
 strcat(result, str2);
 // Display the concatenated string and its length
 printf("\nConcatenated String: %s\n", result);
 printf("Length of Concatenated String: %lu\n", strlen(result));
 return 0;
}