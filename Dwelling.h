//
// Created by Nathan Evans on 11/2/17.
//

#ifndef ASSIGNMENT4_DWELLING_H
#define ASSIGNMENT4_DWELLING_H

#include <ostream>
#include <iostream>

class Dwelling {

public:
    // Default constructor.
    Dwelling();

    // Another constructor.
    Dwelling(int rooms, int bathrooms, float square_footage);

    // Overloaded << operator. Print out dwelling information.
    friend std::ostream& operator<<(std::ostream& out, Dwelling dwelling);

    // Setter for rooms
    void set_rooms(int rooms);

    // Setter for bathrooms
    void set_bathrooms(int bathrooms);

    // Setter for square footage
    void set_sq_ft(float square_footage);

    // Getter for rooms
    int get_rooms();

    // Getter for bathrooms
    int get_bathrooms();

    // Getter for sq footage
    float get_sq_ft();

    bool operator==(Dwelling& other_dwelling);
private:
    // Number of rooms in dwelling
    int num_rooms;
    // Number of bathrooms in dwelling
    int num_bathrooms;
    // Total square footage in dwelling
    float sq_ft;
};


#endif //ASSIGNMENT4_DWELLING_H
