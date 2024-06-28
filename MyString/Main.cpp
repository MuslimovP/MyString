#include "MyString.h"
#include <iostream>

using namespace std;

int main() 
{
    setlocale(0, "ru"); 

    MyString str1;
    MyString str2(50);
    MyString str3("Hello, World!");
     
    str1.MyOutput(); 
    str2.MyOutput(); 
    str3.MyOutput(); 

    cout << "Введите строку для str2: " << endl;
    str2.MyInput(); 
    str2.MyOutput();  

    cout << "Копируем строку str3 в str1: " << endl;
    str1.MyStrcpy(str3);
    str1.MyOutput();

    cout << "Строка 'World' найдена в str3: " << (str3.MyStrStr("World") ? "Да" : "Нет") << endl;
    cout << "Символ 'o' найден в str3 на позиции: " << str3.MyChr('o') << endl;
    cout << "Длина str3: " << str3.MyStrLen() << endl;

    cout << "Обьединяем строки str1 в str2: " << endl;
    str1.MyStrCat(str2);
    str1.MyOutput();  

    cout << "MyDelChr: 'l'" << endl;
    str1.MyDelChr('l');
    str1.MyOutput();

    cout << "Cтрока str1 : " << endl;
    str1.MyOutput();
    cout << "Cтрока str2 : " << endl;
    str2.MyOutput();

    cout << "Сравнение str1 и str2: " << str1.MyStrCmp(str2) << endl;
    cout << "str1 и str2 равны: " << (str1 == str2 ? "Да" : "Нет") << endl;
    cout << "str1 < str2: " << (str1 < str2 ? "Да" : "Нет") << endl;
    cout << "str1 > str2: " << (str1 > str2 ? "Да" : "Нет") << endl;

    return 0;
}