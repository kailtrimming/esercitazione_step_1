#ifndef POWER_H
#define POWER_H

#include "CFunction.h"

/*#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;*/

class Power : public Function
{
	private: 
		double  k_coeff;
		double  e_coeff; 
		
	public: 
		Power();
		Power(const double k_coefficent, double e_coefficent);
		Power(const Power& p);
		~Power();
		
		Power& operator=(const Power& p);
		bool operator==(const Power& p);
		
		void SetPower(const double k_coefficent, double e_coefficent);
		double GetValue(double in);
		
		void Reset();
		
		void ErrorMessage(const char *string); 
		void WarningMessage(const char *string);
		void Dump();
};

#endif