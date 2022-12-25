//Двоичная система счисления
//В этой задаче требуется перевести число из десятичной системы счисления в двоичную.
//
//Входные данные
//В первой строке записано единственное целое число n, записанное в десятичной системе счисления.
//
//Выходные данные
//Выведите представление числа n в двоичной системе счисления без ведущих нулей.
//
//Sample Input 1:
//113
//
//Sample Output 1:
//1110001
//
//Sample Input 2:
//10
//
//Sample Output 2:
//1010

#include <iostream>

void dec_to_bin(unsigned long long value)
{
    if (value >> 1)
        dec_to_bin(value >> 1);

    std::cout << (value & 1);
}

int main()
{
    unsigned long long n;
    std::cin >> n;
    dec_to_bin(n);
}