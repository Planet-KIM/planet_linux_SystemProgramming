#include <string.h>

char myStrcpy(char *dest, char *src){
	while (*src != 0){
		*dest = *src;
		dest++;
		src++;
	}
	*dest = 0;
}

