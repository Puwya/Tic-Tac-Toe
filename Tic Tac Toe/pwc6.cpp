#include "main.h"

void pwc6(std::string** endptr, int* bl, int* bm, int* br)
{
	if (*bl == *bm == *br)
	{
		(**endptr) += "over";
	}
}