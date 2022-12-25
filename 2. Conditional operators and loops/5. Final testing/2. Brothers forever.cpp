//Братья навек
//
//Программист Антоша хочет стать самым лучшим программистом, ну, или хотя бы решить задач больше своего старшего брата Андрюши.
//
//Сейчас количество решенных задач Антоши равно a, а количество решенных задач Андрюши равно b. Гарантируется, что количество решенных задач у Антоши меньше или равно числу решенных задач Андрюши.
//
//Антоша решает много, и его количество решенных задач утраивается каждый год, а количество решенных задач Андрюши удваивается каждый год.
//
//Через сколько целых лет Антоша решит строго больше задач чем Андрюша?
//
//Входные данные
//В единственной строке находятся два целых числа a и b — количество решенных задач у Антоши и Андрюши соответственно.
//
//Выходные данные
//Выведите одно целое число — через сколько целых лет Антоша решит строго больше задач чем Андрюша.
//
//Sample Input 1:
//4 7
//
//Sample Output 1:
//2
//
//Sample Input 2:
//4 9
//
//Sample Output 2:
//3
//
//Sample Input 3:
//1 1
//
//Sample Output 3:
//1

#include <iostream>

using namespace std;

int main()
{
    unsigned long a, b, count = 0;
    cin >> a >> b;

    while (a <= b)
    {
        a *= 3;
        b *= 2;
        ++count;
    }

    cout << count;
}