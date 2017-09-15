#include "CByteSwap.h"

void CByteSwap(unsigned char * source, size_t size)
{
	unsigned char tmp;
	size_t start_index, end_index;

	switch (size)
	{
	case 0: //if size less or equal to 1, we just return.
		break;
	case 1:
		break;
	case 2:  //if size equals 2, swap here.
		*(unsigned short *)source = ((*(unsigned short *)source << 8) | (*(unsigned short *)source >> 8));
		break;
	default: //if size greater than 2, do a generic loop and reverse byte order.
		start_index = 0;
		end_index = size - 1;
		do
		{
			tmp = source[start_index];
			source[start_index] = source[end_index];
			source[end_index] = tmp;
			start_index++;
			end_index--;
		} while (start_index <= end_index - 1);
	}
}
