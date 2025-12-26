#include<iostream>
using namespace std;

int main(){
	int count[5] = {};
	int student_count = 0 ;
	char grade ;
	cout << "Please input grade of each student (A-F) or input 0 to exit." << endl;
	do{
		cout << "Student ["<< student_count+1 << "]: ";
		cin >> grade;  
		
		if(grade == '0') break ;
		
		if(grade == 'A') count[0]++ ;
		else if(grade == 'B') count[1]++ ;
		else if(grade == 'C') count[2]++ ;
		else if(grade == 'D') count[3]++ ;
		else if(grade == 'F') count[4]++ ;
		else 
		{
		cout << "Wrong input. Please input again." << endl;
		student_count-- ;
		}
		
		student_count++ ;

	}while(true);
	
	
	cout << "In total " << student_count <<" students." << endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";	
	cout << "D = " << count[3] <<", ";	
	cout << "F = " << count[4] ;	
	
	
	return 0;
}