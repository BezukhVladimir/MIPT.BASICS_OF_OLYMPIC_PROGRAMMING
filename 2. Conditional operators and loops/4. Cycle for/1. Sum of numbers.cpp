//Сумма чисел
//
//В этой задаче требуется найти сумму чисел от 1 до n.
//
//Входные данные
//
//Во входных данных записано единственное целое число n.
//
//Выходные данные
//В ответ напишите сумму чисел от 1 до n.
//
//Sample Input 1:
//10
//
//Sample Output 1:
//55
//
//Sample Input 2:
//100
//
//Sample Output 2:
//5050

#include <iostream>

using namespace std;

int main()
{
    unsigned n;
    cin >> n;
    cout << (n + 1) * n / 2;
}