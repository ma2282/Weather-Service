#include <string>
#include "Weather.h"

using namespace std;

class Service
{
public:
	virtual Weather getWeather(std::string s) abstract;

	virtual ~Service() abstract;
};

