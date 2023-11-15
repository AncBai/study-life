#include <REGX51.H>
void a(){//定时器设置
	TF0=0;
	TR0=1;
	TMOD=0x01;//同时配置俩个定时器时会把它的定时器1的状态给刷新
	TMOD = TMOD & 0XF0;// 这个是为了不刷新定时器1   把TMOD低四位清零 高四位保持不变
	//与或式赋值法
	TMOD = TMOD | 0X01; //最低位置1  高四位不变
	ET0=1;
	PT0H=0;
	PT0=0;
	EA=1;
	TH0=63535/256;
	TL0=63535%256;//最大 可定时65535us  11.0592mhz/6
}
unsigned int  b=0；
void main(){





}









void b()  interrupt 1{
	b++；
		if (b >= 1000){
			b = 0;
			P2_0 = ~P2_0;
		}
}





