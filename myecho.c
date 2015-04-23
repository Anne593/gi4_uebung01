#include <stdio.h>

int main(int argc, char* argv[], char* envp[]) 
{
	int i;
	printf("%i", argc);
	for(i = 0; i < argc; ++i) printf("\n%s", argv[i]);
	printf("\n");
	return 0;
}
