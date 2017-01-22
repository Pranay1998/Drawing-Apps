#include <iostream>

using namespace std;

int main () {
char array [100];
int start_index, end_index ;
cout << "Please input a word: " ;
cin >> array;



/////////////////////////////////////////////////////////////////////////////////////////////////////
bool valid1 = cin.good();
if (valid1){
char next1 = cin.get(); 
bool endOfInt1 = (next1 == ' ') || (next1 == '\n') ;
     
	 
	 if (!(endOfInt1)) {
		  cerr << "Error: Invalid Input. Program Terminated."; 
		 return 0;
	 }
	 
}
else {
	
	cerr << "Error: Invalid Input. Program Terminated.";
return 0;	
       }
//////////////////////////////////////////////////////////////////////////////////////////////////////



cout << "Please input the starting index: " ;
cin >>start_index;



/////////////////////////////////////////////////////////////////////////////////////////////////////
bool valid2 = cin.good();
if (valid2){
char next2 = cin.get(); 
bool endOfInt2 = (next2 == ' ') || (next2 == '\n') ;
     
	 
     if (!(endOfInt2)) {
		  cerr << "Error: Invalid Input. Program Terminated."; 
		 return 0;	}
	 if (start_index <0 || array [start_index] == ' ' || array [start_index] == '\n' )	 {
		 cerr << "Error: Invalid Input. Program Terminated."; 
		 return 0;
		 
	 }
	 
 
}
else {
	cerr << "Error: Invalid Input. Program Terminated.";
return 0;
}
//////////////////////////////////////////////////////////////////////////////////////////////////////
cout << "Please input the ending index: ";
cin >> end_index;



/////////////////////////////////////////////////////////////////////////////////////////////////////
bool valid3 = cin.good();
if (valid3){
char next3 = cin.get(); 
bool endOfInt3 = (next3 == ' ') || (next3 == '\n') ;
     
	 
     if (!(endOfInt3)) {
		  cerr << "Error: Invalid Input. Program Terminated."; 
		 return 0;	}
	 if (end_index <0 || end_index < start_index || array [end_index] == '\n' )	 {
		 cerr << "Error: Invalid Input. Program Terminated."; 
		 return 0;
		 
	 }
	 
 
}
else {
cerr << "Error: Invalid Input. Program Terminated.";
return 0;
}



//////////////////////////////////////////////////////////////////////////////////////////////////////


while (start_index != end_index) {
	cout << array [start_index];
	start_index ++;
}

if (start_index == end_index) cout << array [end_index];

return 0;
}