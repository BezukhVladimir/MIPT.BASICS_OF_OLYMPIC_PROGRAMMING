//Инверсии
//Инверсией в последовательности чисел называется такая пара чисел, что в ней большее число идет раньше меньшего. Вам дана последовательность из 4 чисел, необходимо найти количество инверсий в ней.
//
//Входные данные
//Входные данные содержат 4 целых числа.
//
//Выходные данные
//Количество инверсий в данной последовательности.
//
//Sample Input 1:
//1 4 2 3
//
//Sample Output 1:
//2
//
//Sample Input 2:
//4 3 2 1
//
//Sample Output 2:
//6

#include <iostream>

using namespace std;

int main()
{
    const unsigned size = 4;
    long int * array = new long int[size];

    for (unsigned i = 0; i < size; ++i)
        cin >> array[i];

    unsigned count = 0;
    for (unsigned i = 0; i < size - 1; ++i)
        for (unsigned j = i + 1; j < size; ++j)
            count += array[i] > array[j];

    cout << count;
    delete [] array;
}