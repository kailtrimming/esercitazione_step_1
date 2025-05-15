#include "CPower.h"

Power::Power()
{
	cout << endl;
	cout << "POWER -- Default constructor";
	Reset();
}

Power::Power(const double k_coefficent, double e_coefficent)
{
	cout << endl;
	cout << "POWER -- Parameter constructor";
	SetPower(k_coefficent, e_coefficent);
}

Power::Power(const Power& p)
{
	/*if (p == NULL)
	{
		
	}*/
	cout << endl;
	cout << "POWER -- Copy constructor";
	Power(p.k_coeff, p.e_coeff);
}

Power::~Power()
{
	cout << endl;
	cout << "POWER -- destructor";
	Reset();
}

Power& Power::operator=(const Power& p)
{
	SetPower(p.k_coeff, p.e_coeff);
	return *this;
}

bool Power::operator==(const Power& p)
{
	if((k_coeff == p.k_coeff)&&(e_coeff == p.e_coeff))
	{
		return true;
	}
	
	return false;
}

void Power::SetPower(const double k_coefficent, double e_coefficent)
{
	k_coeff = k_coefficent;
	e_coeff = e_coefficent;
}

double Power::GetValue(double in)
{
	return k_coeff * pow(in, e_coeff);
}

void Power::Reset()
{
	k_coeff = 0;
	e_coeff = 0;
}

void Power::ErrorMessage(const char *string) 
{	
	cout << endl << "ERROR -- Power --";
	cout << string << endl;
}

void Power::WarningMessage(const char *string) 
{
	cout << endl << "WARNING -- Power --";
	cout << string << endl;
}

void Power::Dump()
{
	cout << endl;
	cout << "---Power---" << endl;
	cout << endl;
	
	cout << "k coeff = " << k_coeff << endl;
	cout << "e coeff = " << e_coeff << endl;
}