#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[])
{
	if(argc != 2) {
		printf("Usage: %s <input> (Use %s -h for help)\n", argv[0], argv[0]);
		return 1;
	}

	if(strcmp(argv[1], "-h") == 0) {
		printf("\nMENU\n");
		printf("%s -h -> Display this menu.\n", argv[0]);
		printf("%s -e -> Explain the challenge.\n\n", argv[0]);
	}

	if(strcmp(argv[1], "-e") == 0) {
		printf("\nEXPLANATION\n");
		printf("Your mission is simple - hack this program!\n");
		printf("The code is in your hands,\n");
		printf("find the vulnerability and  exploit it to become system admin.\n\n");
	}





	//strcpy(password, argv[1]);

	//printf("Username: %s", username);

	return 0;
}
