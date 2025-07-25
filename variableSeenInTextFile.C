/*war goddess 300 program test
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

FILE *input_to_text_file;
input_to_text_file = fopen("test.txt", "w");

// Statements must end in a semicolon (;)
// Code elements are case sensitive

printf("Enter your first name: ");
fgets(variable, sizeof(variable), stdin);
variable[strcspn(variable, "\n")] = 0;

fprintf(input_to_text_file, "%s", variable);

printf("%s, what you entered stored in the variable \"variable\" at the memory address %p is stored in a file", variable, &variable);



	return 0;

}
