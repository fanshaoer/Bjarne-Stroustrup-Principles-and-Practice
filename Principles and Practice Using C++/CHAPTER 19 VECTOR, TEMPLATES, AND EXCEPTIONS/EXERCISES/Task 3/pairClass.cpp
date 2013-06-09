#include <iostream>

using namespace std;

template<class T, class R>
class Pair
{
	private:
		T shpek;
		R salam;

	public:
		Pair()
		{
			this->shpek = 0;
			this->salam = 0;
		}

		Pair(T sh, R sa)
			: shpek(sh)
			, salam(sa)
		{
		}
};