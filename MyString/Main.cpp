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

    cout << "������� ������ ��� str2: " << endl;
    str2.MyInput(); 
    str2.MyOutput();  

    cout << "�������� ������ str3 � str1: " << endl;
    str1.MyStrcpy(str3);
    str1.MyOutput();

    cout << "������ 'World' ������� � str3: " << (str3.MyStrStr("World") ? "��" : "���") << endl;
    cout << "������ 'o' ������ � str3 �� �������: " << str3.MyChr('o') << endl;
    cout << "����� str3: " << str3.MyStrLen() << endl;

    cout << "���������� ������ str1 � str2: " << endl;
    str1.MyStrCat(str2);
    str1.MyOutput();  

    cout << "MyDelChr: 'l'" << endl;
    str1.MyDelChr('l');
    str1.MyOutput();

    cout << "C����� str1 : " << endl;
    str1.MyOutput();
    cout << "C����� str2 : " << endl;
    str2.MyOutput();

    cout << "��������� str1 � str2: " << str1.MyStrCmp(str2) << endl;
    cout << "str1 � str2 �����: " << (str1 == str2 ? "��" : "���") << endl;
    cout << "str1 < str2: " << (str1 < str2 ? "��" : "���") << endl;
    cout << "str1 > str2: " << (str1 > str2 ? "��" : "���") << endl;

    return 0;
}