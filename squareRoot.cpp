#include <iostream>
#include <math.h>

using namespace std;

int main ()   {

	float accuracy = 0.0001;
	float input;
	cout << "Enter a positive Number : ";
	cin >> input;
	
	if (cin.fail()) {
		cout << "You screwed up" ;
	}
		
	
	if (input < 0) {
		
	
	cout << "You screwed up";
	
	return 0;
	} 
	
	float lower = 0;
	float upper = (input < 1) ? (1) : (input);
	
	
	
	float bestSoFar = Lower + (upper - lower)/2.0;
	
	float functionVal = bestSoFar*bestSoFar - input;
	
	float estimateError = functionVal/input;
	float absestimateError = absestimateError;
	
	if (absestimateError<0)
		absestimateError = -absestimateError;
	
	while (absestimateError > accuracy) {
		if (functionVal < 0) {
			
			lower = bestSoFar;
		}
		else {
			upper = besoSoFar;
		}
	
	
	bestSoFar = Lower + (upper - lower)/2.0;
	 functionVal = bestSoFar*bestSoFar - input;
	 estimateError = functionVal/input;
	 absestimateError = absestimateError;
	 if (absEstimate)
	
	}
	
	
	return 0;
	
}