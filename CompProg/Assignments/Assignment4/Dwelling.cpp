//
// Created by jasha on 11/5/2017.
//
#include <iostream>
#include "Dwelling.h"
#include "Room.h"


std::ostream& operator <<(std::ostream& out, Dwelling dwelling) {
    return out << "dwelling has " << dwelling.get_rooms() << " rooms, " << dwelling.get_bathrooms()
               << " bathrooms, and " << dwelling.get_sq_ft() << " square feet\n";
}

void Dwelling::print_rooms(){
    for (int i = 0; i < get_rooms(); i++) {
        std::cout << "Room " << i << " has " << room_array[i]->get_furniture() << " furniture\n";
    }
}

bool Dwelling::operator == (const Dwelling& other_dwelling){

    return get_rooms() == other_dwelling.num_rooms &&
           get_bathrooms() == other_dwelling.num_bathrooms &&
           get_sq_ft() == other_dwelling.sq_ft ;
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
    room_array = nullptr;
}

Dwelling::Dwelling(int rooms, int bathrooms, float square_footage) {
    set_rooms(rooms);
    set_bathrooms(bathrooms);
    set_sq_ft(square_footage);
    int num_rooms = get_rooms();
    // Make a new dynamic array of size of the rooms of the dwelling
    room_array = new RoomPtr[num_rooms];
    // Assign each section of the array to type Room and intialize to 0 furniture
    for (int i = 0; i < get_rooms(); i++){
        room_array[i] = new Room(0);
    }
}

void Dwelling::add_furniture(int room_index, int num_furniture) {
    room_array[room_index]->set_furniture(num_furniture);
}

Dwelling::~Dwelling() {
    delete [] room_array;
}