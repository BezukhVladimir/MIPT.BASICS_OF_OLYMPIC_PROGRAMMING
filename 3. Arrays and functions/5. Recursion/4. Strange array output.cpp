//Странный вывод массива
//В этой задаче вам дан массив, и требуется вывести его в очень странном порядке. А именно сначала требуется вывести средний элемент массива. Если массив четной длины, то требуется вывести элемент слева от середины. Затем в аналогичном формате выводится правая половина массива, а затем левая, если они не пусты.
//
//Входные данные
//В первой строке входных данных записано единственное целое число n - размер массива.
//
//В следующей строке записано n целых чисел - сам массив.
//
//Выходные данные
//Требуется вывести данный массив в странном порядке.
//
//Sample Input 1:
//7
//4 7 10 7 5 5 1
//
//Sample Output 1:
//7 5 1 5 7 10 4
//
//Sample Input 2:
//6
//8 7 2 5 9 8
//
//Sample Output 2:
//2 9 8 5 8 7

#include <iostream>

void f(int left, int right, int a[])
{
    if (right - left < 0)
        return;

    int s = (left + right) / 2;
    std::cout << a[s] << ' ';
    f(s + 1, right, a);
    f(left, s - 1, a);
}

int main()
{
    int n;
    std::cin >> n;
    int a[n];

    for (int i = 0; i < n; ++i)
        std::cin >> a[i];

    f(0, n - 1, a);
}