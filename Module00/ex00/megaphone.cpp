#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::endl;
 

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        cout << "* LOUD AND UNREADABLE FEEDBACK NOISE *";
    }
    else
    {
        for (int i = 1; i < argc; i++)
        {
            string s(argv[i]);
            for (int j = 0; j < s.size(); j++)
            {
                cout << (char)toupper(s[j]);
            }
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}
