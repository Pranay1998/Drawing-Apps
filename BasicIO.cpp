#include <iostream>

using namespace std;

int main()
{
	char first_name[100] = {0}; //Asking Computer for 100 characters of space
	int DateofBirth = 0;
	long StudentNumber = 0;
	char Email_Address[100] = {0};
	char City[100] = {0};
	char ProvinceorState[100] = {0};
	char Country[100] = {0};

    cout << "Please enter your first name: ";
	cin >> first_name;
	
	cout << "Please enter your Date of Birth(mmddyy): ";
	cin >> DateofBirth;
	
	cout << "Please enter your Student Number: ";
	cin >> StudentNumber;
	
	cout << "Please enter your Email Address: ";
	cin >> Email_Address;
	
	cout << "Please enter your City: ";
	cin >> City;
	
	cout << "Please enter your Province/state: ";
	cin >> ProvinceorState;
	 
	cout << "Please enter your Country: ";
	cin >> Country;
	
	
	

	cout << "First Name: " << first_name <<  endl;
	
	cout << "Date of Birth(mmddyy): " << DateofBirth << endl;
	
	cout << "Student Number: " << StudentNumber << endl;
	
	cout << "Email Address: " << Email_Address << endl;
	
	cout << "City: " << City << endl;
	
	cout << "Province/state: " << ProvinceorState << endl;
	
	cout << "Country: " << Country << endl;
	
	cout << "Thank you! sign-up is complete! " << endl;
	
	cout << endl;
	
	cout << "This is your sign-up receipt: " << endl;
	
	cout << "First Name: " << first_name <<  endl;
	
	cout << "Date of Birth(mmddyy): " << DateofBirth << endl;
	
	cout << "Student Number: " << StudentNumber << endl;
	
	cout << "Email Address: " << Email_Address << endl;
	
	cout << "City: " << City << endl;
	
	cout << "Province/state: " << ProvinceorState << endl;
	
	cout << "Country: " << Country << endl;
	
	return 0;
	
	
	}
