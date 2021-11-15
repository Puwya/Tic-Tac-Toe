#include "main.h"

void pwc7(std::string** endptr, int* tl, int* ctr, int* br)
{
	if (*tl == *ctr == *br)
	{
		(**endptr) += "over";
	}
}