
#include <stdio.h>
#include <string.h>

void main(void) {

char flag[] = "rhitCTF{simple_buffer_overflow}";
char passcode[] = "5V@Stj\n";
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
