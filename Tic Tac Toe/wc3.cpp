#include "main.h"

void wc3(std::string** endptr, int* tl, int* ml, int* bl)
{
	if (*tl == *ml == *bl)
	{
		(**endptr) += "over";
	}
}