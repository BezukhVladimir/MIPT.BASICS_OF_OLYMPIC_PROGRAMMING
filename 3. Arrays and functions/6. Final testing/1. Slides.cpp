//Горки
//Дан массив, состоящий из целых чисел. Назовём "горкой" элемент массива, у которого два соседа и оба меньше данного. Напишите программу, которая в данном массиве определит количество горок.
//
//Входные данные
//Сначала задано число N - количество элементов в массиве. Далее через пробел записаны N чисел - элементы массива. Массив состоит из целых чисел.
//
//Выходные данные
//Необходимо вывести количество "горок" - элементов массива, у которых два соседа и которые при этом строго больше обоих своих соседей.
//
//Sample Input 1:
//5
//1 5 1 5 1
//
//Sample Output 1:
//2
//
//Sample Input 2:
//5
//1 2 3 4 5
//
//Sample Output 2:
//0

#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int N;
    std::cin >> N;
    int a[N];

    for (int i = 0; i != N; ++i)
        std::cin >> a[i];

    int c = 0;
    for (int i = 1; i < N - 1; ++i) {
        if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
            ++c;
            ++i;
        }
    }

    std::cout << c;
}