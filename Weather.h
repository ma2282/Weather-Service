#pragma once
#include <string>

using namespace std;

class Weather
{
public:
	string city; //  �����
	double lon; // 49.6601
	double lat; // 58.5966
	double temperature; // 5.69
	string weather; // �����
	double windSpeed; // 4.27
	int clouds; // 100

	Weather(string city, double lon, double lat, double temperature, string weather, double windSpeed, int clouds) : city(city), lon(lon), lat(lat), temperature(temperature), weather(weather), windSpeed(windSpeed), clouds(clouds){}
};

