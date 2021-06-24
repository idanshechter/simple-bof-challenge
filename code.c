#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void gg();
void print_colored(char* text, char* color);

int main(int argc, char* argv[])
{
	int attempts = 0, key = 0;
	char password[10];
	
	system("clear");

	printf("\033[0;36m");
	printf("\nYour mission is simple - crack this iprogram!\n");
	printf("The code is in your hands,\n");
	printf("find the vulnerability and exploit it to become system admin.\n");
	printf("You have 5 tries, GOOD LUCK!\n\n");
	printf("\033[0:0m");

	sleep(3);

	while (attempts < 5) {
		system("clear");
		
		printf("Enter password: ");
		gets(password);
		
		if(key != 0) {
			gg();
		}
		
		print_colored("[x] Authentication failed, please wait.", "red");
	
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
		exit(0);
}
