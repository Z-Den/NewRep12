#include <iostream>
#include <fstream>
#include <string>

using namespace std;

string encode (string s){
    int c = 1;
    string code = "";
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] == s[i + 1]){
            c ++;
        }else{
            string s1 = to_string(c);
            code += s1 + s[i];
            c = 1;
        }
    }
    string s1 = to_string(c) + s[s.size()-1];
    code += s1;
    return code;
}
string decode(string s){
    string message, coun;
    for(int i = 0; i < s.size() - 1; i++){
        if(s[i] >= '0' && s[i] <= '9'){
            coun += s[i];

        }else{
            int x = atoi(coun.c_str());
            coun = "";
            while(x){
                message += s[i];
                x--;
            }
        }
    }
    int x = atoi(coun.c_str());
    message += string (x,s[s.size()-1]);
    return message;
}

int main()
{

    fstream file("str.txt");
    string s;
    file >> s;

    cout << encode (s);
    string m = encode (s);
    cout << endl << decode (m);


    return 0;
}
