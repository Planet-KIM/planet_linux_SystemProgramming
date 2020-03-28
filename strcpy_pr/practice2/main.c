#include <stdio.h>
#include <string.h>

extern int findChar(char *, char);

void main(){
	int i;
	char ch, str[128];

	strcpy(str, "This is test");
	printf("str = [%d]\n", str);

	i = findChar(str, 'i');
	printf("[%d]\n", i);
}


