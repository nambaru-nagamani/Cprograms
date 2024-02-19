// To read and print n names

#include <stdio.h>

#include <stdlib.h>

#define LENGTH 20

void main()
{
	int counter, count;
	char **names;

	printf("How names you want to print: ");
	scanf("%d", &count);

	names = (char**)malloc(count * sizeof(char*));

	for (counter = 0; counter < count; counter++)
	{
		names[counter] = (char*)malloc(LENGTH * sizeof(char));
		printf("Enter name %d of %d: ", counter + 1, count);
		scanf("%s", names[counter]);
	}

	for (counter = 0; counter < count; counter++)
	{
		printf("Name %d of %d: %s\n", counter + 1, count, names[counter]);
	}
}