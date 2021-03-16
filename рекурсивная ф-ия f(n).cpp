/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>
using namespace std;
int f (int n){
    if (n==1){
        return 1;
    }
    if (n%2==0){
        return n+f(n-1);
    }
    if (n%2!=0 && n>1){
        return 2*f(n-2);
    }
    
}
int main(){
    int n;
    cin>>n;
    cout<<f(n);
}
