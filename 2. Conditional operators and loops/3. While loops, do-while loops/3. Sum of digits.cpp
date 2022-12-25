//Сумма цифр
//В этой задаче требуется найти сумму цифр данного числа
//
//Входные данные
//
//Входные данные содержат единственное целое число.
//
//Выходные данные
//Выведите сумму цифр данного числа.
//
//Sample Input 1:
//113
//
//Sample Output 1:
//5
//
//Sample Input 2:
//-179
//
//Sample Output 2:
//17

#include <iostream>

using namespace std;

int main()
{
    int a, summa = 0;
    cin >> a;
    a = abs(a);

    while (summa += a % 10, a /= 10);

    cout << summa;
}