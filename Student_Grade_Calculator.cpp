
#include <iostream>
#include <string>
using namespace std;
int main(){
	
	
	float marks[5];
	string name;
	int rollnumber;
	cout << " enter  name: ";
	cin >>  name;
	cout << " enter rollnumber : ";
	cin >> rollnumber;
	
	
	for ( int i =0; i <5; i++){
	cout << "enter marks : ";
	cin >> marks[i];
	
	if ( marks[i] >= 90 )
	cout << " grade is A" << endl;

		else if ( marks[i] >= 80 )
		cout << " grade is B" << endl;
		
		else if (marks[i] >= 70 )
		cout << " grade is C" << endl;
		else if ( marks[i] >=60)
		cout << " grade is D" << endl;
		else
		cout << "fail " << endl;
		
	}
	


return 0;
}
