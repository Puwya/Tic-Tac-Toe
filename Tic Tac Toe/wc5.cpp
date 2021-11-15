#include "main.h"

void wc5(std::string** endptr, int* ml, int* ctr, int* mr)
{
	if (*ml == *ctr == *mr)
	{
		(**endptr) += "over";
	}
}