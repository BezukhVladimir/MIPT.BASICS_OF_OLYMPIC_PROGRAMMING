//Сколько различных?
//
//В этой задаче требуется определить, сколько различных чисел среди данных четырех?
//
//Входные данные
//Входные данные содержат 4 целых числа.
//
//Выходные данные
//Выведите единственное число - сколько различных чисел в данном множестве.
//
//Примечание
//В этой задаче запрещено пользоваться условным оператором.
//
//Sample Input 1:
//1 2 3 4
//
//Sample Output 1:
//4
//
//Sample Input 2:
//1 2 1 2
//
//Sample Output 2:
//2

#include <iostream>

using namespace std;

int main()
{
    long int a, b, c, d;
    cin >> a >> b >> c >> d;
    cout << 1 + (a != b && a != c && a != d) + (b != c && b != d) + (c != d);
}