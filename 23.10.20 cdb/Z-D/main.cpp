#include <iostream>

using namespace std;
bool Compare(string s1, string s2)
{
    if (s1==s2){
        return true;
    }
        else {
            return false;
        }
}
int main()
{
    string s1,s2;
    cin>>s1>>s2;
    if (Compare (s1,s2)==true){
        cout<<"yes";
    }
        else{
            cout<<"no";
        }
}
