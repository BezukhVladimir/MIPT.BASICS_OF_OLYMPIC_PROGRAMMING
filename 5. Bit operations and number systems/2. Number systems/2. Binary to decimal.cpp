//яинелсичс аметсис яанчиовД
//В этой задаче требуется перевести число из двоичной системы счисления в десятичную.
//
//Входные данные
//Входные данные содержат единственное целое число n, записанное в двоичной системе счисления.
//
//Выходные данные
//Выведите представление числа n в десятичной системе счисления без ведущих нулей.
//
//Sample Input 1:
//1110001
//
//Sample Output 1:
//113
//
//Sample Input 2:
//1010
//
//Sample Output 2:
//10

#include <iostream>

using namespace std;

int main()
{
    string n;
    cin >> n;

    unsigned long long s = 0;
    for (const unsigned char &d : n)
        s = (s << 1) + (d - 48);

    cout << s;
}