//Считывание вектора 2
//В этой задаче вам нужно будет реализовать функцию, которая считывает вектор.
//
//Техническая часть
//Необходимо реализовать функцию read, которая не принимает аргументов, но возвращает считанный вектор.
//
//Входные данные
//В первой строке входных данных находится число n - количество элементов в последовательности.
//
//В следующей строке следуют сами n элементов последовательности - целые числа, записанные через пробел.
//
//Выходные данные
//Ничего выводить не надо.
//
//Sample Input:
//5
//9 6 8 9 5
//
//Sample Output:
//9 6 8 9 5

vector<int> read()
{
    int n;
    cin >> n;
    vector<int> v;
    v.resize(n);

    for (int &e : v) {
        cin >> e;
    }

    return v;
}