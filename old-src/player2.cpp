#include "main.h"

static int ctr = 20, tl = 30, tr = 40, tm = 50, ml = 60, mr = 70, bl = 80, br = 90,
           bm = 100;

void player2(int* ptr, std::string* wc) {
  if (*ptr == 1) {
    ctr = 1;
    pwc1(&wc, &ctr, &tl, &tr, &tm, &ml, &mr, &bl, &br, &bm);
  }
  if (*ptr == 2) {
    tl = 1;
    pwc1(&wc, &ctr, &tl, &tr, &tm, &ml, &mr, &bl, &br, &bm);
  }
  if (*ptr == 3) {
    tr = 1;
    pwc1(&wc, &ctr, &tl, &tr, &tm, &ml, &mr, &bl, &br, &bm);
  }
  if (*ptr == 4) {
    tm = 1;
    pwc1(&wc, &ctr, &tl, &tr, &tm, &ml, &mr, &bl, &br, &bm);
  }
  if (*ptr == 5) {
    ml = 1;
    pwc1(&wc, &ctr, &tl, &tr, &tm, &ml, &mr, &bl, &br, &bm);
  }
  if (*ptr == 6) {
    mr = 1;
    pwc1(&wc, &ctr, &tl, &tr, &tm, &ml, &mr, &bl, &br, &bm);
  }
  if (*ptr == 7) {
    bl = 1;
    pwc1(&wc, &ctr, &tl, &tr, &tm, &ml, &mr, &bl, &br, &bm);
  }
  if (*ptr == 8) {
    br = 1;
    pwc1(&wc, &ctr, &tl, &tr, &tm, &ml, &mr, &bl, &br, &bm);
  }
  if (*ptr == 9) {
    bm = 1;
    pwc1(&wc, &ctr, &tl, &tr, &tm, &ml, &mr, &bl, &br, &bm);
  }
}