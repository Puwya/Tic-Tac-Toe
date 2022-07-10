#include "main.h"

void pwc1(
    std::string** endptr, int* ctr, int* tl, int* tr, int* tm, int* ml, int* mr, int* bl,
    int* br, int* bm) {
  if (*tm == *ctr == *bm) {
    (**endptr) += "over";
  }
  if (*tr == *mr == *br) {
    (**endptr) += "over";
  }
  if (*tl == *ml == *bl) {
    (**endptr) += "over";
  }
  if (*tl == *tm == *tr) {
    (**endptr) += "over";
  }
  if (*ml == *ctr == *mr) {
    (**endptr) += "over";
  }
  if (*bl == *bm == *br) {
    (**endptr) += "over";
  }
  if (*tl == *ctr == *br) {
    (**endptr) += "over";
  }
  if (*tr == *ctr == *bl) {
    (**endptr) += "over";
  }
}