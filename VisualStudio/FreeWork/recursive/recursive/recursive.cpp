#include <iostream>
using namespace std;
int main()
{
	int s = 0, n = 20;
	while (s + n <= 100) {
		s = s + 25;
		n = n - 5;
	}
	cout << s;
	return 0;
}