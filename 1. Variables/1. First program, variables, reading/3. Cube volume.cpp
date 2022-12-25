//Объем куба
//Найдите объем куба, зная длину его ребра.
//
//Входные данные
//Входные данные содержат единственное целое число a — длину ребра куба.
//
//Выходные данные
//В ответ выпишете единственное число - объем куба.
//
//Sample Input 1:
//1
//
//Sample Output 1:
//1
//
//Sample Input 2:
//2
//
//Sample Output 2:
//8

#include <iostream>

using namespace std;

int main()
{
    long int a;
    cin >> a;
    cout << a * a * a;
}