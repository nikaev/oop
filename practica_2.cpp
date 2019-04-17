#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main()
 {
	float a= 4.8 , b=-7.9, n, m;
	if (a >= b) { cout << "n=" << powf((a-b), 1.0/3 ) << endl;}

	else { cout << "n=" << powf(a,2)+((a-b)/sin(a*b)) << endl;}

 	if (n < b) { cout << "m=" << ((n+a)/-b)+(sqrt(powf(sin(a),2) - cos(n) )) << endl;}
	else if (n == b) { cout << "m=" << powf(b,2)+ tan(n*a) << endl;}
	else { cout << "m=" <<  powf(b,3)+ n*powf(a,2) << endl;}

	return 0;
}
