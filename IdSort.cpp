#include <iostream>

using namespace std;

int main () {
	
int  studentId[5];

cout <<"Enter 5 ID: " ;

for (int i=0;i<5;i++){
cin >>  studentId[i] ;
if (!cin.good() ||  studentId[i] < 10000000 ||  studentId[i] > 99999999 || studentId[0] == 0 ){cerr << "Error: Invalid input.";
return 0;
}
	}

int numberOfSwitch = 0;

while (studentId[0]<studentId[1] || studentId[1]<studentId[2]||studentId[2]<studentId[3]||studentId[3]<studentId[4])	{
	
for (int i = 0; i <4; i++ ){

if (studentId[i+1] > studentId[i])	{
	int k ;
	k = studentId [i];
	studentId [i] = studentId [i+1];
studentId [i+1] = k;
numberOfSwitch = numberOfSwitch + 1;
}			
}		
}
cout << "Sorted ID: ";
for (int h=0; h <5; h++){cout << studentId[h] << " ";}

cout << endl;

cout << "Swap count: " << numberOfSwitch << endl;

int newInput;
cout << "Enter another input: ";
cin >>	newInput;

for (int q = 0 ; q<5; q++ ){
if (newInput == studentId[q]){cerr <<"Error: This ID exists.";
return 0;}      
    }

if (newInput > studentId[0]) {cout << "The value " << newInput << " is in position 0";
 return 0;}
if (newInput < studentId[0] && newInput > studentId[1]) {cout << "The value " << newInput << " is in position 1";
 return 0;}
if (newInput < studentId[1] && newInput > studentId[2]) {cout << "The value " << newInput << " is in position 2";
 }
if (newInput < studentId[2] && newInput > studentId[3]) {cout << "The value " << newInput << " is in position 3";
 return 0;}
if (newInput < studentId[3] && newInput > studentId[4]) {cout << "The value " << newInput << " is in position 4";
 return 0;}
if (newInput < studentId[4]) {cout << "The value " << newInput << " is in position 5";
 return 0;}

}