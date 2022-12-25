//Переворот массива 2
//Массиву нравится переворачиваться! В этой задаче переворотом массива называется его симметричное отражение относительно побочной диагонали. Побочная диагональ - это диагональ, которая идет из нижнего левого угла в правый верхний.
//
//Входные данные
//В первой строке записано единственное целое число n - количество строк и столбцов в массиве.
//
//В следующих n строках записано по n чисел - элементы массива. Каждое число целое.
//
//Выходные данные
//Выведите перевернутый массив.
//
//Sample Input 1:
//4
//1 2 3 4
//5 6 7 8
//9 10 11 12
//13 14 15 16
//
//Sample Output 1:
//16 12 8 4
//15 11 7 3
//14 10 6 2
//13 9 5 1
//
//Sample Input 2:
//3
//4 6 5
//3 8 9
//9 1 8
//
//Sample Output 2:
//8 9 5
//1 8 6
//9 3 4

#include <iostream>

using namespace std;

int main()
{
    unsigned n;
    cin >> n;
    int array[n][n];

    for (auto &rows : array)
        for (int &cell : rows)
            cin >> cell;

    for (int j = n - 1; j >= 0; --j)
    {
        for (int i = n - 1; i >= 0; --i)
            cout << array[i][j] << ' ';

        cout << endl;
    }
}