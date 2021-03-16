#include <iostream>

using namespace std;

int main()
{
    string str;
    int spc=1;
    cin>>str;
    getline(cin, str);
    for (int i=0;i<str.size();i++)
    if(str[i]==' '){
        spc++;
    }
    cout<<spc;
}

