//K-ичная система счисления
//В этой задаче требуется перевести число из десятичной системы счисления в K-ичную.
//
//Входные данные
//Во входных данных содержатся два целых числа n, K - число и основание системы счисления, в которое его надо перевести. Все числа во входных данных записаны в десятичной системе счисления.
//
//Выходные данные
//Выведите единственное число - представление данного числа в K-ичной системе счисления без ведущих нулей.
//
//Sample Input 1:
//113 30
//
//Sample Output 1:
//3N
//
//Sample Input 2:
//10 36
//
//Sample Output 2:
//A

#include <iostream>

using namespace std;

void dec_to_k(unsigned long long n, unsigned long long k)
{
    string alphabet = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    if (n == 0ULL)
        return;

    dec_to_k(n / k, k);

    cout << alphabet[n % k];
}

int main()
{
    unsigned long long n, k;
    cin >> n >> k;

    if (n == 0ULL)
        cout << 0;
    else
        dec_to_k(n, k);
}