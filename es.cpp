#include<iostream>
using namespace std;//ȫ�������򣨶�Ӧȫ�ֱ�����
struct student {
public:
	void a1() {
		cin >> name;
		cin >> number;
		cin >> addr;
		cin >> score;

	}         
	void a2() {
		cout << score << endl;
		cout << name << endl;
	}
private:
	char   name[20];
	int number;																																																																																																																																									
	float score; 
	char addr[100];

};
struct student stu1, stu2;

void main() {
	stu1.a1();
	stu1.a2();
	stu2.a1();
	stu2.a2();








}