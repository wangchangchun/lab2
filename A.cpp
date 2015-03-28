#include <iostream>
#include <cstring>
#include <fstream>
#include "head.h"
using namespace std;
int main()
{
	int fam_bmi[5];
	int count=0;
	ifstream infile("file.in",ios::in);
	ofstream outfile("file.out",ios::out);
	for(count=0;count<5;count++)
	{
		data a;
		int ah=0,aw=0;
		infile>>ah>>aw;
		a.setHeight(ah);
		a.setWeight(aw);
		float fambmi=a.BMI(a.getHeight(),a.getWeight());
		outfile<<fambmi<<"\t"<<a.setCategory(fambmi)<<"\n";
	}
	return 0;	

}
