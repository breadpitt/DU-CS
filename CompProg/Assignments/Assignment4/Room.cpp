//
// Created by James Shannon on 11/6/17.
//
#include "Dwelling.h"
#include "Room.h"



Room::Room() {
    num_furniture = 0;
}

Room::Room(int furniture) {
    num_furniture = furniture;
}

void Room::set_furniture(int furniture){
    num_furniture = furniture;
}

int Room::get_furniture(){
    return num_furniture;
}

std::ostream& operator <<(std::ostream& out, Room room) {
    return out << room.get_furniture();
}

/*
Room::~Room() {
    delete [] room_array;
}
*/