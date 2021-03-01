#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char user[20];
char host[20];
char kernel[20];
char os[10];
FILE *temp;

int main()
{
	system("whoami >> tmp");
	system("uname -s >> tmp");
	system("uname -r >> tmp");
	temp = fopen("tmp", "r");
	fgets(user, 20, temp);
	fgets(os, 10, temp);
	fgets(kernel, 20, temp);
	fclose(temp);
	system("rm tmp");

	//if (strcmp(os, "Darwin\n") == 0)
	//{
		printf("         (/     	User: %s", user);
		printf("    .---__--.   	\n");
		printf("   /         \\  	Kernel: %s", kernel);
		printf("  |         /   	\n");
		printf("  |         \\_  	\n");
		printf("   \\         /  	\n");
		printf("    \\._.-._./`   	\n");
	//} else 
	//{
		printf("Sorry your OS is not supported. Please open an issue at https://github.com/ncvfg234560/fetchr.\n");
	//}

	return 0;
}
