#include <iostream>

using namespace std;
string f (string s, int i) {
    string k = ")";
    string n = "(";
    string s1(1, s[i]);
    if (i == s.size()) {
        return s1;
    }
    if (s.size() % 2 == 0) {
        if ((i == s.size() / 2) || (i == s.size() / 2 - 1)) {
            return s1 + f(s, i + 1);
        }
    }
    if (s.size() % 2 != 0) {
        if (i == (s.size() - 1) / 2) {
            return s1 + f(s, i + 1);
        }
    }
    if (i <= s.size() / 2 - 1) {
        return s1 + n + f(s, i + 1);
    }
    if ((i >= s.size() / 2 + 1 && s.size() % 2 == 0) || (i >= s.size() / 2 + 1 && s.size() % 2 == 1)) {
        return k + s1 + f(s, i + 1);
    }
}

int main()
{
    string s;
    int i = 0;
    cin >> s;
    cout << f(s, i);

    return 0;
}