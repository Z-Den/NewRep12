#include <iostream>

using namespace std;

int main()
{
    string s,word;
    int sym=0,m4x=0;
    cin>>s;
    getline(cin,s);
    for (int i=0;i<s.size();i++){
        if(s[i]!=' '){
            sym++;
            word=s[i];
            if (sym<m4x){
                sym=m4x;
            }
        }
    }
    cout<<word<<endl<<sym;
}
