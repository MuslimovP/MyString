#pragma once

class MyString
{
private:
    char* str;
    int length;

public:
    // ����������� �� ���������
    MyString();

    // ����������� � ���������� ��� ������������� ������� ������
    MyString(int size);

    // �����������, ���������������� ������ ��������� �� ������������
    MyString(const char* initStr);

    // ����������� �����������
    MyString(const MyString& other);

    // ����������� �������� (��������� ��������)
    MyString(MyString&& other);

    // �������� ������������
    MyString& operator=(const MyString& other);

    MyString& operator=(MyString&& other);

    // ����������
    ~MyString();

    // ������ ��� ����� � ������ �����
    void MyInput();
    void MyOutput() const;

    // ��������� ����� ������
    int MyGetLength() const;

    // ��������� ������
    char* MyGetStr() const;

    void MyStrcpy(MyString& obj);     // ����������� ������
    bool MyStrStr(const char* obj);     // ����� ��������� � ������
    int MyChr(char obj);                // ����� ������� � ������
    int MyStrLen() const;             // ���������� ����� ������
    void MyStrCat(MyString& b);       // ����������� �����
    void MyDelChr(char c);            // �������� ���������� �������
    int MyStrCmp(MyString& b);        // ��������� �����
    bool operator==(const MyString& b) const; // ��������� �����
    bool operator<(const MyString& b) const;  // ������
    bool operator>(const MyString& b) const;  // ������


    
};
