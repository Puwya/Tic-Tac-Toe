#include "main.h"

void wc4(std::string** endptr, int* tl, int* tm, int* tr)
{
	if (*tl == *tm == *tr)
	{
		(**endptr) += "over";
	}
}