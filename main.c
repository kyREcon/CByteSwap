/*

WTF?!?
------
A generic function for x86/x64 to perform byte order reversing just like the BSWAP
x86/x64 asm instruction (hxxp://x86.renejeschke.de/html/file_module_x86_id_21.html), but
with extra capabilities:

1. Support integer type variables of any size.
2. Support arrays of any size.
3. Support C/C++ compilers for 32-bit and 64-bit compilation.


You can use is to convert little-endian values to big-endian and viceversa and also reverse the
byte order of entire arrays.

Tested with MS Visual Studio (2013) and gcc (Debian 7.2.0-4) 7.2.0.


Performance Test
-----------------

CPU: i7-3740QM (2.7 GHz)

Reverse byte order on a 64-bit unsigned integer 100 million times (32/64-bit builds): < 1 second.
Reverse byte order on a 64-bit unsigned integer 1 billion times (32/64-bit builds): ~3 seconds.


Disclaimer
----------
I wrote this for fun to use in other private projects. Use at your own risk.


Author
------
Author: Kyriakos Economou (@kyREcon) / www.anti-reversing.com


MIT License

Copyright (c) [2017] [Kyriakos Economou]

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

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
