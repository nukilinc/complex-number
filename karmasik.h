/*
 * class'lari tanimliyorum
 */
 
 class Complex
 { 
	 public:
	
	 Complex operator + ( Complex c2 );        // iki karmasik sayiyi toplar
	 Complex operator + ( int c1 );            // Bir karmaşık sayı ile bir tamsayıyı toplar
	 
	 Complex operator - ( Complex c2 );        // İki karmaşık sayıyı çıkarır
	 Complex operator - ( float c1 );          // Bir karmaşık sayı ile bir reel sayıyı çıkarir
	 Complex operator - ( );                   // Bir karmaşık sayıyı -1 ile çarpar
	 
	 Complex operator * ( Complex c2 );        // İki karmaşık sayıyı çarpar
	 Complex operator * ( float c1 );          // Bir karmaşık sayı ile bir reel sayıyı çarpar
	 
	 Complex operator != ( Complex c2 );  // İki karmaşık sayının eşitliğini kontrol eder
	 Complex operator == ( Complex c2 );  // İki karmaşık sayının eşitliğini kontrol eder
	 
	 Complex operator < ( Complex c2 );        // İki karmaşık sayıyı karşılaştırir
	 Complex operator > ( Complex c2 );
	 Complex operator <= ( Complex c2 );
	 Complex operator >= ( Complex c2 );
	 
	 Complex operator = ( Complex c2 );        // atama operatorleri
	 Complex operator += ( Complex c2 );
	 Complex operator -= ( Complex c2 );
	 Complex operator /= ( Complex c2 );
	 
	 Complex operator ! ( );                   // Bir karmaşık sayının eşleniğini (conjugate) verir
	 
	 Complex operator >> ( Complex c2 );                  // Bir karmaşık sayıyı okur
	 Complex operator << ( Complex c2 );                  // Bir karmaşık sayıyı yazdırir
	 
	 Complex operator ++ ( );                  // Karmaşık sayının gerçel kısmını değiştirir
	 Complex operator -- ( );
	 
	 Complex operator ^ ( Complex c2 );                   // Bir karmaşık sayının üssünü alir
	 
	 Complex( int r );
	 Complex( int r, int i ); 
	 	 
	 private:
	 
	 int real;
	 int imag; 
 }; 
 
	 
	 
	 
	  
	 
 
 
