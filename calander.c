#include <stdio.h>
int main() {
 int number, month;
 // --- Part 1: Check Even or Odd ---
 printf("Enter an integer number: ");
 scanf("%d", &number);
 if (number % 2 == 0) {
 printf("The number %d is EVEN.\n", number);
 } else {
 printf("The number %d is ODD.\n", number);
 }
 // --- Part 2: Display Month Name ---
 printf("\nEnter a number (1 to 12) to get the month name: ");
 scanf("%d", &month);
 printf("Month: ");
 switch (month) {
 case 1:
printf("January\n");
break;
 case 2:
printf("February\n");
break;
 case 3:
printf("March\n");
break;
 case 4:
printf("April\n");
break;
 case 5:
printf("May\n");
break;
 case 6:
printf("June\n");
break;
 case 7:
printf("July\n");
break;
 case 8:
printf("August\n");
break;
 case 9:
printf("September\n");
break;
 case 10:
printf("October\n");
break;
 case 11:
printf("November\n");
break;
 case 12:
printf("December\n");
break;
 default:
printf("Invalid month number! Please enter between 1 and 12.\n");
 }
 return 0;
}