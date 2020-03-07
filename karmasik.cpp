/*
 * fonksiyonlari olusturuyorum
 */
 
 #include <iostream>
 #include "karmasik.h"
 
 using namespace std;
 
 Complex :: Complex( ){}
 
 Complex :: Complex( int r, int i )
 {
	 reel = r;
	 imag = i;
 }

Complex :: Complex operator + ( Complex c2 )
{
	Complex temp;
	temp.real = real + c2.real;
	temp.imag = imag + c2.imag;
	
	return temp;
}

Complex ::  Complex operator + ( int c1 )
{
	Complex temp;
	c1.imag = 0;
	temp.real = real + c1.real;
	temp.imag = imag + c1.imag;
	
	return temp;
}

Complex :: Complex operator - ( Complex c2 )
{
	Complex temp;
	temp.real = real - c2.real;
	temp.imag = imag - c2.imag;
	
	return temp;
}

Complex :: Complex operator - ( float c1 )
{
	Complex temp;
	c1.imag = 0;
	temp.real = real + c1.real;
	temp.imag = imag + c1.imag;
	
	return temp;
}

Complex :: Complex operator - ( )
{
	int sayi = -1 ;
	Complex temp;
	temp.real = real * ( -1 );
	temp.imag = imag * ( -1 );
	
	return temp;
}

Complex :: Complex operator * ( Complex c2 )
{
	Complex temp;
	temp.real = real * c2.real;
	temp.imag = imag * c2.imag;
	
	return temp;
}

Complex :: Complex operator ==( Complex c2 )
{
	Complex temp;
	
	if( ( temp.real == c2.real ) && ( temp.imag == c2.imag ) ){
		bool durum = true;
		return durum;
	}
	else{
		bool durum = false;
		return durum;
	}
}

Complex :: Complex operator !=( Complex c2 )
{
	Complex temp;
	if( ( temp.real == c2.real ) && ( temp.imag == c2.imag ) ){
		bool durum = false;
		return durum;
	}
	else{
		bool durum = true;
		return durum;
	}
	return 0;
}

Complex :: Complex operator < ( Complex c2 )
{
	Complex temp;
	if( temp.real < c2.real ){
		bool durum = true;
		return durum;
	}
	else{
		bool durum = false;
		return false;
	}
	return 0;
}

Complex :: Complex operator > ( Complex c2 )
{
	Complex temp;
	if( temp.real > c2.real ){
		bool durum = true;
		return durum;
	}
	else{
		bool durum = false;
		return false;
	}
	return 0;
}
	
Complex :: Complex operator <= ( Complex c2 )
{
	Complex temp;
	if( temp.real <= c2.real ){
		bool durum = true;
		return durum;
	}
	else{
		bool durum = false;
		return false;
	}
	return 0;
}

Complex :: Complex operator >= ( Complex c2 )
{
	Complex temp;
	if( temp.real >= c2.real ){
		bool durum = true;
		return durum;
	}
	else{
		bool durum = false;
		return false;
	}
	return 0;
}
	 
Complex :: Complex operator = ( Complex c2 )
{ 
	Complex temp;
	if( ( temp.real == c2.real ) && ( temp.imag == c2.imag ) ){
		temp == c2;
	}
	return 0;
} 
      
Complex :: Complex operator += ( Complex c2 )
{
	Complex temp;
	Complex ans;
	
	ans.real = temp.real + c2.real;
	ans.imag = temp.imag + c2.imag;
	
	return ans;
}

Complex :: Complex operator -= ( Complex c2 )
{
	Complex temp;
	Complex ans;
	
	ans.real = temp.real - c2.real;
	ans.imag = temp.imag - c2.imag;
	
	return ans;
}

Complex :: Complex operator /= ( Complex c2 )
{
	Complex temp;
	Complex ans;
	
	ans.real = temp.real / c2.real;
	ans.imag = temp.imag / c2.imag;
	
	return ans;
}
	 
Complex :: Complex operator ! ( ) 
{
	Complex temp;
	Complex ans;
	
	ans.real = temp.real;
	ans.imag = temp.imag * ( -1 );
	
	return ans;
}                  
	 
Complex :: Complex operator >> ( Complex c2 )
{
	cin >> c2.real >> c2.imag;
	
	return 0;
}
	 
Complex :: Complex operator << ( Complex c2 )
{
	cout << c2.real << c2.imag << "i" << endl;
	
	return 0;
}  
                
Complex :: Complex operator ++ ( )
{
	Complex temp;
	Complex ans;
	
	ans.real = temp.real++;
	ans.imag = temp.imag;
	
	return ans;
}
	
Complex :: Complex operator -- ( )
{
	Complex temp;
	Complex ans;
	
	ans.real = temp.real--;
	ans.imag = temp.imag;
	
	return ans;
}
 
Complex :: Complex operator ^ ( Complex c2, int us )
{
	Complex temp;
	if( us == 0 ){
		return c2;
	}
	else if( us == 1 ){
		return c2;
	}
	else if( us == 2 ){
		c2.real = c2.real * c2.real;
		c2.imag = c2.imag * ( 1 );
		return c2;
	}
	else if( us == 3 ){
		c2.real = c2.real * c2.real * c2.real;
		c2.imag = c2.imag * ( -1 );
		return c2;
	}
	else{
		c2.real = c2.real * c2.real * c2.real * c2.real; 
		c2.imag = c2.imag;
		return c2;
	}
	return 0;
}

Complex :: Complex( int r )
{ 
	if( real <= 0 ){
		exit( 1 );
	}
	real = r;
	imag = 1;
}

Complex :: Complex( int r, int i )
{
	if( ( real <= 0 ) && ( imag <= 0 ) ){
		exit( 1 );
	}
	real = r;
	imag = i;
}
		
		 
	


		
	
	



	
	
	
	
