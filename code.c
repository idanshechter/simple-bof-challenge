#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char* argv[])
{
	int attempts = 0;

	system("clear");

	printf("\033[0;36m");
	printf("\nYour mission is simple - crack this program!\n");
	printf("The code is in your hands,\n");
	printf("find the vulnerability and exploit it to become system admin.\n");
	printf("You have 5 tries, GOOD LUCK!\n\n");
	printf("\033[0:0m");

	sleep(3);

	while (attempts < 5) {
		if (authenticate("CrackMe") != 0) {
			gg();
			system("clear");
			return 0;
		} else {
			print_colored("[x] Authentication failed, please wait.", "red");
		}
		
		++attempts;
		sleep(1);

		if (attempts == 4) {
			print_colored("[i] This is your last change! do your best!", "green");
		}

		if (attempts == 5) {
			system("clear");
			print_colored("~ You failed, good luck next time! ~", "red");

			sleep(3);
			system("clear");
		}
	}

	return 0;
}

int authenticate(char* username)
{
	int is_admin = 0;
	char password[10];

	printf("Enter password: ");
	gets(password);
	
	/* Developer Note:
	 * Compiler warning: the 'gets' function is dangerous and should not be used.
	 * Can this cause problems?
	 */

	if ((strcmp(username, "admin") == 0) && (strcmp(password, "admin") == 0)) {
		is_admin = 1;
	}

	return is_admin;
}

void print_colored(char* text, char* color)
{
	if (strcmp(color, "red") == 0) {
		printf("\033[0;31m");
		printf("%s\n\n", text);
		printf("\033[0;0m");
	}
	
	if (strcmp(color, "green") == 0) {
		printf("\033[0;32m");
		printf("%s\n\n", text);
		printf("\033[0;m");
	}
}

void gg() 
{
	system("clear");
	print_colored("You WIN!", "green");
	sleep(5);
}
