//print input
//Дано множество чисел, требуется вывести его на экран.
//
//Входные данные
//В первой строке входных данных записано единственное число n.
//
//Во второй строке записано n целых чисел.
//
//Выходные данные
//Выведите данные вам n чисел. Их количество выводить не нужно.
//
//Sample Input 1:
//5
//4 2 3 4 4
//
//Sample Output 1:
//4 2 3 4 4
//
//Sample Input 2:
//4
//13 13 13 13
//
//Sample Output 2:
//13 13 13 13

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int number; cin >> number; cout << number << ' ');
}