#include <iostream>
#include<string>
using namespace std;

int main()
{
    string str,str1,str2;
    getline (cin, str);
    int itr = str.find(" ");
    str1 = str.substr(0,itr);
    str2 = str.substr(itr+1);
    string::iterator itr1;
    cout << *str1.begin();
    for(itr1=(++str1.begin());itr1<str1.end();++itr1)
    {
        if(*(str2.begin()) > *itr1)
            cout << *itr1;
        else 
            {
                cout << *(str2.begin());
                break;
            }
    }
    if(itr1==str1.end())
         cout << *(str2.begin());

    return 0;
}
