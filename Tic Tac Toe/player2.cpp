#include "main.h"

static int ctr = 20, tl = 30, tr = 40, tm = 50, ml = 60, mr = 70, bl = 80, br = 90, bm = 100;

void player2(int* ptr, std::string* wc)
{

	if (*ptr == 1)
	{
		ctr = 2;
		pwc1(&wc, &tm, &ctr, &bm);
		pwc5(&wc, &ml, &ctr, &mr);
		pwc7(&wc, &tl, &ctr, &br);
		pwc8(&wc, &tr, &ctr, &bl);
	}
	if (*ptr == 2)
	{
		tl = 2;
		pwc3(&wc, &tl, &ml, &bl);
		pwc4(&wc, &tl, &tm, &tr);
		pwc7(&wc, &tl, &ctr, &br);
	}
	if (*ptr == 3)
	{
		tr = 2;
		pwc2(&wc, &tr, &mr, &br);
		pwc4(&wc, &tl, &tm, &tr);
		pwc8(&wc, &tr, &ctr, &bl);
	}
	if (*ptr == 4)
	{
		tm = 2;
		pwc1(&wc, &tm, &ctr, &bm);
		pwc4(&wc, &tl, &tm, &tr);
	}
	if (*ptr == 5)
	{
		ml = 2;
		pwc3(&wc, &tl, &ml, &bl);
		pwc5(&wc, &ml, &ctr, &mr);
	}
	if (*ptr == 6)
	{
		mr = 2;
		pwc2(&wc, &tr, &mr, &br);
		pwc5(&wc, &ml, &ctr, &mr);
	}
	if (*ptr == 7)
	{
		bl = 2;
		pwc3(&wc, &tl, &ml, &bl);
		pwc6(&wc, &bl, &bm, &br);
		pwc8(&wc, &tr, &ctr, &bl);
	}
	if (*ptr == 8)
	{
		br = 2;
		pwc2(&wc, &tr, &mr, &br);
		pwc6(&wc, &bl, &bm, &br);
		pwc7(&wc, &tl, &ctr, &br);
	}
	if (*ptr == 9)
	{
		bm = 2;
		pwc1(&wc, &tm, &ctr, &bm);
		pwc6(&wc, &bl, &bm, &br);
	}
}