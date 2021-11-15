#include "main.h"

void pwc3(std::string** endptr, int* tl, int* ml, int* bl)
{
	if (*tl == *ml == *bl)
	{
		(**endptr) += "over";
	}
}