/*************************************
 *              Fetchr               *
 *				     *
 *      2021 Fermi Technology        *
 *				     *
 *  Bryce Vandegrift, Owen Thamban,  *
 *   	  and Ethan Krieger	     *
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
	system("uname -s >> tmp");
	system("uname -r >> tmp");
	temp = fopen("tmp", "r");
	fgets(user, 20, temp);
	fgets(os, 10, temp);
	fgets(kernel, 20, temp);
	fclose(temp);
	system("rm tmp");

	printf("Add RHEL logo");

	return 0;
}
