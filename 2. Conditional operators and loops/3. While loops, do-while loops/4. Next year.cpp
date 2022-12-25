//Следующий год
//Год называется хорошим, если сумма его цифр равна 13. Вам дано число - номер текущего года. Требуется найти номер следующего хорошего года.
//
//Входные данные
//Входные данные содержат единственное натуральное число — номер текущего года.
//
//Выходные данные
//Требуется найти номер следующего хорошего года.
//
//Sample Input 1:
//2020
//
//Sample Output 1:
//2029
//
//Sample Input 2:
//1813
//
//Sample Output 2:
//1822

#include <iostream>

using namespace std;

int main()
{
    long int year;
    cin >> year;

    while (++year)
    {
        // 13-sum numbers always have mod 9 = 4
        if (year % 9 == 4)
        {
            if (year / 10000 % 10
                + year / 1000 % 10
                + year / 100 % 10
                + year / 10 % 10
                + year % 10 == 13)
                break;

            year += 8;
        }
    }

    cout << year;
}