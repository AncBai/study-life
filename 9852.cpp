#include<iostream>
using namespace std;
template<typename T>
T max1(T a, T b 0) {
	int c = 9;
	if (a < c) {
		a = c;
}
	if (b > a){
		a = b;
	}
return a;
}
int main() {
	int a1, b1;
	cin >> a1 >> b1;
	cout << "����ֵ�����ֵΪ:" << max1(a1, b1) << endl;
	
	return 0;
}

