
   /*
 * AVRGDD1.c
 *
 * Dreated: 11/17/2013 9:103:109 AM
 *  Author: Abhinav Maheshwari
 */ 
# define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>
void pattern_1();
void pattern_2();
void pattern_3();
void pattern_4();
void pattern_5();
void pattern_6();
void pattern_7();
void pattern_8();
void pattern_9();

int main(void)
{
	DDRA = 0XFF;
	DDRC = 0XFF;
	DDRD = 0XFF;
    while(1)
    {
		PORTA = 0XFF;
		PORTC = 0XFF;
		PORTD = 0X00;
		pattern_7();
	//	pattern_1();
	//	pattern_2();
		pattern_4();
		pattern_3();
		pattern_5();
		pattern_6();
		pattern_6();
		pattern_9();
		pattern_9();
		pattern_8();
		pattern_8();
    }
}

void pattern_1()
{
	PORTA = 0b10010010;					//1
	PORTC = 0b01001010;
	PORTD = 0b11111110;
	_delay_ms(250);
	
	PORTA = 0b10010010;					//1
	PORTC = 0b01001010;
	PORTD = 0b11111101;
	_delay_ms(250);
	
	PORTA = 0b10010010;					//1
	PORTC = 0b01001010;
	PORTD = 0b11111011;
	_delay_ms(250);
	
	PORTA = 0b10010010;					//1
	PORTC = 0b01001010;
	PORTD = 0b11110111;
	_delay_ms(250);
	
	PORTA = 0b00100101;					//2
	PORTC = 0b00010100;
	PORTD = 0b11111110;
	_delay_ms(250);
	
	PORTA = 0b00100101;					//2
	PORTC = 0b00010100;
	PORTD = 0b11111101;
	_delay_ms(250);
	
	PORTA = 0b00100101;					//2
	PORTC = 0b00010100;
	PORTD = 0b11111011;
	_delay_ms(250);
	
	PORTA = 0b00100101;					//2
	PORTC = 0b00010100;
	PORTD = 0b11110111;
	
	_delay_ms(250);
	
	PORTA = 0b10010100;					//3
	PORTC = 0b10010100;
	PORTD = 0b11111110;
	_delay_ms(250);
	
	PORTA = 0b10010100;					//3
	PORTC = 0b10010100;
	PORTD = 0b11111101;
	_delay_ms(250);
	
	PORTA = 0b10010100;					//3
	PORTC = 0b10010100;
	PORTD = 0b11111011;
	_delay_ms(250);
	
	PORTA = 0b10010100;					//3
	PORTC = 0b10010100;
	PORTD = 0b11110111;
	_delay_ms(250);
	
	PORTA = 0b10010010;					//4
	PORTC = 0b10000010;
	PORTD = 0b11111110;
	_delay_ms(250);
	
	PORTA = 0b10010010;					//4
	PORTC = 0b10000010;
	PORTD = 0b11111101;
	_delay_ms(250);
	
	PORTA = 0b10010010;					//4
	PORTC = 0b10000010;
	PORTD = 0b11111011;
	_delay_ms(250);
	
	PORTA = 0b10010010;					//4
	PORTC = 0b10000010;
	PORTD = 0b11110111;
	_delay_ms(250);
	
	PORTA = 0b01000010;					//5
	PORTC = 0b10100001;
	PORTD = 0b11111110;
	_delay_ms(250);
	
	PORTA = 0b01000010;					//5
	PORTC = 0b10100001;
	PORTD = 0b11111101;
	_delay_ms(250);
	
	PORTA = 0b01000010;					//5
	PORTC = 0b10100001;
	PORTD = 0b11111011;
	_delay_ms(250);
	
	PORTA = 0b01000010;					//5
	PORTC = 0b10100001;
	PORTD = 0b11110111;
	_delay_ms(250);
}

void pattern_2()
{
	PORTA = 0b10000001;					//1
	PORTC = 0b10001000;
	PORTD = 0b11110000;
	_delay_ms(250);
	
	PORTA = 0b00000000;					//1
	PORTC = 0b00001111;
	PORTD = 0b11110000;
	_delay_ms(250);
	
	PORTA = 0b00011000;					//1
	PORTC = 0b00010001;
	PORTD = 0b11110000;
	_delay_ms(250);
	
	PORTA = 0b00001111;					//1
	PORTC = 0b00000000;
	PORTD = 0b11110000;
	_delay_ms(250);
	
	PORTA = 0b01100000;					//2
	PORTC = 0b01100000;
	PORTD = 0b11110111;
	_delay_ms(250);
	
	PORTA = 0b01100000;					//2
	PORTC = 0b01100000;
	PORTD = 0b11111011;
	_delay_ms(250);
	
	PORTA = 0b01100000;					//2
	PORTC = 0b01100000;
	PORTD = 0b11111101;
	_delay_ms(250);
	
	PORTA = 0b01100000;					//2
	PORTC = 0b01100000;
	PORTD = 0b11111110;
	_delay_ms(250);
}

void pattern_3()
{
	PORTA = 0b00001111;					//1
	PORTC = 0b00000000;
	PORTD = 0b11111110;
	_delay_ms(250);
	
	PORTA = 0b00011000;					//1
	PORTC = 0b00010001;
	PORTD = 0b11111110;
	_delay_ms(250);
	
	PORTA = 0b00000000;					//1
	PORTC = 0b00001111;
	PORTD = 0b11111110;
	_delay_ms(250);
	
	PORTA = 0b10000001;					//1
	PORTC = 0b10001000;
	PORTD = 0b11111110;
	_delay_ms(250);
	
	PORTA = 0b00001111;					//2
	PORTC = 0b00000000;
	PORTD = 0b11111101;
	_delay_ms(250);
	
	PORTA = 0b00011000;					//2
	PORTC = 0b00010001;
	PORTD = 0b11111101;
	_delay_ms(250);
	
	PORTA = 0b00000000;					//2
	PORTC = 0b00001111;
	PORTD = 0b11111101;
	_delay_ms(250);
	
	PORTA = 0b10000001; 				//2
	PORTC = 0b10001000;
	PORTD = 0b11111101;
	_delay_ms(250);
	
	PORTA = 0b00001111;					//3
	PORTC = 0b00000000;
	PORTD = 0b11111011;
	_delay_ms(250);

	PORTA = 0b00011000;					//3
	PORTC = 0b00010001;
	PORTD = 0b11111011;
	_delay_ms(250);
	
	PORTA = 0b00000000;					//3
	PORTC = 0b00001111;
	PORTD = 0b11111011;
	_delay_ms(250);
	
	PORTA = 0b10000001;					//3
	PORTC = 0b10001000;
	PORTD = 0b11111011;
	_delay_ms(250);
	
	PORTA = 0b00001111;					//4
	PORTC = 0b00000000;
	PORTD = 0b11110111;
	_delay_ms(250);
	
	PORTA = 0b00011000;					//4
	PORTC = 0b00010001;
	PORTD = 0b11110111;
	_delay_ms(250);
	
	PORTA =0b00000000;					//4
	PORTC =0b00001111;
	PORTD = 0b11110111;
	_delay_ms(250);
	
	PORTA = 0b10000001;					//4
	PORTC = 0b10001000;
	PORTD = 0b11110111;
	_delay_ms(250);
}

void pattern_4()
{
	PORTA = 0b11111111;					//1
	PORTC = 0b11111111;
	PORTD = 0b11111110;
	_delay_ms(250);
	
	PORTA = 0b11111111;					//1
	PORTC = 0b11111111;
	PORTD = 0b11111101;
	_delay_ms(250);
	
	PORTA = 0b11111111;					//1
	PORTC = 0b11111111;
	PORTD = 0b11111011;
	_delay_ms(250);
	
	PORTA = 0b11111111;					//1
	PORTC = 0b11111111;
	PORTD = 0b11110111;
	_delay_ms(250);
	
	PORTA = 0b00001111;					//2
	PORTC = 0b00000000;
	PORTD = 0b11110000;
	_delay_ms(250);
	
	PORTA = 0b11110000;					//2
	PORTC = 0b00000000;
	PORTD = 0b11110000;
	_delay_ms(250);
	
	PORTA = 0b00000000;					//2
	PORTC = 0b11110000;
	PORTD = 0b11110000;
	_delay_ms(250);
	
	PORTA = 0b00000000;					//2
	PORTC = 0b00001111;
	PORTD = 0b11110000;
	_delay_ms(250);
	
	PORTA = 0b11111111;					//3
	PORTC = 0b11111111;
	PORTD = 0b11110111;
	_delay_ms(250);
	
	PORTA = 0b11111111;					//3
	PORTC = 0b11111111;
	PORTD = 0b11111011;
	_delay_ms(250);
	
	PORTA = 0b11111111;					//3
	PORTC = 0b11111111;
	PORTD = 0b11111101;
	_delay_ms(250);
	
	PORTA = 0b11111111;					//3
	PORTC = 0b11111111;
	PORTD = 0b11111110;
	_delay_ms(250);
	
	PORTA = 0b00000000;					//4
	PORTC = 0b00001111;
	PORTD = 0b11110000;
	_delay_ms(250);
	
	PORTA = 0b00000000;					//4
	PORTC = 0b11110000;
	PORTD = 0b11110000;
	_delay_ms(250);
	
	PORTA = 0b11110000;					//4
	PORTC = 0b00000000;
	PORTD = 0b11110000;
	_delay_ms(250);
	
	PORTA = 0b00001111;					//4
	PORTC = 0b00000000;
	PORTD = 0b11110000;
	_delay_ms(250);
}

void pattern_5()
{
	PORTA = 0b00000010;
	PORTC = 0b00000000;
	PORTD = 0b11111011;
	_delay_ms(250);
	
	PORTA |= 0b00000000;
	PORTC |= 0b01000000;
	PORTD = 0b11111010;
	_delay_ms(250);
	
	PORTA |= 0b00100010;
	PORTC |= 0b00100100;
	PORTD  = 0b11111000;
	_delay_ms(250);
	
	PORTA |= 0b00010000;
	PORTC |= 0b00000000;
	PORTD  = 0b11111010;
	_delay_ms(250);
	
	PORTA |= 0b10000000;
	PORTC |= 0b00000000;
	PORTD  = 0b11110110;
	_delay_ms(250);
	
	PORTA |= 0b10000001;
	PORTC |= 0b10000001;
	PORTD  = 0b11110101;
	_delay_ms(250);
	
	PORTA |= 0b00000001;
	PORTC |= 0b01000100;
	PORTD = 0b11111000;
	_delay_ms(250);
	
	PORTA |= 0b11010101;
	PORTC |= 0b11010100;
	PORTD = 0b11111000;
	_delay_ms(250);
}

void pattern_6()
{
	for(int i=0;i<5;i++)
	{
		PORTA = 0b01000001;			//1
		PORTC = 0b00100001;
		PORTD = 0b00000000;
		_delay_ms(100);
		
		PORTA = 0b01000010;			//1
		PORTC = 0b00100010;
		PORTD = 0b00000000;
		_delay_ms(100);
		
		PORTA = 0b00100100;			//1
		PORTC = 0b01000100;
		PORTD = 0b00000000;
		_delay_ms(100);
		
		PORTA = 0b00101000;			//1
		PORTC = 0b01001000;
		PORTD = 0b00000000;
		_delay_ms(100);
		
		PORTA = 0b00110000;			//1
		PORTC = 0b11000000;
		PORTD = 0b00000000;
		_delay_ms(100);
		
		PORTA = 0b11000000;			//1
		PORTC = 0b00110000;
		PORTD = 0b00000000;
		_delay_ms(100);
	}
	
	for (int i=0;i<5;i++)
	{
		PORTA = 0b01000001;			//2
		PORTC = 0b00100001;
		PORTD = 0b00000000;
		_delay_ms(100);
		
		PORTA = 0b11000000;			//2
		PORTC = 0b00110000;
		PORTD = 0b00000000;
		_delay_ms(100);
		
		
		PORTA = 0b00110000;			//2
		PORTC = 0b11000000;
		PORTD = 0b00000000;
		_delay_ms(100);
		
		PORTA = 0b00101000;			//2
		PORTC = 0b01001000;
		PORTD = 0b00000000;
		_delay_ms(100);
		
		PORTA = 0b00100100;			//2
		PORTC = 0b01000100;
		PORTD = 0b00000000;
		_delay_ms(100);
		
		PORTA = 0b01000010;			//2
		PORTC = 0b00100010;
		PORTD = 0b00000000;
		_delay_ms(100);
	}
	
}


void pattern_7()
{
	for(int i = 0; i<2 ; i++)
	{
		PORTA = 0b00000000;
		PORTC = 0b00100000;
		PORTD = 0b11110111;
		_delay_ms(150);
		
		PORTA = 0b01000000;
		PORTC = 0b00100000;
		PORTD = 0b11110111;
		_delay_ms(150);
		
		PORTA = 0b01000000;
		PORTC = 0b00101000;
		PORTD = 0b11110111;
		_delay_ms(150);
		
		PORTA = 0b01000000;
		PORTC = 0b00101000;
		PORTD = 0b11110101;
		_delay_ms(150);
		
		PORTA = 0b01000100;
		PORTC = 0b00101000;
		PORTD = 0b11110101;
		_delay_ms(150);
		
		PORTA = 0b01000101;
		PORTC = 0b00101000;
		PORTD = 0b11110101;
		_delay_ms(150);
		
		PORTA = 0b01000101;
		PORTC = 0b00101001;
		PORTD = 0b11110101;
		_delay_ms(150);
		
		PORTA = 0b01000101;
		PORTC = 0b01101001;
		PORTD = 0b11110101;
		_delay_ms(150);
		
		PORTA = 0b01010101;
		PORTC = 0b01101001;
		PORTD = 0b11110101;
		_delay_ms(150);
		
		PORTA = 0b01010101;
		PORTC = 0b01101001;
		PORTD = 0b11110100;
		_delay_ms(150);
		
		PORTA = 0b01010101;
		PORTC = 0b01101001;
		PORTD = 0b11110010;
		_delay_ms(150);
		
		PORTA = 0b01010111;
		PORTC = 0b01101001;
		PORTD = 0b11110010;
		_delay_ms(150);
		
		PORTA = 0b11010111;
		PORTC = 0b01101001;
		PORTD = 0b11110010;
		_delay_ms(150);
		
		PORTA = 0b11010111;
		PORTC = 0b01101011;
		PORTD = 0b11110010;
		_delay_ms(150);
		
		PORTA = 0b11010111;
		PORTC = 0b01111011;
		PORTD = 0b11110010;
		_delay_ms(150);
		
		PORTA = 0b11010111;
		PORTC = 0b11111011;
		PORTD = 0b11110010;
		_delay_ms(150);

		PORTA = 0b11011111;
		PORTC = 0b11111011;
		PORTD = 0b11110010;
		_delay_ms(150);
		
		PORTA = 0b11010111;
		PORTC = 0b11111011;
		PORTD = 0b11110000;
		_delay_ms(150);
		
		PORTA = 0b11111111;
		PORTC = 0b11111111;
		PORTD = 0b11110000;
		_delay_ms(150);
		
		PORTA = 0b11010111;
		PORTC = 0b11111011;
		PORTD = 0b11110000;
		_delay_ms(150);
		
		PORTA = 0b11011111;
		PORTC = 0b11111011;
		PORTD = 0b11110010;
		_delay_ms(150);
		
		PORTA = 0b11010111;
		PORTC = 0b11111011;
		PORTD = 0b11110010;
		_delay_ms(150);
		
		PORTA = 0b11010111;
		PORTC = 0b01111011;
		PORTD = 0b11110010;
		_delay_ms(150);
		
		PORTA = 0b11010111;
		PORTC = 0b01101011;
		PORTD = 0b11110010;
		_delay_ms(150);
		
		PORTA = 0b11010111;
		PORTC = 0b01101001;
		PORTD = 0b11110010;
		_delay_ms(150);
		
		PORTA = 0b01010111;
		PORTC = 0b01101001;
		PORTD = 0b11110010;
		_delay_ms(150);
		
		PORTA = 0b01010101;
		PORTC = 0b01101001;
		PORTD = 0b11110010;
		_delay_ms(150);
		
		PORTA = 0b01010101;
		PORTC = 0b01101001;
		PORTD = 0b11110100;
		_delay_ms(150);
		
		PORTA = 0b01010101;
		PORTC = 0b01101001;
		PORTD = 0b11110101;
		_delay_ms(150);
		
		PORTA = 0b01000101;
		PORTC = 0b01101001;
		PORTD = 0b11110101;
		_delay_ms(150);
		
		PORTA = 0b01000101;
		PORTC = 0b00101001;
		PORTD = 0b11110101;
		_delay_ms(150);
		
		PORTA = 0b01000101;
		PORTC = 0b00101000;
		PORTD = 0b11110101;
		_delay_ms(150);
		
		PORTA = 0b01000100;
		PORTC = 0b00101000;
		PORTD = 0b11110101;
		_delay_ms(150);
		
		PORTA = 0b01000000;
		PORTC = 0b00101000;
		PORTD = 0b11110101;
		_delay_ms(150);
		
		PORTA = 0b01000000;
		PORTC = 0b00101000;
		PORTD = 0b11110111;
		_delay_ms(150);
		
		PORTA = 0b01000000;
		PORTC = 0b00100000;
		PORTD = 0b11110111;
		_delay_ms(150);
		
		PORTA = 0b00000000;
		PORTC = 0b00100000;
		PORTD = 0b11110111;
		_delay_ms(150);
	}
}

void pattern_8()
{
	for(int i=0;i<5;i++)
	{
		PORTA = 0b11100111;
		PORTC = 0b11100000;
		PORTD = 0b11110001;
		_delay_ms(100);
		
		PORTA = 0b01111110;
		PORTC = 0b01110000;
		PORTD = 0b11110001;
		_delay_ms(100);
		
		PORTA = 0b01110000;
		PORTC = 0b01110111;
		PORTD = 0b11110001;
		_delay_ms(100);
		
		PORTA = 0b11100000;
		PORTC = 0b11101110;
		PORTD = 0b11110001;
		_delay_ms(100);
		
		PORTA = 0b11100111;
		PORTC = 0b11100000;
		PORTD = 0b11111000;
		_delay_ms(100);
		
		PORTA = 0b01111110;
		PORTC = 0b01110000;
		PORTD = 0b11111000;
		_delay_ms(100);
		
		PORTA = 0b01110000;
		PORTC = 0b01110111;
		PORTD = 0b11111000;
		_delay_ms(100);
		
		PORTA = 0b11100000;
		PORTC = 0b11101110;
		PORTD = 0b11111000;
		_delay_ms(100);
		
		PORTA = 0b01110000;
		PORTC = 0b01110111;
		PORTD = 0b11111000;
		_delay_ms(100);
		
		PORTA = 0b01111110;
		PORTC = 0b01110000;
		PORTD = 0b11111000;
		_delay_ms(100);
		
		PORTA = 0b11100111;
		PORTC = 0b11100000;
		PORTD = 0b11111000;
		_delay_ms(100);

		PORTA = 0b11100000;
		PORTC = 0b11101110;
		PORTD = 0b11110001;
		_delay_ms(100);
		
		PORTA = 0b01110000;
		PORTC = 0b01110111;
		PORTD = 0b11110001;
		_delay_ms(100);
		
		PORTA = 0b01111110;
		PORTC = 0b01110000;
		PORTD = 0b11110001;
		_delay_ms(100);
	}
}

void pattern_9()
{
	for(int j=0 ; j<5 ; j++)
	{
		for(int i=0;i<5;i++)			//1
		{
			PORTA = 0b10000001; 
			PORTC = 0b10001000;
			PORTD = 0b11110111;
			_delay_ms(5);
			PORTA = 0b01000010;
			PORTC = 0b01000100;
			PORTD = 0b11111011;
			_delay_ms(5);
			PORTA = 0b00100100;
			PORTC = 0b00100010;
			PORTD = 0b11111101;
			_delay_ms(5);
			PORTA = 0b00011000;
			PORTC = 0b00010001;
			PORTD = 0b11111110;
			_delay_ms(5);
		}
	
		for(int i=0;i<5;i++)		//2
		{
			PORTA = 0b01000010;
			PORTC = 0b01000100;
			PORTD = 0b11110111;
			_delay_ms(5);
			PORTA = 0b01000010;
			PORTC = 0b01000100;
			PORTD = 0b11111011;
			_delay_ms(5);
			PORTA = 0b00100100;
			PORTC = 0b00100010;
			PORTD = 0b11111101;
			_delay_ms(5);
			PORTA = 0b00100100;
			PORTC = 0b00100010;
			PORTD = 0b11111110;
			_delay_ms(5);
		}
	
		for(int i=0;i<5;i++)			//3
		{
			PORTA = 0b00100100;
			PORTC = 0b00100010;
			PORTD = 0b11110111;
			_delay_ms(5);
			PORTA = 0b00100100;
			PORTC = 0b00100010;
			PORTD = 0b11111011;
			_delay_ms(5);
			PORTA = 0b01000010;
			PORTC = 0b01000100;
			PORTD = 0b11111101;
			_delay_ms(5);
			PORTA = 0b01000010;
			PORTC = 0b01000100;
			PORTD = 0b11111110;
			_delay_ms(5);
		}
	
		for(int i=0;i<5;i++)		//4
		{
			PORTA = 0b00011000;
			PORTC = 0b00010001;
			PORTD = 0b11110111;
			_delay_ms(5);
			PORTA = 0b00100100;
			PORTC = 0b00100010;
			PORTD = 0b11111011;
			_delay_ms(5);
			PORTA = 0b01000010;
			PORTC = 0b01000100;
			PORTD = 0b11111101;
			_delay_ms(5);
			PORTA = 0b10000001;
			PORTC = 0b10001000;
			PORTD = 0b11111110;
			_delay_ms(5);
		}
	
		for(int i=0;i<5;i++)			//5
		{
			PORTA = 0b00111100;
			PORTC = 0b00110011;
			PORTD = 0b11111011;
			_delay_ms(5);
			PORTA = 0b11000011;
			PORTC = 0b11001100;
			PORTD = 0b11111101;
			_delay_ms(5);
		}
	
		for(int i=0;i<5;i++)			//6
		{	
			PORTA = 0b11000011;			
			PORTC = 0b11001100;
			PORTD = 0b11111011;
			_delay_ms(5);
			PORTA = 0b00111100;
			PORTC = 0b00110011;
			PORTD = 0b11111101;
			_delay_ms(5);
		}
	}
	
	for(int j=0 ; j<5 ; j++)
	{
		for(int i=0;i<5;i++)			//6
		{
			PORTA = 0b11000011;
			PORTC = 0b11001100;
			PORTD = 0b11111011;
			_delay_ms(5);
			PORTA = 0b00111100;
			PORTC = 0b00110011;
			PORTD = 0b11111101;
			_delay_ms(5);
		}
		
		for(int i=0;i<5;i++)			//5
		{
			PORTA = 0b00111100;
			PORTC = 0b00110011;
			PORTD = 0b11111011;
			_delay_ms(5);
			PORTA = 0b11000011;
			PORTC = 0b11001100;
			PORTD = 0b11111101;
			_delay_ms(5);
		}
		
		for(int i=0;i<5;i++)		//4
		{
			PORTA = 0b00011000;
			PORTC = 0b00010001;
			PORTD = 0b11110111;
			_delay_ms(5);
			PORTA = 0b00100100;
			PORTC = 0b00100010;
			PORTD = 0b11111011;
			_delay_ms(5);
			PORTA = 0b01000010;
			PORTC = 0b01000100;
			PORTD = 0b11111101;
			_delay_ms(5);
			PORTA = 0b10000001;
			PORTC = 0b10001000;
			PORTD = 0b11111110;
			_delay_ms(5);
		}
		
		for(int i=0;i<5;i++)			//3
		{
			PORTA = 0b00100100;
			PORTC = 0b00100010;
			PORTD = 0b11110111;
			_delay_ms(5);
			PORTA = 0b00100100;
			PORTC = 0b00100010;
			PORTD = 0b11111011;
			_delay_ms(5);
			PORTA = 0b01000010;
			PORTC = 0b01000100;
			PORTD = 0b11111101;
			_delay_ms(5);
			PORTA = 0b01000010;
			PORTC = 0b01000100;
			PORTD = 0b11111110;
			_delay_ms(5);
		}
		
		for(int i=0;i<5;i++)		//2
		{
			PORTA = 0b01000010;
			PORTC = 0b01000100;
			PORTD = 0b11110111;
			_delay_ms(5);
			PORTA = 0b01000010;
			PORTC = 0b01000100;
			PORTD = 0b11111011;
			_delay_ms(5);
			PORTA = 0b00100100;
			PORTC = 0b00100010;
			PORTD = 0b11111101;
			_delay_ms(5);
			PORTA = 0b00100100;
			PORTC = 0b00100010;
			PORTD = 0b11111110;
			_delay_ms(5);
		}
		
		for(int i=0;i<5;i++)			//1
		{
			PORTA = 0b10000001;
			PORTC = 0b10001000;
			PORTD = 0b11110111;
			_delay_ms(5);
			PORTA = 0b01000010;
			PORTC = 0b01000100;
			PORTD = 0b11111011;
			_delay_ms(5);
			PORTA = 0b00100100;
			PORTC = 0b00100010;
			PORTD = 0b11111101;
			_delay_ms(5);
			PORTA = 0b00011000;
			PORTC = 0b00010001;
			PORTD = 0b11111110;
			_delay_ms(5);
		}
	}
}