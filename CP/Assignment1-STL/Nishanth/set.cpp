#include <iostream>
#include <set>
#include <iterator>
 
using namespace std;
 
int main()
{
    set< int > st;
    set <int> :: iterator itr;
    int q,n,i,y,x,z,j;
    cin >> q;
    for(i=0;i<q;i++)
    {
        cin >> n;
        switch(n)
        {
        case 1:
            cin >> x;
		    st.insert(x);     
            break;
        case 2:
		    cout << st.size() << endl;
		    break;
		case 3:
		    itr=st.begin();
		    st.erase(*itr);
		    break;
		case 4:
		    itr=st.begin();
		    cout << *itr <<endl;
		    break;
		case 5:
		    for(itr=st.begin();itr!=st.end();++itr)
		        cout << *itr << " ";
		    cout << "\n";
		    break;
		case 6:
		    itr=st.end();
		    cout << *itr << endl;
		    break;
		case 7:
            {   
                    cin>>x;
                    itr = st.find(x);
                    if(itr != st.end())
                        cout<<"Yes"<<endl;
                    else 
                        cout<<"No"<<endl;
            }
            break;
        case 8:
            {
                cin>>x;
                st.erase(x);
            }
            break;
        }
    }
    return 0;
}

		    
		    
		
		        
