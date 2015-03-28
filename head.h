#ifndef HEAD_H
#define HEAD_H
#include <iostream>
#include <cstring>
#include <fstream>
using namespace std;

class data
{
	public:
		void setHeight(int h );
		void setWeight(int w);
		int getHeight();
		int getWeight();
		float BMI(int h,int w);
		string setCategory(float bmi);
		
	private:
		string str;
		int height;
		int weight;
		float bmi;
};
#endif
