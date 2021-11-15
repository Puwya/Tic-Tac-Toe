#include "main.h"

static int ctr = 20, tl = 30, tr = 40, tm = 50, ml = 60, mr = 70, bl = 80, br = 90, bm = 100;

void player1(int* ptr, std::string* wc)
{

	if (*ptr == 1)
	{
		ctr = 1;
		wc1(&wc, &tm, &ctr, &bm);
		wc5(&wc, &ml, &ctr, &mr);
		wc7(&wc, &tl, &ctr, &br);
		wc8(&wc, &tr, &ctr, &bl);
	}
	if (*ptr == 2)
	{
		tl = 1;
		wc3(&wc, &tl, &ml, &bl);
		wc4(&wc, &tl, &tm, &tr);
		wc7(&wc, &tl, &ctr, &br);
	}
	if (*ptr == 3)
	{
		tr = 1;
		wc2(&wc, &tr, &mr, &br);
		wc4(&wc, &tl, &tm, &tr);
		wc8(&wc, &tr, &ctr, &bl);
	}
	if (*ptr == 4)
	{
		tm = 1;
		wc1(&wc, &tm, &ctr, &bm);
		wc4(&wc, &tl, &tm, &tr);
	}
	if (*ptr == 5)
	{
		ml = 1;
		wc3(&wc, &tl, &ml, &bl);
		wc5(&wc, &ml, &ctr, &mr);
	}
	if (*ptr == 6)
	{
		mr = 1;
		wc2(&wc, &tr, &mr, &br);
		wc5(&wc, &ml, &ctr, &mr);
	}
	if (*ptr == 7)
	{
		bl = 1;
		wc3(&wc, &tl, &ml, &bl);
		wc6(&wc, &bl, &bm, &br);
		wc8(&wc, &tr, &ctr, &bl);
	}
	if (*ptr == 8)
	{
		br = 1;
		wc2(&wc, &tr, &mr, &br);
		wc6(&wc, &bl, &bm, &br);
		wc7(&wc, &tl, &ctr, &br);
	}
	if (*ptr == 9)
	{
		bm = 1;
		wc1(&wc, &tm, &ctr, &bm);
		wc6(&wc, &bl, &bm, &br);
	}
}