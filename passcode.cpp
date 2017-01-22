


#include <iostream>

using namespace std;

int main() {

char A,B,C ;

cout <<"Enter three characters consecutively without space: ";
cin >> A >> B >> C;
int passcode = 1000000*A+1000*B+C;
cout <<"The corresponding passcode is : " << passcode << endl;

	

    return 0;
}
