#include <iostream>
#include <math.h>

using namespace std;

double squareRT(double x);

int main(){
	
	unsigned int a1,b1,c1;

// QUESTION #1
	a1 = 2;
	b1 = 2 *pow(2, 32);
	c1 = a1 + b1;
	cout << "1. Show that for unsinged int a, b and a>0, b>0 we can get"
	 << " a+b < a." << endl;
	cout << "When a = " << a1 << endl;
	cout << "b = " << b1 << endl;
	cout << "Then a+b = " << c1 << endl;
	cout << "This hows that a+b < 0." << endl << endl;

// QUESTION #2
	int a2,b2,c2;
	a2 = 2;
	b2 = 2*pow(2,31);
	c2 = a2 + b2;
	cout <<"2. Show for int a, b and a>0, b>0, we can get a+b < 0." << endl;
	cout << "When a = " << a2 << endl;
	cout << "b = " << b2 << endl;
	cout << "Then a+b = " << c2 << endl;
	cout << "This hows that a+b < a." << endl << endl;

// QUESTION #3
	int a3,b3,c3;
	a3 = -2;
	b3 = -2*pow(2,31);
	c3 = a3 + b3;
	cout <<"3. Show for int a, b and a<0, b<0, we can get a+b > 0." << endl;
	cout << "When a = " << a3 << endl;
	cout << "b = " << b3 << endl;
	cout << "Then a+b = " << c3 << endl;
	cout << "This hows that a+b > 0." << endl << endl;

// QUESTION #4
	double x = .00000000000000000000000000000000000000001;
	double x1 = 1.;
	double c4 = x1 + x;
	cout <<"4. Show that for double x, and x>0 we can get 1. + x == 1." << endl;
	cout << "When x = " << x << endl;
	cout << "x + 1. = " << c4 << endl << endl;

// QUESTION #5
	int a5,b5,c5,d5, d5a;
	a5 = 2*pow(2, 50);
	b5 = 2*pow(2,50);
	c5 = 2*pow(2,32);
	d5 = (a5+b5)+c5;
	d5a = (c5+b5)+a5;
	cout << "ERROROROROROR 5. Show for int a, b and a<0, b<0, we can get a+b > 0." << endl;
	cout << "When a = " << a5 << endl;
	cout << "b = " << b5 << endl;
	cout << "c = " << c5 << endl;
	cout << "Then (a+b)+c = " << d5 <<" and (c+b)+a = " << d5a << endl;
	cout << "This shows that sometimes (a+b)+c != (c+b)+a." << endl << endl;

// QUESTION #6
	int a6,b6,c6;
	a6 = pow(-2.,3);
	b6 = pow(-2.,3.0);
	c6 = pow(-2.,3.00000000001);
	cout << "6. Show the results of the following power function:"
	<< " pow(-2., 3),  pow(-2., 3.0) , pow(-2., 3.00000000001)" << endl;
	cout << "Observe, pow(-2., 3) = " << a6 << endl;
	cout << "pow(-2., 3.0) = " << b6 << endl;
	cout << "pow(-2., 3.00000000001) = " << c6 << endl << endl;

// QUESTION #7
	double a7 = 1.;
	float b7 = 1.;
	int c7 = 1;
	char d7 = '1';
	string e7 = "1";
	cout << "7. Show the memory size of the following constants: "
	<< " 1. , 1.F, 1 , '1' ,  and \"1\"" << endl;
	cout << "Mem Size 1. = " << sizeof(a7) << endl;
	cout << "Mem Size 1.F = " << sizeof(b7) << endl;
	cout << "Mem Size 1 = " << sizeof(c7) << endl;
	cout << "Mem Size '1' = " << sizeof(d7) << endl;
	cout << "Mem Size \"1\" = " << sizeof(e7) << endl << endl;

// QUESTION #8
	
	cout << "ERRORORORORORORO8.  Display 1./3. using 20 digits and show the "
	<< "correct and incorrect digits." << endl;
	cout << "1./3. = " << 1./3. << endl << endl;
	
// QUESTION #9
	int count = 32;
	char temp;
	for(int i = 0; i <= 31; i++)
	{
			temp = count;
			cout << count << "   " << temp << "          "<< count+32 << "   ";
			temp = count+32;
			cout << temp << "          " << count+64 << "   ";
			temp = count+64;
			cout << temp <<  endl;

			count++;
	}
	cout << endl;

// QUESTION #10
	cout <<"10. Take the sqrt(2), without sqrt() function." << endl;
	cout << "The sqrt(2) = " << squareRT(2.) << endl;

	return 0;
}


double squareRT(double x) {
//     if (x <= 0)
//         return 0;       // if negative number throw an exception?
//     int exp = 0;
//     x = frexp(x, &exp); // extract binary exponent from x
//     if (exp & 1) {      // we want exponent to be even
//         exp--;
//         x *= 2;
//     }
//     double y = (1+x)/2; // first approximation
//     double z = 0;
//     while (y != z) {    // yes, we CAN compare doubles here!
//         z = y;
//         y = (y + x/y) / 2;
//     }
//     return ldexp(y, exp/2); // multiply answer by 2^(exp/2)
// }
return pow(x, .5);
}