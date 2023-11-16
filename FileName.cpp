#include <iostream>
#include <string>
using namespace std;

int Count(const string s, const char c)
{
    size_t pos = 0;
    int k = 0;
    while ((pos = s.find(c, pos)) != string::npos)
    {
        k++;
        pos++;
    }
    return k;
}

string Change(string& s)
{
    size_t pos = 0;
    while ((pos = s.find_first_of("+-=", pos)) != string::npos)
    {
        if (pos < s.length())
        {
            if (s[pos] == '-')
            {
                s.replace(pos, 1, "**");
            }
            else
            {
                s.replace(pos, 1, "**");
            }
        }
        else
        {
            pos++;
        }
    }
    return s;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "String contained " << Count(str, '+') << " Plus " << endl;
    cout << "String contained " << Count(str, '-') << " Minus " << endl;
    cout << "String contained " << Count(str, '=') << " Equal " << endl;
   
    int sum = Count(str, '+') + Count(str, '-') + Count(str, '=');
    cout << "Sum of + - = is " << sum << endl;

    string dest = Change(str);

    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
}
