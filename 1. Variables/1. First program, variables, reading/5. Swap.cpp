//Поменять местами
//Дано натуральное четырехзначное число, необходимо поменять местами средние цифры.
//
//Входные данные
//Входные данные содержат единственное целое четырехзначное число.
//
//Выходные данные
//В ответ напишите четырехзначное число, которое получается из исходного обменом двух средних цифр.
//
//Примечание
//В этой задаче запрещено использовать символьный тип данных.
//
//Sample Input 1:
//1890
//
//Sample Output 1:
//1980
//
//Sample Input 2:
//1000
//
//Sample Output 2:
//1000

#include <iostream>

using namespace std;

int main()
{
    const unsigned size = 4;
    unsigned * digits_of_number = new unsigned[size];

    unsigned number = 0;
    cin >> number;

    for (unsigned i = 0; i < size; ++i) {
        digits_of_number[size - i - 1] = number % 10;
        number /= 10;
    }

    cout << digits_of_number[0] << digits_of_number[2] << digits_of_number[1] << digits_of_number[3];
    delete [] digits_of_number;
}