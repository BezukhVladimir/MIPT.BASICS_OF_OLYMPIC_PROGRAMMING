//Системы счисления на деревьях
//В этой задаче требуется перевести число из K-ичной системы счисления в T-ичную.
//
//Входные данные
//В первой строке в десятичной системе счисления записано два целых числа K, T - основание системы счисления, из которой надо перевести число и в какую соответственно.
//
//Во второй строке содержится единственное целое число n, записанное в K-ичной системе счисления.
//
//Выходные данные
//Выведите представление данного числа n в T-ичной системе счисления без ведущих нулей.
//
//Sample Input 1:
//30 20
//3N
//
//Sample Output 1:
//5D
//
//Sample Input 2:
//36 8
//A
//
//Sample Output 2:
//12

#include<iostream>

using namespace std;

void dec_to_t(const unsigned long long &n, const unsigned long long &k)
{
    string alphabet = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    if (n == 0ULL)
        return;

    dec_to_t(n / k, k);

    cout << alphabet[n % k];
}

unsigned long long k_to_dec(const string &n, const unsigned long long &k)
{
    unsigned long long r = 0;

    for (const auto &c : n)
        r = r * k + (c > '9' ? c - 55 : c - 48);

    return r;
}

int main()
{
    unsigned long long r, k, t;

    string n;
    cin >> k >> t >> n;

    if (n == "0")
        cout << 0;
    else {
        r = k_to_dec(n, k);
        dec_to_t(r, t);
    }
}