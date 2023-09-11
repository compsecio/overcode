
#include <stdio.h>
#include <string.h>

void main(void) {

// Replace the line below with the real flag.
char flag[] = "replace with real flag";

// Replace the line below with the actual passcode
char passcode[] = "123456\n";
char nickname[12];
char user_passcode[7];

printf("\nWhat should we call you: ");
scanf("%s", nickname);

printf("\nGreetings %s. ", nickname);
printf("Please enter the six character passcode: ");
scanf("%s", user_passcode);

if (strncmp(passcode, user_passcode, 6) == 0)
{
    printf("\nNice work! The flag is %s", flag);
}
else {
    printf("\nSorry. passcode is incorrect.");
}

return;

}
