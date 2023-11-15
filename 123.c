#include <REGX51.H>
#define  LED P2

void LED1(int a);
	void LED2(int a);
		void LED3(int a);
			void LED4(int a);
				void LED5(int a);
					void LED6(int a);
						void LED7(int a);
							void LED8(int a);
								void LED9(int a);
									void LED10(int a);
										void LED11(int a);
											void LED12(int a);
											 void LED13(int a);
											  void LED14(int a);
											   void LED15(int a);
											    void LED16(int a);
											     void LED17(int a);
											      void LED18(int a);
											       void LED19(int a);
											        void LED20(int a);
											         void LED21(int a);
											          void LED22(int a);
											           void LED23(int a);
void delay(int b)	//@11.0592MHz
{
	unsigned char data i, j;

	i = 180;
	j = 73;
	while(b--){
	do
	{
		while (--j);
	} while (--i);
}
}
void LED1(int a) {
	LED = 0xFE;
	delay(a);
	LED = 0xFD;
	delay(a);
	LED = 0xFB;
	delay(a);
	LED = 0xF7;
	delay(a);
	LED = 0xEF;
	delay(a);
	LED = 0xDF;
	delay(a);
	LED = 0xBF;
	delay(a);
	LED = 0x7F;
	delay(a);


}

int main(){
	int x;
for(x=2;x>=0;x--){
	while(x){
     LED1(x);
		 LED2(x);
		 LED3(x);
		 LED4(x);
		 LED5(x);
		 LED6(x);
		 LED7(x);
		 LED8(x);
		 LED9(x);
		LED10(x);
			LED11(x);
			LED12(x);
		LED12(x);
		LED13(x);
		LED14(x);
		LED15(x);
		LED16(x);
		LED17(x);
		LED18(x);
		LED19(x);
		LED20(x);
		LED21(x);
		LED22(x);
		LED23(x);
		x--;
	}
}

return 0;
}





void LED2(int a) {
	LED = 0xFE;
	delay(a);
	
	LED = 0xFB;
	delay(a);
	LED = 0xF7;
	delay(a);
	LED = 0xEF;
	delay(a);
	LED = 0xDF;
	delay(a);
	LED = 0xBF;
	delay(a);
	LED = 0x7F;
	delay(a);


}
void LED3(int a) {
	LED = 0xFE;
	delay(a);
	LED = 0xFD;
	delay(a);
	
	LED = 0xF7;
	delay(a);
	LED = 0xEF;
	delay(a);
	LED = 0xDF;
	delay(a);
	LED = 0xBF;
	delay(a);
	LED = 0x7F;
	delay(a);


}void LED4(int a) {
	LED = 0xFE;
	delay(a);
	LED = 0xFD;
	delay(a);
	LED = 0xFB;
	delay(a);

	LED = 0xEF;
	delay(a);
	LED = 0xDF;
	delay(a);
	LED = 0xBF;
	delay(a);
	LED = 0x7F;
	delay(a);


}
void LED5(int a) {
	LED = 0xFE;
	delay(a);
	LED = 0xFD;
	delay(a);
	LED = 0xFB;
	delay(a);
	LED = 0xF7;
	delay(a);

	LED = 0xDF;
	delay(a);
	LED = 0xBF;
	delay(a);
	LED = 0x7F;
	delay(a);


}
void LED6(int a) {
	LED = 0xFE;
	delay(a);
	LED = 0xFD;
	delay(a);
	LED = 0xFB;
	delay(a);
	LED = 0xF7;
	delay(a);
	LED = 0xEF;
	delay(a);

	LED = 0xBF;
	delay(a);
	LED = 0x7F;
	delay(a);


}void LED7(int a) {
	LED = 0xFE;
	delay(a);
	LED = 0xFD;
	delay(a);
	LED = 0xFB;
	delay(a);
	LED = 0xF7;
	delay(a);
	LED = 0xEF;
	delay(a);
	LED = 0xDF;
	delay(a);

	LED = 0x7F;
	delay(a);


}void LED8(int a) {
	LED = 0xFE;
	delay(a);
	LED = 0xFD;
	delay(a);
	LED = 0xFB;
	delay(a);
	LED = 0xF7;
	delay(a);
	LED = 0xEF;
	delay(a);
	LED = 0xDF;
	delay(a);
	LED = 0xBF;
	delay(a);



}
void LED9(int a) {

	LED = 0xFD;
	delay(a);
	LED = 0xFB;
	delay(a);
	LED = 0xF7;
	delay(a);
	LED = 0xEF;
	delay(a);
	LED = 0xDF;
	delay(a);
	LED = 0xBF;
	delay(a);
	LED = 0x7F;
	delay(a);


}
void LED10(int a) {
	LED = 0xFE;
	delay(a);
	LED = 0xFD;
	delay(a);
	
	LED = 0xBF;
	delay(a);
	LED = 0x7F;
	delay(a);


}

void LED11(int a) {

	LED = 0xFB;
	delay(a);
	LED = 0xF7;
	delay(a);
	LED = 0xEF;
	delay(a);
	LED = 0xDF;
	delay(a);
	LED = 0xBF;
	delay(a);


}


void LED12(int a) {
	LED = 0xFE;
	delay(a);

	LED = 0xFB;
	delay(a);

	LED = 0xEF;
	delay(a);
	LED = 0xDF;
	delay(a);

	LED = 0x7F;
	delay(a);


}
void LED13(int a) {

	LED = 0x7F;
	delay(a);
		LED = 0xBF;
	delay(a);
		LED = 0xDF;
	delay(a);
		LED = 0xEF;
	delay(a);
		LED = 0xF7;
	delay(a);
	LED = 0xFB;
	delay(a);
		LED = 0xFD;
	delay(a);
		
	LED = 0xFE;
	delay(a);
	
	

}



void LED14(int a) {


		LED = 0xBF;
	delay(a);
		LED = 0xDF;
	delay(a);
		LED = 0xEF;
	delay(a);
		LED = 0xF7;
	delay(a);
	LED = 0xFB;
	delay(a);
		LED = 0xFD;
	delay(a);
		
	LED = 0xFE;
	delay(a);
	
	

}


void LED15(int a) {

	LED = 0x7F;
	delay(a);

		LED = 0xDF;
	delay(a);
		LED = 0xEF;
	delay(a);
		LED = 0xF7;
	delay(a);
	LED = 0xFB;
	delay(a);
		LED = 0xFD;
	delay(a);
		
	LED = 0xFE;
	delay(a);
	
	

}

void LED16(int a) {

	LED = 0x7F;
	delay(a);
		LED = 0xBF;
	delay(a);
	
		LED = 0xEF;
	delay(a);
		LED = 0xF7;
	delay(a);
	LED = 0xFB;
	delay(a);
		LED = 0xFD;
	delay(a);
		
	LED = 0xFE;
	delay(a);
	
	

}
void LED17(int a) {

	LED = 0x7F;
	delay(a);
		LED = 0xBF;
	delay(a);

		LED = 0xEF;
	delay(a);
		LED = 0xF7;
	delay(a);
	LED = 0xFB;
	delay(a);
		LED = 0xFD;
	delay(a);
		
	LED = 0xFE;
	delay(a);
	
	

}


void LED18(int a) {

	LED = 0x7F;
	delay(a);
		LED = 0xBF;
	delay(a);
		LED = 0xDF;
	delay(a);
	
		LED = 0xF7;
	delay(a);
	LED = 0xFB;
	delay(a);
		LED = 0xFD;
	delay(a);
		
	LED = 0xFE;
	delay(a);
	
	

}
void LED19(int a) {

	LED = 0x7F;
	delay(a);
		LED = 0xBF;
	delay(a);
		LED = 0xDF;
	delay(a);
		LED = 0xEF;
	delay(a);
	
	LED = 0xFB;
	delay(a);
		LED = 0xFD;
	delay(a);
		
	LED = 0xFE;
	delay(a);
	
	

}
void LED20(int a) {

	LED = 0x7F;
	delay(a);
		LED = 0xBF;
	delay(a);
		LED = 0xDF;
	delay(a);
		LED = 0xEF;
	delay(a);
		LED = 0xF7;
	delay(a);

		LED = 0xFD;
	delay(a);
		
	LED = 0xFE;
	delay(a);
	
	

}

void LED21(int a) {

	LED = 0x7F;
	delay(a);
		LED = 0xBF;
	delay(a);
		LED = 0xDF;
	delay(a);
		LED = 0xEF;
	delay(a);
		LED = 0xF7;
	delay(a);
	LED = 0xFB;
	delay(a);

	LED = 0xFE;
	delay(a);
	
	

}

void LED22(int a) {

	LED = 0x7F;
	delay(a);
		LED = 0xBF;
	delay(a);
		LED = 0xDF;
	delay(a);
		LED = 0xEF;
	delay(a);
		LED = 0xF7;
	delay(a);
	LED = 0xFB;
	delay(a);

		
	LED = 0xFE;
	delay(a);
	
	

}
void LED23(int a) {

	LED = 0x7F;
	delay(a);
		LED = 0xBF;
	delay(a);
		LED = 0xDF;
	delay(a);
		LED = 0xEF;
	delay(a);
		LED = 0xF7;
	delay(a);
	LED = 0xFB;
	delay(a);
		LED = 0xFD;
	delay(a);
		

	
	
