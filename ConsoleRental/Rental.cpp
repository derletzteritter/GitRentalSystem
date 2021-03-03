#include "Rental.h"
#include <iostream>

using namespace std;

static void CreateRental(string car_name) {
	Rental rental;
	// creates the new rental
	rental.create(car_name);
}

static void DeleteRental(string saved_car) {
	Rental rental;
	// deltes rental
	rental.removeRental(saved_car);
}