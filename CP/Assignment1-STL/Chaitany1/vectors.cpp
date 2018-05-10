#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
   vector <int> a;
   int t;
   cin>>t;
   for(int i=0;i<t;i++)
   {
       int x;
       cin>>x;
       switch(x)
       {
       case 1:
           int y;
           cin>>y;
           a.push_back(y);
           break;
       case 2:
           int a1,b;
           cin>>a1>>b;
           a[a1]=b;
           break;
       case 3:
           int item;
           cin>>item;
           if(find(a.begin(), a.end(), item) != a.end())
           {
               cout<<"Yes"<<'\n';
           }
           else
            cout<<"No"<<'\n';
            break;
       case 4:
            int x1;
            cin>>x1;
            a.erase(find(a.begin(), a.end(),x1));
            break;
       case 5:
           cout<<a.size()<<'\n';break;
       case 6:
            sort(a.begin(),a.end());
            break;
       case 7:
            for(int j=0;j<a.size();j++)
            {
                cout<<a[j]<<'\t';
            }


       }
   }
}
