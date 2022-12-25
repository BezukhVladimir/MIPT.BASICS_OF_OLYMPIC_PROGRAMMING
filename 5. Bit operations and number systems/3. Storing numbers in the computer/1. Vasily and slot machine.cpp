//Василий и игровой автомат
//В игровом автомате в первый день Василий проиграл 1 монету. На следующий день он проиграл n монет. Далее, в каждый следующий день он проигрывал монет в n раз больше, чем в предыдущий. Программа в автомате, которая определяет количество монет, проигранных Василием, хранит это количество в переменной типа long long. В какой день Василий в первый раз не проиграет?
//
//Входные данные
//Входные данные содержат единственное целое число n - коэффициент увеличение проигрыша Василия.
//
//Выходные данные
//Выведите единственное целое число - номер дня, в который Василий не проиграет ни одной монеты.
//
//Sample Input 1:
//1000000000
//
//Sample Output 1:
//4
//
//Sample Input 2:
//2
//
//Sample Output 2:
//64

#include <iostream>

int main()
{
    long long n, days = 1;
    std::cin >> n;

    for (long long s = 1; s > 0; s *= n, ++days);

    std::cout << days;
}