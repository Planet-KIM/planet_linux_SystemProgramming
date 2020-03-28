#include "const.h"
#include <stdio.h>

int  func(){
	return (RET);
}

int fun(){
	int i;

	i = func();
	printf("%d, %d\n", i, CT);
}
