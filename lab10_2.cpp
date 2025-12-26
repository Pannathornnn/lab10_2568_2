#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	
	string textline ;
	dest << "-------------------- BOOM ---------------------" << endl ;
	cout << "-------------------- BOOM ---------------------" << endl ;
	while(getline(source , textline))
	{
		cout << textline << endl ;
		dest << textline << endl;
	}
	cout << "-------------------- HA!! ---------------------" ;
	dest << "-------------------- HA!! ---------------------" ;

    source.close();
    dest.close();
	return 0;
}
