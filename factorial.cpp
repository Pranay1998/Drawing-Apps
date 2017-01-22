#include <iostream>
#include <climits>
#include <stdint.h>


using namespace std;

int main () {
	
uint64_t number1;

cout << "Enter a number: ";
cin >> number1;
bool valid1 = cin.good();






///////////////////////////////////////////________________Error Checking__________________//////////////////////////////////////////////////////////////////////////////////////////////
	                                                                                                                                                                            
if (valid1){
char next1 = cin.get(); 
bool endOfInt1 = (next1 == ' ') || (next1 == '\n') ;
     
	 
	 if (!(endOfInt1)) {
		  cerr << "Error: Invalid Input. Program Terminated."; 
		 return 0;
	 }

	 if (number1 < 0 || number1 > 20) {
		 
		 cerr << "Error: Invalid Input. Program Terminated.";
		 return 0;
	 }
	 
	 
	 
}

else {
	
	
	 cerr << "Error: Invalid Input. Program Terminated.";
	 return 0;
	
}
///////////////////////////////////////////________________Error Checking__________________//////////////////////////////////////////////////////////////////////////////////////////////
if (number1 == 0){
	int k = 1;
cout << "Its factorial is " << k ;
return 0;
}
	uint64_t random_variable = number1;
	
while (random_variable != 1) {
		
	number1 = number1 * (random_variable - 1);
	random_variable = random_variable - 1;
	
}

cout <<"Its factorial is " << number1 ;

return 0;

}