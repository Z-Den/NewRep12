#include <iostream>

using namespace std;
char Reg (unsigned char c)
{
     if (c>='a' && c<='z'){
        return c+'A'-'a';
    }
        else {
            return c-'A'+'a' ;
        }
}
int main()
{
    char c,x;
    cin>>c;
    x=Reg (c);
    cout<<x;
    return 0;
}
