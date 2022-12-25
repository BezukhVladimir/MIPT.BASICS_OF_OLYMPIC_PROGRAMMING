//Четные лучше!
//Какие ваши любимые числа? Мои - четные! Поэтому вам в этой задаче нужно будет поставить четные числа на первые места, а все остальные - потом!
//
//Входные данные
//Первая строка входных данных содержит единственное целое число n - количество чисел.
//
//Во второй строке через пробел записаны n целых чисел.
//
//Выходные данные
//Выведите n чисел в одну строчку. Сначала выведите все четные числа в данном массиве в том же порядке, что они даны во входных данных. Затем выведите все нечетные числа в том же порядке, что и в исходном массиве.
//
//Sample Input 1:
//6
//3 2 1 5 4 6
//
//Sample Output 1:
//2 4 6 3 1 5
//
//Sample Input 2:
//10
//5 3 4 5 3 4 2 3 1 1
//
//Sample Output 2:
//4 4 2 5 3 5 3 3 1 1

#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;

int main()
{
    auto is_even = [](const int& x) -> bool { return x % 2 == 0; };

    istream_iterator<int> begin(cin), end;
    vector<int> v { ++begin, end };

    stable_partition(v.begin(), v.end(), is_even);

    copy(v.cbegin(), v.cend(), ostream_iterator<int>(cout, " "));
}