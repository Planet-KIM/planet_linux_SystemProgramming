#include <stdio.h>
#include <string.h>

void main(){
	static char str[128];
	char str1[128];

	strcpy(str1, "This is test");
	strcpy(str1, str);


	printf("str = [%s]\n", str);
	printf("str1 = [%s]\n str1+1 = [%s]\n", str1, str1+1);
}

