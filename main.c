
#include <stdio.h>
#include "CByteSwap.h"

int main()
{

	//Un-comment following examples for testing
	unsigned short toswap = 0x4142;
	//unsigned long toswap = 0x12345678;
	//unsigned long long toswap = 0x1234567890abcdef;
	//unsigned char toswap[] = { 0, 1, 3, 4, 5, 6, 7, 8, 9 };	
	
	CByteSwap((unsigned char *)&toswap, sizeof(toswap));
	
	printf("%s ", "Output:");
	printf("%hX", toswap); //Print unsigned short swapped integer.
	//printf("%lX", toswap); //Print unsigned long swapped integer.
	//printf("%llX", toswap); //Print unsigned long long swapped integer.
	//for (size_t i = 0; i < sizeof(toswap); i++)  printf("%d ", toswap[i]); //Print swapped array. Uncomment to print array byte swapping result.
	
	getchar();
	return 0;
}
