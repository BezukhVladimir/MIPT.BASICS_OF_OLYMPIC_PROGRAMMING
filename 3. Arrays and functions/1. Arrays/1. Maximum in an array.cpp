//Максимум в массиве
//В этой задаче вам необходимо найти максимум в массиве.
//
//Входные данные
//В этой задаче нет входных данныx. Все, что вам нужно сделать - написать часть программы, которая ищет максимум в массиве. Вы можете полагать, что где-то раньше объявлен массив с именем a, а также есть переменная n, содержащая размер массива. Все элементы в массиве нумеруются от 0 до n - 1. Вам необходимо создать переменную ans, в которую следует положить максимум в массиве. Гарантируется, что все элементы массива - целые числа.
//
//Пример программы
//Допустим, вашей задачей было бы нахождение суммы двух чисел. Выше объявлены переменные a и b, необходимо объявить переменную c, в которую надо положить сумму данных переменных. Тогда программа, которую вы отправили бы в систему, выглядела так:
//
//int c;
//c = a + b;

long int ans = a[0];

for (unsigned i = 1; i < n; ++i)
    if (a[i] > ans)
        ans = a[i];