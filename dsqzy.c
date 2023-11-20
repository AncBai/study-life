#include <REGX51.H>
#include "LCD1602.h"
unsigned  int a=0;
unsigned  int js=0;
unsigned int b = 0;
#define   K1 P3_1
#define   K2 P3_0
#define   K3 P3_2
#define   K4 P3_3
#define   fmq P2_5
unsigned int   d=0;


void delay(unsigned int x)	//@11.0592MHz
{
	unsigned char data i, j;


	i = 2;
	j = 199;
	while (x--) {
		do
		{
			while (--j);
		} while (--i);
	}
}

void dsqcsq() {//可位寻址可以给每一项单独赋值
	//不可位只能整体赋值


	//再设置俩个定时器有一个问题在设置完第一个之后第二个的设置会覆盖第一个的设置可以用与或赋值法进行赋值
	TF0 = 0;
	TR0 = 1;
	TMOD = TMOD & 0xF0; //把低四位清零高四位不变
	TMOD = TMOD | 0x01;//把tmod最低置1
	

	//每隔1us计数+1  最大定时时间  65535us

	ET0 = 1;
	EA = 1;
	PT0 = 1;


	TH0 = 64535 / 256;//把数分俩部分存放  这里的俩个都是给初值
	TL0 = 64535 % 256;
}

void zd() interrupt 1{
	
	TH0 = 64535 / 256;//把数分俩部分存放  这里的俩个都是给初值
	TL0 = 64535 % 256;
	b++;


	if (b >= 1) {
	
		d++; 
		if (d == 20) { d = 0; }
	}

	if (b >= 1000) {
		b = 0;
		a++;
	}
}
void djs() {
	
	if (K2 == 0) {
		while (2-d);
		while(K2 == 0){}
		js++;
	}
	if (K3 == 0) {
		if (js == 0) { js = 1; }
		while (2 - d);
		while (K3 == 0) {}
		js--;
	}
	if (K4==0) {
		P2_0 = 0;
		while (1) {
			while (999-b)
			{

			}
				js--;
				
				if (K1 == 0)  break;
				if (js == 0)break;
				
	}

		
	
	
}
LCD_ShowNum(1, 3, js, 3);	}

void main(){
	LCD_Init();//LCD初始化
dsqcsq() ;//定时器初始化



while (1) {

	LCD_ShowNum(1, 3, a, 3);
	if (K1 == 0)  break;
}



while (1)
{
	djs();
}

}

