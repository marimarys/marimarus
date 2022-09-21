#include <iostream>
using namespace std;
int main() {
	//1
	/*
	int a;
	cin >> a;
	bool res = a > 0;
	cout << boolalpha << res << endl;
	*/
	//2
	/*
	int a;
	cin >> a;
	bool res = a % 2 != 0;
	cout << boolalpha << res << endl;
	*/
	//3
	/*
	int a;
	cin >> a;
	bool res = a % 2 == 0;
	cout << boolalpha << res << endl;
	*/
	//4
	/*
	int a, b;
	cin >> a >> b;
	bool res = a > 2 && b <= 3;
	cout << boolalpha << res << endl;
	*/
	//5
	/*
	int a, b;
	cin >> a >> b;
	bool res = a >= 0 || b < -2;
	cout << boolalpha << res << endl;
	*/
	//6
	/*
	int a, b, c;
	cin >> a >> b >> c;
	bool res = a < b && b < c;
	cout << boolalpha << res << endl;
	*/
	//7
	/*
	int a, b, c;
	cin >> a >> b >> c;
	bool res = a < b < c || c < b < a;
	cout << boolalpha << res << endl;
	*/
	//8
	/*
	int a,b;
	cin >> a >> b;
	bool res = a % 2 != 0 && b % 2!= 0;
	cout << boolalpha << res << endl;
	*/
	//9
	/*
	int a, b;
	cin >> a >> b;
	bool res = a % 2 != 0 || b % 2 != 0;
	cout << boolalpha << res << endl;
	*/
	//10
	/*
	int a, b;
	cin >> a >> b;
	bool res = a % 2 != 0 && b % 2 == 0 || a % 2 == 0 && b % 2 != 0;
	cout << boolalpha << res << endl;
	*/
	//11
	/*
	int a, b;
	cin >> a >> b;
	bool res = a % 2 != 0 && b % 2 != 0 || a % 2 == 0 && b % 2 == 0;
	cout << boolalpha << res << endl;
	*/
	//12
	/*
	int a, b, c;
	cin >> a >> b >> c;
	bool res = a > 0 && b > 0 && c > 0;
	cout << boolalpha << res << endl;
	*/
	//13
	/*
	int a, b, c;
	cin >> a >> b >> c;
	bool res = a > 0 || b > 0 || c > 0;
	cout << boolalpha << res << endl;
	*/
	//14
	/*
	int a, b, c;
	cin >> a >> b >> c;
	bool res = a > 0 && b < 0 && c < 0 || a < 0 && b < 0 && c>0 || a < 0 && b > 0 && c < 0;
	cout << boolalpha << res << endl;
	*/
	//15
	int a, b, c;
	cin >> a >> b >> c;
	bool res = a > 0 && b > 0 && c < 0 || a > 0 && b < 0 && c>0 || a < 0 && b > 0 && c > 0;
	cout << boolalpha << res << endl;
	}
