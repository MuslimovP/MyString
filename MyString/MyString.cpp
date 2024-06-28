#include "MyString.h"
#include <iostream>



using namespace std;

// Конструктор по умолчанию 
MyString::MyString() 
{
    str = new char[81];
    length = 80;
    str[0] = '\0';
} 

// Конструктор с параметром для произвольного размера строки
MyString::MyString(int size) 
{
    str = new char[size + 1]; 
    length = size;
    str[0] = '\0'; // Инициализация пустой строки
}

// Конструктор, инициализирующий строку значением от пользователя
MyString::MyString(const char* initStr)
{
    length = strlen(initStr);
    str = new char[length + 1];
    strcpy_s(str, length + 1, initStr);
}

// Конструктор копирования
MyString::MyString(const MyString& other)
{
    length = strlen(other.str);  
    str = new char[length + 1];
    strcpy_s(str, length + 1, other.str);
}

// Оператор присваивания
MyString& MyString::operator=(const MyString& other)
{
    if (this != &other)
    {
        delete[] str;
        length = other.length;
        str = new char[length + 1];
        strcpy_s(str, length + 1, other.str);
    }
    return *this;
}

// Деструктор
MyString::~MyString()
{
    delete[] str;
}

// Метод для ввода строки с клавиатуры
void MyString::MyInput()
{
    cout << "Enter a string: ";
    cin.getline(str, length + 1);
}

// Метод для вывода строки на экран
void MyString::MyOutput() const
{
    cout << str << endl;
}

// Получение длины строки
int MyString::MyGetLength() const 
{
    return length;
}

// Получение строки
char* MyString::MyGetStr() const 
{
    return str;
}

// Копирование строки
void MyString::MyStrcpy(MyString& obj) 
{
    delete[] str; 
    length = strlen(obj.str);  
    str = new char[length + 1]; 
    strcpy_s(str, length + 1, obj.str); 
}

// Поиск подстроки в строке
bool MyString::MyStrStr(const char* obj)
{
    int subLength = strlen(obj);
    for (int i = 0; i <= length - subLength; ++i) 
    {
        bool found = true;
        for (int j = 0; j < subLength; ++j) 
        {
            if (str[i + j] != obj[j]) 
            {
                found = false;
                break;
            }
        }
        if (found) return true;
    }
    return false;
}

// Поиск символа в строке
int MyString::MyChr(char obj)
{
    for (int i = 0; i < length; ++i) 
    {
        if (str[i] == obj)
        {
            return i;
        }
    }
    return -1;
}

// Возвращает длину строки
int MyString::MyStrLen() const
{
    return length; 
}

// Объединение строк
void MyString::MyStrCat(MyString& b)
{
    char* temp = new char[length + b.length + 1]; 
    strcpy_s(temp, length + 1, str); 
    strcat_s(temp, length + b.length + 1, b.str); 
    delete[] str; 
    str = temp; 
    length += b.length;   
}

// Удаление указанного символа
void MyString::MyDelChr(char obj)
{
    char* temp = new char[length + 1];
    int j = 0;
    for (int i = 0; i < length; ++i) 
    {
        if (str[i] != obj)
        {
            temp[j++] = str[i];
        }
    }
    temp[j] = '\0';
    delete[] str;
    str = temp;
    length = j;
}

// Сравнение строк
int MyString::MyStrCmp(MyString& b)
{
    int minLength = (length < b.length) ? length : b.length;
    for (int i = 0; i < minLength; ++i) 
    {
        if (str[i] < b.str[i]) return -1;
        if (str[i] > b.str[i]) return 1;
    }
    if (length < b.length) return -1;
    if (length > b.length) return 1;
    return 0;
}

// Перегрузка оператора ==
bool MyString::operator==(const MyString& b) const 
{
    if (length != b.length) return false;
    return true;
}

// Перегрузка оператора <
bool MyString::operator<(const MyString& b) const
{
    return length < b.length;
}

// Перегрузка оператора >
bool MyString::operator>(const MyString& b) const
{
    return length > b.length;
}
