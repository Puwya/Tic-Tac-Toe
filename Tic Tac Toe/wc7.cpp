#include "main.h"

void wc7(std::string** endptr, int* tl, int* ctr, int* br)
{
	if (*tl == *ctr == *br)
	{
		(**endptr) += "over";
	}
}