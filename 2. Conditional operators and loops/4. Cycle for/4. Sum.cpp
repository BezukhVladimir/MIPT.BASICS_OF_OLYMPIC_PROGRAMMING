//Сумма
//В этой задаче вам требуется посчитать следующую сумму: 1 + a + a^2 + a^3 + ... + a^n.
//
//Входные данные
//Во входных данных записано два целых числа: a, n.
//
//Выходные данные
//В ответ напишите единственное число - требуемую сумму.
//
//Sample Input 1:
//2 5
//
//Sample Output 1:
//63
//
//Sample Input 2:
//3 3
//
//Sample Output 2:
//40

#include <iostream>

using namespace std;

int main()
{
    unsigned long long a, n, summa = 1;
    cin >> a >> n;

    for (unsigned long long i = 0; i < n; ++i)
        summa = summa * a + 1;

    cout << summa;
}