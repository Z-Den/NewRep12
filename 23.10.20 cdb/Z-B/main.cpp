#include <iostream>

using namespace std;
char ToUpper(unsigned char c)
{
    if (c>='a' && c<='z'){
    return c+'A'-'a';
    }
        else {
            return c;
        }
}

int main()
{
    char c,x;
    cin>>c;
    x=ToUpper(c);
    cout<<x;
}

//r='A'-'a'//
//C='a'+r//
