//Довод
//В этой задаче вам необходимо сделать все то же самое, что и в предыдущей, но оператор < должен быть таким, чтобы время сортировалось не по возрастанию, а по убыванию.
//
//Sample Input:
//8
//1 3 24 21
//-1 18 35 58
//-2 22 3 17
//0 0 24 43
//0 14 38 46
//1 0 46 57
//1 0 1 53
//1 0 3 34
//
//Sample Output:
//1 3 24 21
//1 0 46 57
//1 0 3 34
//1 0 1 53
//0 14 38 46
//0 0 24 43
//-1 18 35 58
//-2 22 3 17

struct my_time
{
    int day, hour, minute, second;
};

bool operator<(const my_time &a, const my_time &b)
{
    if ((a.day * 86400
         + a.hour * 3600
         + a.minute * 60
         + a.second) > (b.day * 86400
                        + b.hour * 3600
                        + b.minute * 60
                        + b.second))
        return 1;
    else
        return 0;
}