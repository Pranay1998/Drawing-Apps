#include <iostream>
#include "ArrayOfStruct.h"
using namespace std;





void displayNames (int numPeople, Person people[]) {
	for (int i = 0; i < numPeople; i++) {
		cout << people[i].firstName << " " << people[i].lastName << " " << people[i].age<<endl;
	}
}

int stringCmp(char str1[], char str2[]) {
	bool finished_Checking=false; //Keep checking until this is true.
	int return_value=0;
		for(int i = 0;!finished_Checking;i++){
			if(str1[i]==0&&str2[i]==0){ //if they are equal they terminate at the same point.
				finished_Checking=true;
			}
			else if(tolower(str1[i])<tolower(str2[i])){ // whem 2>1
				return_value=1;
				finished_Checking=true;
			}
			else if(tolower(str1[i])>tolower(str2[i])){// when 1>2
				return_value=-1;
				finished_Checking=true;
			}
		}
	return return_value;
}

void personSwap(Person &people1, Person &people2) {//deferencing
   struct Person temp = people1;
	people1 = people2;
	people2 = temp;
}

void bubbleSort (int numPeople, Person people[]) {//bubble sort
	for (int k = 0; k < 10000 ; k++)	{//very inefficiend but gets the job done.(error checking required for larger arrays)
		for(int i = 0 ; i < numPeople - 1; i++)	{
			if ((stringCmp(people[i].lastName,people[i+1].lastName)) == -1){
				personSwap(people[i],people[i+1]);
			}
			else if((stringCmp(people[i].lastName,people[i+1].lastName)) == 0){
				if((stringCmp(people[i].firstName,people[i+1].firstName))== -1){
					personSwap(people[i],people[i+1]);
				}
			}
		}
	}
}