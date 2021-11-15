#include "main.h"

void wc1(std::string** endptr, int* tm, int* ctr, int* bm)
{
	if (*tm == *ctr == *bm)
	{
		(**endptr) += "over";
	}
}