#include<string.h>
#include<iostream>
using namespace std;
#define inf (ll)9e18
typedef long long ll;

int main(){
    
    string mystr;
    getline (cin, mystr);
    int flag ;
    for(int i=0;i<mystr.length();i++){
        if(mystr[i]==' '){
            flag =i;
        }
    }
    char start = mystr[flag+1];
    int index =0;
    for(int i=1;i<flag;i++){
        if(mystr[i] < start){
            index++;
        }
        else{
            break;
        }
    }
    cout<<mystr.substr(0,index+1)<<mystr[flag+1]<<endl;
    

}
    