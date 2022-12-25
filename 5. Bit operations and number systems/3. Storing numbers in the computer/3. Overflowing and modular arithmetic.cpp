//Петя и Маша
//Петя написал программу, которая считывает беззнаковое 64-битное целое число X, умножает его на 3 и сохраняет результат как беззнаковое 64-битное целое число (в языке C/C++ такой тип называется unsigned long long). После чего Петя предложил Маше за 3 попытки угадать по результату, какое число он ввёл исходно. Маша справилась за одну попытку. А получится ли это у вас?
//
//Входные данные
//Входные данные содержат одно целое число в интервале от 0 до (2^64) − 1 включительно - результат работы программы, которую написал Петя.
//
//Выходные данные
//Вам надо вывести введённое Петей число X. Число должно находиться в интервале от 0 до (2^64) - 1 включительно.
//
//Sample Input:
//3
//
//Sample Output:
//1

#include <iostream>

int main()
{
    // Modular arithmetic
    // unsigned char x = 200 * 3 => 88
    // 3 * 171 mod 256 = 1 => 3^-1 = 171
    // 88 * 171 mod 256 = 200
    unsigned long long x, inverse = 12297829382473034411;
    std::cin >> x;
    std::cout << x * inverse; // overflowing <=> mod 2^64
}