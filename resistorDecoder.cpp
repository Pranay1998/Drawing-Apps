#include <iostream>

using namespace std;

int main () {
	
char color [4];
cout << "Enter the four resistor color codes: ";
cin >> color [0] >> color [1] >> color [2] >> color [3];

float Band [4];

switch (color [0]) {

 
 case   'k' : Band [0] = 0; break;
 case   'n' : Band [0] = 1; break;
 case  'R' : Band [0] = 2; break;
 case  'O' : Band [0] = 3; break;
 case   'Y' : Band [0] = 4; break;
 case   'G' : Band [0] = 5; break;
 case   'B' : Band [0] = 6; break;
 case   'V' : Band [0] = 7; break;
 case   'y' : Band [0] = 8; break;
 case   'W' : Band [0] = 9; break;
default : Band [0] = 787; break;

}

switch (color [1]) {

 
 case   'k' : Band [1] = 0; break;
 case   'n' : Band [1] = 1; break;
 case   'R' : Band [1] = 2; break;
 case   'O' : Band [1] = 3; break;
 case   'Y' : Band [1] = 4; break;
 case   'G' : Band [1] = 5; break;
 case   'B' : Band [1] = 6; break;
 case   'V' : Band [1] = 7; break;
 case   'y' : Band [1] = 8; break;
 case   'W' : Band [1] = 9; break;
 default : Band [1] = 787; break;


}



switch (color [2]) {

 
 case   'k' : Band [2] = 1; break;
 case   'n' : Band [2] = 10; break;
 case   'R' : Band [2] = 100; break;
 case   'O' : Band [2] = 1000; break;
 case   'Y' : Band [2] = 10000; break;
 case   'G' : Band [2] = 100000; break;
 case   'B' : Band [2] = 1000000; break;
 case   'V' : Band [2] = 10000000; break;
 case   'y' : Band [2] = 100000000; break;
 case   'W' : Band [2] = 1000000000; break;
 case   'd' : Band [2] = 0.1; break;
 case   'S' : Band [2] = 0.01; break;
 default : Band [2] = 787; break;

}

float resistance = (((10 * Band [0]) + Band [1]) * Band [2]); 
  
 switch (color [3]) {

 case   'n' : Band [3] = 1; break;
 case   'R' : Band [3] = 2; break;
 case   'G' : Band [3] = 0.5; break;
 case   'B' : Band [3] = 0.25; break;
 case   'V' : Band [3] = 0.1; break;
 case   'y' : Band [3] = 0.05; break;
 case   'd' : Band [3] = 5; break;
 case   'S' : Band [3] = 10; break;
 case   'N' : Band [3] = 20; break;
default : Band [3] = 787; break;
	 
 } 

if (Band[0] == 787 || Band[1] == 787 || Band[2] == 787 || Band[3] == 787){
	cerr << "Error: Invalid color code entered!";
return 0;}

else{ 
cout <<  "Resistance is " << resistance << " ohms (+/-" << (resistance * 0.01 * Band [3]) << " ohms tolerance)" ;	
cout << "Resistance is " << resistance << " ohms (+/-" << (resistance * (Band [3]*0.01)) << " ohms tolerence)";

}
}