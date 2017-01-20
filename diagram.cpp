#include <iostream>
#include <stdlib.h>

using namespace std;

int main (){
for (int i=0;i<60;i++){
	
for (int x=0;x<60;x++){cout << "=";} cout << endl;

for(int k = 0;k<i;k++) {cout <<" ";} 

cout << "O" << endl;

for (int y=0;y<60;y++){cout << "=";} cout << endl;


for (int m = 0; m < 1000000000 ;m++){m=(m+m)*(87-m);}

if (i != 59) {system("cls");}


}

return 0;	
}