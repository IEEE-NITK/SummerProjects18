#include<bits/stdc++.h>
using namespace std;
int main()
{
    string firstname, lastname, first, last;
    cin >> first;
    cin >> last;

    int first_size = first.size();
    int last_size = last.size();



    char letter_lastn = last[0];

    for(int i = 1; first[i] != '\0'; ++i)
    {
        if(first[i]>=letter_lastn && first[i+1]!='\0')
        {
            first[i] = letter_lastn;
            for(int j=first_size;j!=i+1;--j)
            {
                first.pop_back();
            }
            break;
        }
        if(first[i+1] == '\0' && first[i]>=letter_lastn)
        {
            first[i] = letter_lastn;
            break;
        }
        else if(first[i+1] == '\0')
        {
            first.push_back(letter_lastn);
            break;
        }
    } 
    
    if(first_size == 1)
    {
        first.push_back(letter_lastn);
    }

    cout << first << endl;
    return 0;
}