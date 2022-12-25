//Деление
//В этой задаче надо поделить два числа.
//
//Входные данные
//Входные данные содержат два целых числа a, b.
//
//Выходные данные
//Выведите результат деления a на b. Ответ будет считаться верным, если абсолютная или относительная погрешность не больше 10^(-6).
//
//Sample Input 1:
//10 8
//
//Sample Output 1:
//1.2500000000
//
//Sample Input 2:
//1 3
//
//Sample Output 2:
//0.3333333333

#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    cout << fixed << setprecision(10) << a / b;
}