#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
int num;
cout << "Enter number of Rotations: ";
cin >> num;

if(!cin.good() || num <= 0) {cerr << "Invalid Input. Program Terminated.";
return -1;
}

char word[] = "!ECE150!";

int m;
for (; num != 0 ; num--){
for (int x  = 1;  x < 62; x++){
	
for (int shit = 0; shit < 60; shit++) cout << "=" ;

cout << endl;

m = 0;
	
if (x<=53) {for (int dog = x-1; dog != 0; dog--  ) cout << " ";	
	
	

	
 cout <<"!ECE150!";	
}


else  {

for (int kjk = x-54; kjk != -1 ; kjk--)
cout << word [7 - kjk];

for (int mjk = 52; mjk!=0 ; mjk--)
	cout << " ";
	
for (int kys = 0 ; kys < 61 - x ; kys++)
cout << word [kys];	
	
	
}	
	
	
	
	
cout << endl;	


for (int shit = 0; shit < 60; shit++) cout << "=" ;

cout << endl;


for (int tni = 0; tni < 10000000 ; tni++) {tni = (tni + tni)/2; }

if (x!=61)   system("cls");
}
}
return 0;

}