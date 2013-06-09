#pragma once

class Int 
{
	private:
		int member;

	public:
		Int();
		Int(int n);

		Int operator+(const Int &);
		Int operator-(const Int &);

	 //	friend ostream &operator<<(ostream &, const Int &);
		//friend istream &operator>>(istream &, Int &);

		int getMember()
		{
			return member;
		}
};