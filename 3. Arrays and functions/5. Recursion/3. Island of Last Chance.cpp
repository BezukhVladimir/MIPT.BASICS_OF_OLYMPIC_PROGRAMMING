//Остров последнего шанса
//Одержимая провалила задание Доктора и теперь пытается извиниться. Доктор очень страшен в гневе, поэтому ее извинение больше похоже на бессвязную речь. Пусть n - степень провала. Тогда извинение уровня n есть строка s_n = Sir, + s_(n - 1) + because + s_(n - 1) + sorry. Извинение уровня 0 есть строка s_0 = it's not my fault. Вам известна степень провала Одержимой и вы хотите знать текст ее извинения.
//
//Входные данные
//Во входных данных содержится единственное целое число n - степень провала.
//
//Выходные данные
//Выведите строку-извинение Одержимой.
//
//Примечание
//Обратите внимание на нестандартные ограничения времени и памяти в этой задаче. Также обратите внимание на расстановку пробелов в тестовом примере.
//
//Sample Input 1:
//1
//
//Sample Output 1:
//Sir, it's not my fault because it's not my fault sorry
//
//Sample Input 2:
//2
//
//Sample Output 2:
//Sir, Sir, it's not my fault because it's not my fault sorry because Sir, it's not my fault because it's not my fault sorry sorry

#include <iostream>

void f(int n)
{
    if (n == 0) {
        std::cout << "it's not my fault ";
        return;
    }

    std::cout << "Sir, ";
    f(--n);
    std::cout << "because ";
    f(n);
    std::cout << "sorry ";
}

int main()
{
    int n;
    std::cin >> n;
    f(n);
}