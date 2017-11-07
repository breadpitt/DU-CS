//
// Created by James Shannon on 11/6/17.
//

#ifndef ASSIGNMENT4_ROOM_H
#define ASSIGNMENT4_ROOM_H

#include "Dwelling.h"

class Room {
public:
    // Default constructor
    Room();

    // Constructor with arguments
    Room(int furniture = 0);

    void set_furniture(int furniture);

    int get_furniture();

    // Read out function
    friend std::ostream& operator<<(std::ostream& out, Room room);

    // Default destructor
    ~Room();

private:
    int num_furniture;
};



#endif //ASSIGNMENT4_ROOM_H
