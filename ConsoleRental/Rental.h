#include <string>
#include <fstream>

using namespace std;

#pragma once
class Rental
{
	public:
		string create(string car_name);
		void removeRental(string path, string saved_car);
};

string Rental::create(string car_name) {
	ofstream new_rental("rental.txt");
	new_rental << car_name << endl;
	new_rental.close();

	return car_name;
}

void Rental::removeRental(string path, string saved_car) {
	string line;
	ifstream fin;

	fin.open(path);

	ofstream temp;
	temp.open("rental.txt");

	while (getline(fin, line)) {
		if (line != saved_car)
			temp << line << endl;
	}

	temp.close();
	fin.close();

	const char* p = path.c_str();;
	remove(p);
	rename("rental.txt", p);


}

