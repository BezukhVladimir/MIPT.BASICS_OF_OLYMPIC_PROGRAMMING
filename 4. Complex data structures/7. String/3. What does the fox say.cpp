//Что говорит лиса?
//Как хорошо оказаться летом в деревне! Рядом речка, поле, лес, деревянная дедушкина баня... Эх, романтика! А еще рядом гуляет кот (cat), который говоритм мяу (meow), собака (dog), которая говорит гав (woof), свинья (pig), которая говорит хрю (grunt), петух (rooster), который говорит кукареку (cock-a-doodle-doo) и корова (cow), которая говорит му (moo).
//
//Сейчас к вам подкралось животное и вот-вот заговорит. Вы очень сильно испугались, поэтому решили заговорить с животным на его языке раньше него. Теперь вам нужно написать программу, которая по названию животного скажет, как оно говорит.
//
//Входные данные
//Во входных данных записана единственная строка - название животного. Обратите внимание, в названии животного могут встречаться произвольные большие и маленькие буквы латинского алфавита, тем не менее, таких животных тоже надо учитывать. Например, RoOsTeR - все еще петух и говорит кукареку.
//
//Выходные данные
//Выведите, что говорит введенное животное. Если к вам приполз какой-то неопознанный объект, выведите "joff-tchoff-tchoffo-tchoffo-tchoff" (без кавычек).
//
//Sample Input 1:
//RoOsTeR
//
//Sample Output 1:
//cock-a-doodle-doo
//
//Sample Input 2:
//fox
//
//Sample Output 2:
//joff-tchoff-tchoffo-tchoffo-tchoff

#include <map>
#include <iostream>

using namespace std;

int main()
{
    map<string, string> sounds {
        { "cat", "meow" },
        { "dog", "woof" },
        { "pig", "grunt"},
        { "rooster", "cock-a-doodle-doo" },
        { "cow", "moo" }
    };

    const string default_sound = "joff-tchoff-tchoffo-tchoffo-tchoff";

    string animal;
    cin >> animal;

    for (char &c : animal)
        c |= 0b100000; // if A-Z: +32 -> a-z else: a-z

    cout << (sounds.find(animal) == sounds.end()
             ? default_sound
             : sounds[animal]);
}