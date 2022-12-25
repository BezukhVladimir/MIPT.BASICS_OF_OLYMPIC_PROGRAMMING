//Выставление оценок
//
//Однажды Влад, Довлет, Никита и Эдик проверяли письменные работы детей, и вот пришло время выставить оценки в рейтинг! Всего было N работ. Владислав по порядку начал называть оценки Довлету, чтобы он их выставил. Но вот какая проблема, Довлет расслышал не все оценки, а Влад повторять этот список полностью не собирается, однако согласился отвечать на вопросы следующего вида: Довлет называет число — порядковый номер оценки которую называл Влад, а он скажет какая оценка там была. Никита и Эдик, как сокомандники, помогли Довлету и приготовили список из Q чисел — порядковые номера оценок, которые не расслышал Довлет. Вы же товарищ Влада, и должны помочь ему отвечать на вопросы Довлета: если Довлет запрашивает число i, вы должны вывести i-е число, названное Владом.
//
//Входные данные
//В первой строке входных данных находится единственное число: N — количество оценок названных Владом.
//
//В следующей строке вводится N чисел через пробел — оценки которые назвал Влад. Каждая оценка представляет собой целое число.
//
//В третьей строке вводится число Q - количество запросов Довлета.
//
//В следующей строке вводится Q чисел через пробел — номера оценок которые запрашивает Довлет у Влада.
//
//Выходные данные
//Вам необходимо ответить на запросы в следующем виде: вывести Q чисел через пробел — ответы на запросы Довлета, i-е число представляет собой ответ i-й запрос. Рассмотрите примеры из условия и описание к ним для большего понимания условия.
//
//Sample Input 1:
//3
//1 2 -4
//3
//2 1 3
//
//Sample Output 1:
//2 1 -4
//
//Sample Input 2:
//3
//5 65 -9
//1
//2
//
//Sample Output 2:
//65

#include <iostream>

using namespace std;

int main()
{
    unsigned first_size, second_size;
    cin >> first_size;
    int first_array[first_size];

    for (int &a : first_array)
        cin >> a;

    cin >> second_size;
    int second_array[second_size];

    for (int &a : second_array)
        cin >> a;

    for (int a : second_array)
        cout << first_array[a - 1] << ' ';
}