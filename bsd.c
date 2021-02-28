/*************************************
 *              Fetchr               *
 *				     *
 *      2021 Fermi Technology        *
 *				     *
 *  Bryce Vandegrift, Owen Thamban,  *
 *   	 and Ethan Krieger	     *
 *				     *
 * GPL V3 2021			     *
 ************************************/

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
	system("cat /etc/hostname >> tmp");
	system("uname -s >> tmp");
	system("uname -r >> tmp");
	temp = fopen("tmp", "r");
	fgets(user, 20, temp);
	fgets(host, 20, temp);
	fgets(os, 10, temp);
	fgets(kernel, 20, temp);
	fclose(temp);
	system("rm tmp");

	if (strcmp(os, "FreeBSD\n") == 0)
	{
		printf("/\\,-'''''-,/\\		User: %s", user);
		printf("\\_)       (_/		Host: %s", host);
		printf("|           |		Kernel: %s", kernel);
		printf("|           |		\n");
		printf(" ;         ;		\n");
		printf("  '-_____-'		\n");
	} else
	{
		printf("Sorry your OS is not supported. Please open a issue at https://github.com/ncvfg234560/fetchr. :(\n");
	}

	return 0;
}