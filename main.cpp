#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
#include "BMI.h"
using namespace std;
int main(){
	BMI b;
	float height,weight;
	ifstream inFile("file.in",ios::in);
	if(!inFile){
		cerr<<"Error"<<endl;
		exit(1);
	}
	ofstream outFile("file.out",ios::out);
	if(!outFile){
		cerr<<"Error"<<endl;
		exit(1);
	}
	while(inFile>>height>>weight){
		if(height == 0 && weight == 0)
			return 0; 
		outFile<<b.bmi(height,weight);
		outFile<<"\t"<<b.set()<<endl;
	}
	return 0;
}
