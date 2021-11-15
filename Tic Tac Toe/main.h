#pragma once
#include <iostream>
#include <string>

void player1(int* ptr, std::string* wc);

void wc1(std::string** endptr, int* tm, int* ctr, int* bm);
void wc2(std::string** endptr, int* tr, int* mr, int* br);
void wc3(std::string** endptr, int* tl, int* ml, int* bl);
void wc4(std::string** endptr, int* tl, int* tm, int* tr);
void wc5(std::string** endptr, int* ml, int* ctr, int* mr);
void wc6(std::string** endptr, int* bl, int* bm, int* br);
void wc7(std::string** endptr, int* tl, int* ctr, int* br);
void wc8(std::string** endptr, int* tr, int* ctr, int* bl);

void player2(int* ptr, std::string* wc);

void pwc1(std::string** endptr, int* tm, int* ctr, int* bm);
void pwc2(std::string** endptr, int* tr, int* mr, int* br);
void pwc3(std::string** endptr, int* tl, int* ml, int* bl);
void pwc4(std::string** endptr, int* tl, int* tm, int* tr);
void pwc5(std::string** endptr, int* ml, int* ctr, int* mr);
void pwc6(std::string** endptr, int* bl, int* bm, int* br);
void pwc7(std::string** endptr, int* tl, int* ctr, int* br);
void pwc8(std::string** endptr, int* tr, int* ctr, int* bl);

