#include <stdio.h>
#include <stdlib.h>

int main()
{
	short *begin;
	long *total;
	begin = (short *)(malloc(sizeof(short)));
	total = (long *)(malloc(sizeof(long)));
	*total = 0X0100AB00;
	*begin = 0x0100;
	if (*begin == *((short *)total + 1)){
		printf("LittleEndian");
	}
	else{
		printf("BigEndian");
	}
}
