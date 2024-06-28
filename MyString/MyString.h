#pragma once

class MyString
{
private:
    char* str;
    int length;

public:
    // Конструктор по умолчанию
    MyString();

    // Конструктор с параметром для произвольного размера строки
    MyString(int size);

    // Конструктор, инициализирующий строку значением от пользователя
    MyString(const char* initStr);

    // Конструктор копирования
    MyString(const MyString& other);

    // Конструктор переноса (семантика переноса)
    MyString(MyString&& other);

    // Оператор присваивания
    MyString& operator=(const MyString& other);

    MyString& operator=(MyString&& other);

    // Деструктор
    ~MyString();

    // Методы для ввода и вывода строк
    void MyInput();
    void MyOutput() const;

    // Получение длины строки
    int MyGetLength() const;

    // Получение строки
    char* MyGetStr() const;

    void MyStrcpy(MyString& obj);     // Копирование строки
    bool MyStrStr(const char* obj);     // Поиск подстроки в строке
    int MyChr(char obj);                // Поиск символа в строке
    int MyStrLen() const;             // Возвращает длину строки
    void MyStrCat(MyString& b);       // Объединение строк
    void MyDelChr(char c);            // Удаление указанного символа
    int MyStrCmp(MyString& b);        // Сравнение строк
    bool operator==(const MyString& b) const; // Сравнение строк
    bool operator<(const MyString& b) const;  // Меньше
    bool operator>(const MyString& b) const;  // Больше


    
};
