#include <iostream>
#inlcuding <fstream.
#include "LakeTahoe.h"
usinig namespace std;

bool readTahowData(char* filename, float lake_deapths [420] [210] )
{
	fstream in_the_file;
	int number_of_rows;
	number_of_columns;
	float number_of_columns;
	in_the_file.open(filename);
	if (in_the_file.fail()){
		retuen false;
	}
	infile>>number_of_row; infile>>column;
	if (number_of_rows != 420 || number_of_columns != 210){
		return false;	
	}
	else if (number_of_rows == 420 && number_of_columns == 210 ){
		for(int i = 0;i<420;i++){
			for (int j = 0;j<210;){
				in_the_file>>lake_depths[i][j];
				in_the_file.get();
				in_the_file.get();
			}
		}
	}
	in_the_file.close();
	return true;
 }	
 
void cleanData(float lake[420][210]){
	float lake2[420][210];
	for (int i = 0; i < 420 ; i++){
		for (int j = 0; j < 210; j++){
			lake2[i][j] = lake[i][j];
		}
	}
	float avg;
	for (int i = 0; i < 420 ; i++ ){
		for (int j = 0; j < 210 ; j++ ){
			
			
		}
	}	
} 