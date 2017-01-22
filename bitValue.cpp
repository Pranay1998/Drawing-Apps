#include <iostream>
#include <iomanip>

using namespace std;

int main() {

int A;
int B;

cout << "Enter two Numbers Seperated by a Space :" << endl;

cin >> A >> B;

int C;
C = A >> B;

int D = 1;
int E;

E = C & D;

cout << "The value of Bit " << B << " is " << E << endl ;

return 0;
}