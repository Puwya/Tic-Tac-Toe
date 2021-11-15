#include "main.h"

void pwc4(std::string** endptr, int* tl, int* tm, int* tr)
{
	if (*tl == *tm == *tr)
	{
		(**endptr) += "over";
	}
}