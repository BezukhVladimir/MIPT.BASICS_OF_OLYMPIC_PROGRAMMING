//Устойчивая сортировка
//В этой задаче вам будет дан небывалый артефакт - вектор векторов! Другими словами, каждым элементом вектора является вектор. И этот самый вектор вам надо отсортировать по возврастанию суммы элементов внутри вектора. Артефакт этот довольно ценный, поэтому кое-что нужно сохранить. А именно, если так получилось, что у двух векторов совпадает сумма, то раньше должен идти тот, который шел раньше до сортировки. Сортировка с таким свойством называется устойчивой.
//
//Техническая часть
//Вам необходимо реализовать функцию sort_vector со следующей семантикой:
//
//void sort_vector(vector<vector<int>> &vec)
//
//Функция должна устойчиво отсортировать вектор по неубыванию суммы его элементов. Вложенные вектора сортировать не надо. Гарантируется, что размер большого вектора, а также всех вложенных не превосходит 100. Смотрите пример для лучшего понимания условия. В примере первое число n - количество векторов. В следующих n строках описаны сами вектора. Описание каждого вектора начинается с числа k - количества элементов в нем. Следующие k чисел - сами элементы. Вам не требуется считывать из входного потока эти вектора, мы это сделаем за вас.
//
//Примечание
//В этой задаче нельзя использовать алгоритмы STL.
//
//Sample Input:
//4
//3 3 2 1
//2 1 3
//1 5
//3 1 2 3
//
//Sample Output:
//1 3
//5
//3 2 1
//1 2 3

void sort_vector(vector<vector<int>> &vec)
{
    long sum1 = 0;
    long sum2 = 0;
    long min;
    int i_min;
    vector<vector<int>> buf;


    while (!vec.empty()) {
        for (int &e : vec[0]) {
            sum1 += e;
        }

        min = sum1;
        i_min = 0;

        for (int i = 0; i < vec.size(); ++i)
        {

            sum1 = 0;
            for (int &e : vec[i]) {
                sum1 += e;
            }

            if (sum1 < min) {
                min = sum1;
                i_min = i;
            }
        }

        buf.push_back(vec[i_min]);
        vec.erase(vec.begin() + i_min);
    }

    vec = buf;
}