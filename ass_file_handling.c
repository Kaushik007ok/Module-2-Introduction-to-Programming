#include <stdio.h>

int main() {
    FILE *file;
    char str[] = "Hello! This is a sample text written to the file.";
    char buffer[100];

    // Step 1: Create and open file in write mode
    file = fopen("example.txt", "w");
    if (file == NULL) {
        printf("Error opening file for writing!\n");
        
    }

    // Step 2: Write string to file
    fprintf(file, "%s", str);

    // Step 3: Close the file
    fclose(file);

    // Step 4: Reopen the file in read mode
    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Error opening file for reading!\n");
        
    }

    // Step 5: Read and display contents
    printf("Contents of the file:\n");
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }

    // Close file after reading
    fclose(file);

    
}
