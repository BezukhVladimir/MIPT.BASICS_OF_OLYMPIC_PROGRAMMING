//Пи
//В этой задаче вам требуется вывести число π с заданной точностью.
//
//Входные данные
//Входные данные содержат число n — количество знаков после запятой, которое необходимо вывести.
//
//Выходные данные
//Выведите число π с заданной точностью.
//
//Sample Input 1:
//2
//
//Sample Output 1:
//3.14
//
//Sample Input 2:
//0
//
//Sample Output 2:
//3

#include <cmath>
#include <iomanip>
#include <iostream>

using namespace std;

int main()
{
    unsigned n = 0;
    cin >> n;
    cout << fixed << setprecision(n) << M_PI;
}