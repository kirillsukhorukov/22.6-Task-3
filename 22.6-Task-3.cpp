#include <iostream>
#include <string>
#include <map>

bool anagram (const std::string &str1, const std::string &str2)
{
    //два словаря в которые в качестве ключей записываются буквы из слова, а в качестве значений число повторений этих букв
    std::map <char, int> map1;
    std::map <char, int> map2;
    
    //перебор букв в первой строке, находим букву - добавляем ее ключ, а значение увеличиваем на единицу
    for (int i=0; i<str1.length(); i++) 
    {
        ++map1[str1[i]];
    }

    //перебор букв во второй строке, находим букву - в значение добавляем единицу
    for (int i=0; i<str2.length(); i++) 
    {
        ++map2[str2[i]];
    }

    //определяем эквивалентность словарей и возвращаем результат
    if (map1 == map2) return true; else return false;
}

int main() { 
    
    //ввод двух строк
    std::string str1, str2;
    std::cin >> str1 >> str2;

    //вывод результата
    (anagram(str1,str2)) ? std::cout << "Yes, these strings is an anagram" : std::cout << "No, these strings is not an anagram";

    return 0;
}
