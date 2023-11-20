#include <REGX51.H>





void Timer0_Init(void)		//1毫秒@11.0592MHz
{
	
	TMOD &= 0xF0;			
	TL0 = 0x66;				//设置定时初始值
	TH0 = 0xFC;				//设置定时初始值
	TF0 = 0;				//清除TF0标志
	TR0 = 1;				//定时器0开始计时
	ET0 = 1;		//使能定时器0中断
	EA =  1;

}   
