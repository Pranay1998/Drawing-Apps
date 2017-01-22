#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
	
double A,B,C;

cout << "Enter the offer price of the item: ";
cin >> A;

cout << "Discount Rate (%): " ;
cin >> B;

cout << "Tax rate (%): " ;
cin >> C;
double K,J;
K = A - 0.01 * A * B;
J = K + 0.01 * K * C;

cout << "The net price of the item is: " << setprecision(2) << fixed << J << endl;


return 0;




}