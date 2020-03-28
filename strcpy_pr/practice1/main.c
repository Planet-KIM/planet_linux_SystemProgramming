#include <stdio.h>

extern char myStrcpy(char[128], char[128]);

void main(){
	char dest[128];
	myStrcpy(dest, "This");
	printf("[%s]\n", dest); //[This]가 출력되어야합니다.
}

