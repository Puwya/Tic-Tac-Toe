#include "main.h"

void wc8(std::string** endptr, int* tr, int* ctr, int* bl)
{
	if (*tr == *ctr == *bl)
	{
		(**endptr) += "over";
	}
}