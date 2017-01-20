#include <iostream>

using namespace std;

int main () {
int WallToWall, SnakeLength, WallToSnake;

	cout << "Wall-to-Wall dimensions : ";	
	cin >> WallToWall;
	bool valid1 = cin.good() ;
	if (valid1){
char next1 = cin.get(); 
bool endOfInt1 = (next1 == ' ') || (next1 == '\n') ;
     
	 
	 if (!(endOfInt1)) {
		  cerr << "Error: Invalid Input. Program Terminated."; 
		 return 0;
	 }
	}
	
	
	cout << "Snake length : " ;
	cin >> SnakeLength;
	bool valid2 = cin.good() ;	
	if (valid2){
char next2 = cin.get(); 
bool endOfInt2 = (next2 == ' ') || (next2 == '\n') ;
     
	 
	 if (!(endOfInt2)) {
		  cerr << "Error: Invalid Input. Program Terminated."; 
		 return 0;
	 }
	}
	
	
	cout << "Wall-to-snake tail distance : ";
	cin >> WallToSnake;
	bool valid3 = cin.good() ;
	if (valid3){
char next3 = cin.get(); 
bool endOfInt3 = (next3 == ' ') || (next3 == '\n') ;
     
	 
	 if (!(endOfInt3)) {
		  cerr << "Error: Invalid Input. Program Terminated."; 
		 return 0;
	 }
	
	
	
	}
	
	
if (SnakeLength > WallToWall - 2 || SnakeLength + WallToSnake > WallToWall ) {
	cerr << "Error: Invalid Input. Program Terminated.";
	return 0;
}
	
if (SnakeLength <0 || WallToSnake <0 || WallToWall <= 0){
	cerr << "Error: Invalid Input. Program Terminated."; 
		 return 0;
}

int SnakeToWall = WallToWall - WallToSnake - SnakeLength - 2;

cout << "|";

while (WallToSnake != 0) {
	
	cout << " ";
	
	WallToSnake = WallToSnake - 1;
	
}
	
while (SnakeLength != 1 && SnakeLength != 0){
      cout << "*";
    SnakeLength = SnakeLength - 1;	  
}
	
if (SnakeLength == 1) {
   cout << "O"	;
}

while (SnakeToWall != 2){
	cout << " ";
	SnakeToWall = SnakeToWall - 1;
}




cout << "|"	;
	
	
	
	return 0;
	
	
	
	
	
	
	
	}