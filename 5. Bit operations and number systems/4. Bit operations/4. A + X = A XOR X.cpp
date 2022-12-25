//Решение уравнения
//Дано число a. Найдите наибольшее x <= a, что a + x = a XOR x.
//
//Входные данные
//Входные данные содержат единственное целое число a.
//
//Выходные данные
//В ответ запишите наибольшее решение данного уравнения.
//
//Sample Input 1:
//10
//
//Sample Output 1:
//5
//
//Sample Input 2:
//113
//
//Sample Output 2:
//14

#include <climits>
#include <iostream>

using namespace std;

int main()
{
    unsigned long long a, x = 0, shift = 1;
    cin >> a;

    for (; shift < ULONG_MAX; shift <<= 1)
        if (a < shift)
            break;

    cout << shift - a - 1;
}