#include "BMI.h"
using namespace std;
float BMI::bmi(float h,float w){
	t=0;
	hei=h;
	wei=w;
	t=w/((h/100)*(h/100));
	return t;
}
string BMI::set(){
	if(t<15) return "very severely underweight";
	else if(t>15&&t<16) return "Severely underweight";
	else if(t>16&&t<18.5) return "Underweight";
	else if(t>18.5&&t<25) return "Normal";
	else if(t>25&&t<30) return "Overweight";
	else if(t>30&&t<35) return "Obese class I";
	else if(t>35&&t<40) return "Obese class II";
	else if(t>=40) return "Obese class III";
}
