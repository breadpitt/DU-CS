//
// Created by Nathan Evans on 11/2/17.
//

#ifndef ASSIGNMENT4_APARTMENT_H
#define ASSIGNMENT4_APARTMENT_H

#import "Dwelling.h"

class Apartment : public Dwelling {

public:
    // Default constructor
    Apartment();

    // Constructor with all arguments
    Apartment(int rooms, int bathrooms, float square_footage, int apt_number,
              float temp_rent);

    // Overloaded == operator
    bool operator==(Apartment& other_apt);

    // Overloaded << operator. Print out apartment information.
    friend std::ostream& operator<<(std::ostream& out, Apartment apt);

    // Function to read in house details
    void read_apartment_details(std::istream& in);
private:
    int apartment_number;
    float rent;
};


#endif //ASSIGNMENT4_APARTMENT_H
