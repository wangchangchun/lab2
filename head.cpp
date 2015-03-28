#include <iostream>
#include <cstring>
#include <fstream>
#include "head.h"
using namespace std;


		void data::setHeight(int h ){height=h;};
		void data::setWeight(int w){weight=w;};
		int data::getHeight(){return height;};
		int data::getWeight(){return weight;};
		float data::BMI(int h,int w){bmi=w/(h*h*0.01*0.01);return bmi;};
		string data::setCategory(float bmi)
		{
			if(bmi<15)
				{str=" very severely underweight";return str;}
			if(bmi>=15&&bmi<16)
				{str=" severely underweight";return str;}
			if(bmi<18.5&&bmi>=16)
				{str=" underweight";return str;}
			if(bmi<25&&bmi>=18.5)
				{str=" normal";return str;}
			if(bmi>=25&&bmi<30)
				{str=" overweight";return str;}
			if(bmi<35&&bmi>=30)
				{str="obese Class I(moderately obese)";return str;}
			if(bmi<40&&bmi>=35)
				{str="obese Class II(severely obese)";return str;}
			if(bmi>=40)
				{str="obese Class III(very severelr obese)";return str;}
		};
