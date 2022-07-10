#pragma once
#include <iostream>
#include <string>

void player1(int* ptr, std::string* wc);
void wc1(
    std::string** endptr, int* ctr, int* tl, int* tr, int* tm, int* ml, int* mr, int* bl,
    int* br, int* bm);

void player2(int* ptr, std::string* wc);
void pwc1(
    std::string** endptr, int* ctr, int* tl, int* tr, int* tm, int* ml, int* mr, int* bl,
    int* br, int* bm);
