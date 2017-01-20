#include <iostream>

using namespace std;

int main () {
	
int base, height;

cout << "Please enter an odd size for the base of the triangle: ";

cin >> 	base ;

bool valid2 = cin.good();
if (valid2){
char next2 = cin.get(); 
bool endOfInt2 = (next2 == ' ') || (next2 == '\n') ;
     
	 
     if (!(endOfInt2)) {
		  cerr << "Error: Invalid Input. Program Terminated."; 
		 return 0;	}
	 if (base<0  || base % 2 == 0) 	 {
		 cerr << "Error: Invalid Input. Program Terminated."; 
		 return 0;
		 
	 }
	 
 
}
else {
	cerr << "Error: Invalid Input. Program Terminated";
	return 0;
}


height = base / 2 + 1;
	
for (int temp_height = 1 ; temp_height <= height ; temp_height++) {
	
	for (int space = temp_height - 1; space != 0 ; space--  ){
	cout << " ";
	}
	for (int stars = base - 2*(temp_height-1) ; stars >= 1 ; stars--){
	cout << "*"; }
	
	cout << endl;
}	
	
for (int temp_height = 2 ; temp_height <= height ; temp_height++) {
	
	for (int space =  base/2 - 1*(temp_height-1)  ; space >= 1 ; space--){
		
		cout << " ";
	}
	for (int stars = 1 + 2*(temp_height - 1) ; stars != 0  ; stars-- ){
		cout << "*";
	}
cout << endl;		
	       	
}
	
	
	
	
	
	return 0;
	
	
	
}