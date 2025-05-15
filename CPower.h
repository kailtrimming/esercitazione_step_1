#ifndef POWER_H
#define POWER_H

#include "CFunction.h"

using namespace std;

class Power : public Function
{
	private: 
		double  k_coeff;
		double  e_coeff; 
		
	public: 
		Power();
		Power(double k_coefficient, double e_coefficient);
		Power(const Power& p);
		~Power();
		
		Power& operator=(const Power& p);
		bool operator==(const Power& p);
		
		void SetPower(double k_coefficient, double e_coefficient);
		double GetValue(double in);
		
		void Reset();
		
		//void ErrorMessage(const char *string); 
		//void WarningMessage(const char *string);
		void Dump();
};

#endif