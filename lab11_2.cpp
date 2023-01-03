#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt") ;
	dest.open("cheerbook_copy.txt");
	
	string word;
	dest << "-------------------- BOOM ---------------------\n";
	while(getline(source,word)){
	    dest << word <<"\n";
	}
	dest << "-------------------- HA!! ---------------------";

    source.close();
    dest.close();
	return 0;
}
