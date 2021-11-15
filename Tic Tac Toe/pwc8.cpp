#include "main.h"

void pwc8(std::string** endptr, int* tr, int* ctr, int* bl)
{
	if (*tr == *ctr == *bl)
	{
		(**endptr) += "over";
	}
}