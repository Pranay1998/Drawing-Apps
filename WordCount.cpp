#include <iostream>
#include <fstream>
using namespace std;



void substering_finder (char current_line[], int numberofsubsterings , int total_substerings[], char * argv[], int line_count){

//substering_finder (current_line,argc - 2, e, argv, line_count);	

int current_substerings[100];

for (int i = 0; i < 100 ; i ++) {
	
current_substerings[i] = 0;	
	
}

int length_of_current_substering;
int kk;
int gg;
int i;
int kg;



for (int i = 0; current_line[i] != '\0'; i++) {
	
	current_line[i] = char(tolower(current_line[i]));
	
}







for ( i = 2 ; i < numberofsubsterings + 2 ; i++) {



for (int j = 0 ; argv [i] [j] != '\0' ; j++) {
	argv [i] [j] = char(tolower(argv[i] [j]));
	
}



for (kk = 0; argv[i] [kk] != '\0' ; kk++){}
	


for ( kg = 0; current_line[kg] != '\0' ; kg++) {
	
if (current_line[kg] == argv [i] [0] ) {
	

	
for ( gg = 0; argv [i] [gg] != '\0' && current_line[kg+gg] != '\0' && argv [i] [gg] == current_line[kg+gg] ; gg++ ) {}





if (kk == gg) {
	
current_substerings[i-2] = current_substerings[i - 2] + 1;	
}
	
}

}	
		
}

for (int i = 0 ; i < 20 ; i++) {
	
total_substerings[i] = total_substerings [i] + current_substerings[i];	
	
}



}




void analyze_line (char current_line[], int & a, int & b, int & max, int & min ) {
int length_of_line = 0;
int number_of_words = 0;
int number_of_spaces = 0;
char words_without_spaces[100];
int rand = 0;
int first = 0;
int second = 0;
max = 0;
min = 0;
int hg;


for(int i = 0 ; current_line[i] != '\0' ; i++ ) {
	if (current_line[i] - '0' <= 9 && current_line[i] - '0' >= 0) {
		current_line[i] = ' ';
	rand++;}
	 if ( (current_line[i] >= 'a' && current_line[i] <= 'z') || (current_line[i] >= 'A' && current_line[i] <= 'Z' )) { }
	else {
		current_line[i] = ' ';
rand++;}
}	

for (hg = 0; current_line[hg] != 0 ; hg ++) {}


while (current_line[hg - 1] == ' ') {
	current_line[hg - 1] = '\0';
	hg--;
}



for (int i = 0 ; current_line[i] != '\0' ; ) {


if (current_line[i] != ' ' && current_line[i] != '\0') {
	
	 first = i;
while (current_line[i] != ' ' && current_line[i] != '\0') {i++;}
	}
	min = i - first;
	if (min != 0) {break;}
	
	else if (current_line[i] == ' ' && current_line[i] != '\0') {
	i++;}
	
	
	else if (current_line[i]== '\0') {break;}
	}

for (int i = 0 ; current_line[i] != '\0' ; ) {

if (current_line[i] == ' ') {i++;
}

if (current_line[i] == 0) {break;}

else if (current_line[i] != ' ') {
	

	
first = i;	
	for (i = i ; current_line[i] != ' ';) {
	
if (current_line[i] != '\0') {i++;}
else {break;}
		
}	
number_of_words++;
if (max < i - first) {max = i - first;}
if (min > i - first) {min = i - first;}			
}
	}

	
	
	int j = 0;
for (int i = 0; current_line[i] != '\0'; i++) {
	if (current_line[i] != ' ' && current_line[i] != '\t') {
	words_without_spaces[j] = current_line[i];
j++;}}	
words_without_spaces[j] = '\0';
length_of_line = j;
a = a + number_of_words;
b = b + length_of_line;
return;
}	
	

int main (int argc, char* argv[]) {


if (argc < 2  ) {
	
	cerr << "Error :INVALID OR NO ARGUMENTS"<<endl;
	return -1;
	
}	

ifstream in;
int bal = -1;
int kgs = 0;
int jk = 0;

for ( kgs = 0; argv [1] [kgs] != '\0'; kgs++) {}
	

	
for ( jk = 0 ;jk < kgs; jk++) {
	if (argv [1] [jk] == '.') {
		bal = +1;
		break;}
	
}



if (bal == 1){
if ( argv [1] [jk+1] != 't' || argv [1] [jk + 2] != 'x' || argv [1] [jk+3] != 't' || argv[1] [jk+4] != '\0') {
	cerr << "Error. Invalid Extension"<< endl;
	return -1;
}	
}


if (bal == -1)
{
argv [1] [kgs] = '.';	
argv [1] [kgs+1] = 't';	
argv [1] [kgs+2] = 'x';	
argv [1] [kgs+3] = 't';	
argv [1] [kgs+4] = '\0';
}

	
in.open(argv[1]);



if (!in) {
	cerr << "Error :FILE NOT FOUND";
	return -1;
	
}

int total_number_of_words = 0;
int total_length = 0;	
int current_max = 0;
int current_min = 0;
int & a = total_number_of_words;
int & b = total_length;
int & c = current_max;
int & d = current_min;
int global_max;
int global_min;
int line_count = 0;
int total_substerings[20];



for (int i = 0 ; i < 20 ; i++) {total_substerings [i] = 0;}

while(in) {
char current_line[200];
	in.getline(current_line, 200);
	
substering_finder (current_line,argc - 2, total_substerings, argv, line_count);	
analyze_line(current_line, a, b, c , d)	;
if (line_count == 0) {
	global_max = current_max;
	global_min = current_min;
}

if (global_max < current_max) {global_max = current_max;}
if (global_min > current_min && current_min != 0) {global_min = current_min;}




line_count++;
	
}


ofstream ka;


int ask = 0;

for ( ask = 0 ; argv[1] [ask] != '.' ; ask++ ) {}

 

argv [1] [ask+1] = 'a';
argv [1] [ask+2] = 'n';
argv [1] [ask+3] = 'l';
argv [1] [ask+4] = '\0';




ka.open(argv[1]);









float average = float(total_length)/float(total_number_of_words);

average = (float(int(average * 100 + 0.5))/100);

ka <<"Number of Words: " << total_number_of_words <<endl;
ka <<"Longest Word: " << global_max<< endl;
ka <<"Shortest Word: " << global_min<< endl;
ka <<"Average word length: "<<average<<endl;

for (int i = 2; i < argc ; i++) {
	
ka << "Number of occurences of " << argv [i] << ": " << total_substerings[i-2]<<endl; 	
	
}


return 0;
}