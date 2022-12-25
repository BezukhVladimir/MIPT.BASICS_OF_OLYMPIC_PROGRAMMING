//Сортируй
//В этой задаче необходимо упорядочить данные числа в порядке неубывания.
//
//Входные данные
//
//Во входных данных записано три числа.
//
//Выходные данные
//Вам необходимо вывести те же три числа, но в порядке неубывания.
//
//Sample Input 1:
//3 2 1
//
//Sample Output 1:
//1 2 3
//
//Sample Input 2:
//2 1 4
//
//Sample Output 2:
//1 2 4

#include <iostream>

using namespace std;

int main()
{
    int a, b, c, t;
    cin >> a >> b >> c;

    if (b < a) { t = a; a = b; b = t; }
    if (c < a) { t = a; a = c; c = t; }
    if (c < b) { t = b; b = c; c = t; }

    cout << a << ' ' << b << ' ' << c;
}