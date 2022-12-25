//I-й символ алфавита
//В этой задаче вам дано число i, требуется найти i-й символ алфавита
//
//Входные данные
//Входные данные содержат единственное целое число i.
//
//Выходные данные
//Выведите i-й маленький символ латинского алфавита.
//
//Sample Input 1:
//1
//
//Sample Output 1:
//a
//
//Sample Input 2:
//12
//
//Sample Output 2:
//l

#include <iostream>

using namespace std;

int main()
{
    unsigned a;
    cin >> a;
    cout << (char)(a + 96);
}