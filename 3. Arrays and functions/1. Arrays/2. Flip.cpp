//Переворот
//Алексей переворачивает все, до чего дотягивается. Сегодня он перевернул массив, вам нужно перевернуть его обратно.
//
//Входные данные
//Первая строка входных данных содержит единственное целое число n - размер массива.
//
//Во второй строке записано n целых чисел - сам массив.
//
//Выходные данные
//Выведите данный массив в обратном порядке.
//
//Sample Input 1:
//5
//3 1 4 2 5
//
//Sample Output 1:
//5 2 4 1 3
//
//Sample Input 2:
//6
//1 2 3 4 5 6
//
//Sample Output 2:
//6 5 4 3 2 1

#include <iostream>

using namespace std;

int main()
{
    int size;
    cin >> size;
    int arr[size];

    while (size--)
        cin >> arr[size];

    for (auto a : arr)
        cout << a << ' ';
}