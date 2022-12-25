//Сумма чисел
//В этой задаче необходимо найти сумму четырех целых чисел.
//
//Входные данные
//Во входных данных записано 4 целых числа.
//
//Выходные данные
//В ответ запишите их сумму.
//
//Sample Input 1:
//1 2 3 4
//
//Sample Output 1:
//10
//
//Sample Input 2:
//1 -1 2 -2
//
//Sample Output 2:
//0

#include <iostream>

using namespace std;

int main()
{
    long int summa = 0;
    for (long int a; cin >> a; summa += a);
    cout << summa;
}