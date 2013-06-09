#include <iostream>
#include "intClass.h"

using namespace std;

Int::Int()
{
	this->member = 0;
}

Int::Int(int n) : member(n)
{
}

Int Int::operator+(const Int &right)
{
	Int temp;

	temp.member = member + right.member;

	return temp;
}

Int Int::operator-(const Int &right)
{
	Int temp;

	temp.member = member - right.member;

	return temp;
}

//ostream &operator<<(ostream &strm, Int &obj)
//{
//	strm << obj.getMember() << endl;
//
//	return strm;
//}
//
//istream &operator>>(istream &strm, Int &obj)
//{
//	cout << "Member = ";
//
//	strm >> obj.getMember;
//
//	return strm;
//}