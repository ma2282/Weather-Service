#pragma once
#include "JsonService.h"
#include "pugixml-1.13/src/pugixml.hpp"

class XmlService :public Service
{
public:
	virtual Weather getWeather(std::string s) override;
	virtual ~XmlService() {};
};


