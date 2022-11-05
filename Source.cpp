#include <iostream.h>


void my_print(char* string)
{
	if(string == NULL)
		return;

	printf("Tocmai ati incercat sa printati stringul:\n);

	for(int i = 0; i < strlen(string); i++)
		printf("%c", string[i]);
	printf("\n");
}

int main()
{
	my_print("Hej Sokoly!");
	return 1;
}
