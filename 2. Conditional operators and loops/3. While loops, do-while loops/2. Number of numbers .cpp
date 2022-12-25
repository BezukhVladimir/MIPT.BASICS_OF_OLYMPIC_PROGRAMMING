//Количество чисел
//Вводится последовательность чисел до тех пор, пока не будут введены два одинаковых числа подряд. Вам требуется определить количество чисел.
//
//Входные данные
//Во входных данных находится последовательность целых чисел. Гарантируется, что количество чисел не меньше 2 и не больше 10^4, а также что все соседние числа попарно различны, кроме последней пары - числа в ней одинаковые.
//
//Выходные данные
//В ответ запишите единственное число - количество введенных чисел.
//
//Sample Input:
//4 5 7 8 91 5 2 4 5 6 7 1 2 2
//
//Sample Output:
//14

#include <iostream>

using namespace std;

int main()
{
    int count = 0;
    long int a, b;

    while (cin >> b)
    {
        ++count;

        if (a == b)
            break;

        a = b;
    }

    cout << count;
}