#include <iostream>

using namespace std;

bool isDigit(unsigned char c)
{
    if (c>='0' && c<='9'){
        return true;}
        else{
            return false;}
}
int main()
{
        char c;
        cin>>c;
        if (isDigit(c)==true){
            cout<<"yes";}
            else{
                cout<<"no";
            }
}
