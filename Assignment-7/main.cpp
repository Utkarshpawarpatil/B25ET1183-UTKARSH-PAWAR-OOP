#include <iostream>
#include <cstring>
using namespace std;
class String
{
    char *str;
public:
    String()
    {
        str = new char[100];
    }
    String(const String &s)
    {
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }
    void Accept()
    {
        cout << "Enter a string: ";
        cin.getline(str, 100);
    }
    void Display()
    {
        cout << "String = " << str << endl;
    }
    ~String()
    {
        delete[] str;
    }
};
int main()
{
    String s1;
    s1.Accept();
    cout << "\nOriginal String:" << endl;
    s1.Display();
    String s2(s1);
    cout << "\nCopied String:" << endl;
    s2.Display();
    return 0;
}
