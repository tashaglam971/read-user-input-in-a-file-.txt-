/*war goddess 300 

 *
 * i'm a beginner, i try to see if what is entered in the input
 * will be stored in the file (.txt)
 * i'm an ultra beginner learning C, C++, rust, SQL, networks,
 * linux, OpenBSD, etc
 */


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {

char variable[20];

FILE *fptr;
fptr = fopen("test.txt", "w");

printf("Enter your first name: ");
fgets(variable, sizeof(variable), stdin);
variable[strcspn(variable, "\n")] = 0;

fprintf(fptr, "%s", variable);

printf("%s, what you entered stored in the variable \"variable\" at the memory address %p is stored in a file", variable, &variable);



	return 0;

}
