// For loops use the form:
// for (initialization; condition; increase)
// statement;
#include <iostream>
#include <Windows.h>
using namespace std;
int main() {
	for (int n = 10; n > 0; n--) {
		cout << n << ", ";
		Sleep(1000);
	}
	cout << "liftoff!\n";
	system("pause");
	return 0;
}