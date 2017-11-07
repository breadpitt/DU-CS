//
// Created by jasha on 11/5/2017.
//
#include "Dwelling.h"
#include "Apartment.h"
#include <iostream>

// Default Constructor
Apartment::Apartment() : Dwelling(), apartment_number(0), rent(0) {

}

Apartment::Apartment(int rooms, int bathrooms, float square_footage, int apt_number, float temp_rent) :
        Dwelling(rooms, bathrooms, square_footage), apartment_number(apt_number), rent(temp_rent) {

    apartment_number = apt_number;
    rent = temp_rent;
}

// Apartment member function to calculate the $/sqft.
float Apartment::per_sqft(float square_footage, float rent) {
    float price_per_sq_ft;
    price_per_sq_ft = rent/square_footage;
    return price_per_sq_ft;
}

// Output function
std::ostream& operator <<(std::ostream& out, Apartment apartment) {
    return out << "Apartment #" << apartment.apartment_number<< " has " << apartment.get_rooms()
               << " bedrooms, " << apartment.get_bathrooms() << " baths, " << apartment.get_sq_ft()
               << " sq ft., the monthly payment is " << apartment.rent << " which is $"
               << apartment.per_sqft(apartment.get_sq_ft(), apartment.rent) << " per sq. ft.\n";
}

// Input function

void Apartment::read_apartment_details(std::istream &in){
    using std::cout;

    int bedrooms;
    int baths;
    float square_feet;

    cout << "Enter the apartment number \n";
    in >> apartment_number;
    cout << "Enter number of bedrooms \n";
    in >> bedrooms;
    set_rooms(bedrooms);
    cout << "Enter number of baths \n";
    in >> baths;
    set_bathrooms(baths);
    cout << "Enter square footage \n";
    in >> square_feet;
    set_sq_ft(square_feet);
    cout << "Enter monthly rent \n";
    in >> rent;
}


bool Apartment::operator==(Apartment &other_apt) {
    return get_rooms() == other_apt.get_rooms() &&
           get_bathrooms() == other_apt.get_bathrooms() &&
           get_sq_ft() == other_apt.get_sq_ft() &&
           apartment_number == other_apt.apartment_number &&
           rent == other_apt.rent;
}