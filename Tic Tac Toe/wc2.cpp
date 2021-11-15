#include "main.h"

void wc2(std::string** endptr, int* tr, int* mr, int* br)
{
	if (*tr == *mr == *br)
	{
		(**endptr) += "over";
	}
}