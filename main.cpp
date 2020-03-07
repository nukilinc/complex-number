/*
 * karmasik sayi
 * odev3
 * Nursena KILINÇ
 */
 
 #include <iostream>
 #include <sstream>
 #include <string>
 #include "karmasik.h"  

 using namespace std;
 
 double uzaklık( r, i )
 {
	 Complex temp;
	 temp.real = real - c2.real;
	 temp.imag = imag - c2.imag;
	 
	 return temp;
 }
 
 double ortalama( r, i )
 {
	 double ortReal, ortİmag;
	 double ort;
	 
	 ortReal = ( real + c2.real ) / 2;
	 ortİmag = ( imag + c2.imag ) / 2;
	 
	 return ort;
 }	 
 
 int main()
 {
	 {
	 vector < int > realKarmasik;
	 vector < int > imagKarmasik;
	 
	 int Real = 0;
	 int Imag = 0;
	 
	 while( cin >> Real ){
		 realKarmasik.push_back( Real );
	 }
	 while( cin >> Imag ){
		 imagKarmasik.push_back( Imag );
	 }
	 
	 Complex k1( r, i );
	 cout << "+" <<  Complex operator + ( Complex c2 ) << Complex operator + ( int c1 ) << endl;
	 cout << "-" <<  Complex operator - ( Complex c2 ) << Complex operator - ( float c1 ) << Complex operator - ( ) << endl;
	 cout << "*" <<  Complex operator * ( Complex c2 ) << Complex operator * ( float c1 ) << endl;
	 cout << "!=" <<  Complex operator != ( Complex c2 ) << endl;
	 cout << "==" <<  Complex operator == ( Complex c2 ) << endl;
	 cout << ">" <<  Complex operator > ( Complex c2 ) << endl;
	 cout << "<" <<  Complex operator < ( Complex c2 ) << endl;
	 cout << ">=" <<  Complex operator >= ( Complex c2 ) << endl;
	 cout << "<=" <<  Complex operator <= ( Complex c2 ) << endl;
	 cout << "=" <<  Complex operator = ( Complex c2 ) << endl;
	 cout << "+=" <<  Complex operator += ( Complex c2 ) << endl;
	 cout << "-=" <<  Complex operator -= ( Complex c2 ) << endl;
	 cout << "/=" <<  Complex operator /= ( Complex c2 ) << endl;
	 cout << "!" <<  Complex operator ! ( ) << endl;
	 cout << "<<" <<  Complex operator << ( Complex c2 ) << endl;
	 cout << ">>" <<  Complex operator >> ( Complex c2 ) << endl;
	 cout << "++" <<  Complex operator ++ ( ) << endl;
	 cout << "--" <<  Complex operator -- ( ) << endl;
	 cour << "^" << Complex operator ^ ( Complex c2 ) << endl;
	 k1.ortalama( r, i );
	 k1.uzaklık( r, i );
	 
	 Complex k2( r ); 
	 cout << "+" <<  Complex operator + ( Complex c2 ) << Complex operator + ( int c1 ) << endl;
	 cout << "-" <<  Complex operator - ( Complex c2 ) << Complex operator - ( float c1 ) << Complex operator - ( ) << endl;
	 cout << "*" <<  Complex operator * ( Complex c2 ) << Complex operator * ( float c1 ) << endl;
	 cout << "!=" <<  Complex operator != ( Complex c2 ) << endl;
	 cout << "==" <<  Complex operator == ( Complex c2 ) << endl;
	 cout << ">" <<  Complex operator > ( Complex c2 ) << endl;
	 cout << "<" <<  Complex operator < ( Complex c2 ) << endl;
	 cout << ">=" <<  Complex operator >= ( Complex c2 ) << endl;
	 cout << "<=" <<  Complex operator <= ( Complex c2 ) << endl;
	 cout << "=" <<  Complex operator = ( Complex c2 ) << endl;
	 cout << "+=" <<  Complex operator += ( Complex c2 ) << endl;
	 cout << "-=" <<  Complex operator -= ( Complex c2 ) << endl;
	 cout << "/=" <<  Complex operator /= ( Complex c2 ) << endl;
	 cout << "!" <<  Complex operator ! ( ) << endl;
	 cout << "<<" <<  Complex operator << ( Complex c2 ) << endl;
	 cout << ">>" <<  Complex operator >> ( Complex c2 ) << endl;
	 cout << "++" <<  Complex operator ++ ( ) << endl;
	 cout << "--" <<  Complex operator -- ( ) << endl;
	 cour << "^" << Complex operator ^ ( Complex c2 ) << endl;
	 k2.ortalama( r, i );
	 k2.uzaklık( r, i );
	 
	 return 0;
	 
}
