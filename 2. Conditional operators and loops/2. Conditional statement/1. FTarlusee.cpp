//FTarlusee
//В этой задаче вам требуется вывести строковое представление булевой переменной.
//
//Входные данные
//Входные данные содержат единственное целое неотрицательное число, не превосходящее единицы - значение булевой переменной.
//
//Выходные данные
//Выведите "True" (без кавычек), если переменная хранит истину, иначе выведите "False" (без кавычек).
//
//Sample Input 1:
//0
//
//Sample Output 1:
//False
//
//Sample Input 2:
//1
//
//Sample Output 2:
//True

#include <iostream>

int main()
{
    printf(getchar() == '1' ? "True" : "False");
}