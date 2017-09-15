#ifndef C_BYTE_SWAP_H_
#define C_BYTE_SWAP_H_

#include <stdlib.h> //size_t declaration

#ifdef __cplusplus
extern "C" void CByteSwap(unsigned char * source, size_t size);
#else
void CByteSwap(unsigned char * source, size_t size);
#endif

#endif


/*

Parameters
----------
source: pointer to the integer or to the array where byte order will be reversed
size: size of the the integer or of the array where byte order will be reversed

*/