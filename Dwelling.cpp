//
// Created by jasha on 11/5/2017.
//
#include <ostream>
#include "Dwelling.h"

std::ostream& operator <<(std::ostream& out, Dwelling dwelling) {
    return out << "dwelling has " << dwelling.get_rooms() << " rooms, " << dwelling.get_bathrooms()
               << " bathrooms, and " << dwelling.get_sq_ft() << " square feet\n";
}

void Dwelling::set_rooms(int rooms) {
    num_rooms = rooms;
}

void Dwelling::set_bathrooms(int bathrooms) {
    num_bathrooms = bathrooms;
}

void Dwelling::set_sq_ft(float square_footage) {
    sq_ft = square_footage;
}

int Dwelling::get_rooms(){
    return num_rooms;
}

int Dwelling::get_bathrooms() {
    return num_bathrooms;
}

float Dwelling::get_sq_ft() {
    return sq_ft;
}

// Default Constructor
Dwelling::Dwelling(){
    num_rooms = 0;
    num_bathrooms = 0;
    sq_ft = 0;
}
Dwelling::Dwelling(int rooms, int bathrooms, float square_footage) {
    set_rooms(rooms);
    set_bathrooms(bathrooms);
    set_sq_ft(square_footage);
}

