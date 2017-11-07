//
// Created by Nathan Evans on 11/2/17.
//

#ifndef ASSIGNMENT4_HOUSE_H
#define ASSIGNMENT4_HOUSE_H

#import "Dwelling.h"
#import <iostream>

class House : public Dwelling {

public:
    // Default constructor
    House();

    // Constructor with all arguments
    House(int rooms, int bathrooms, float square_footage, bool is_rental,
          bool has_yard, int temp_garage_size, float temp_monthly_payment);

    // Price per sq. ft. function
    float per_sqft(float square_footage, float temp_monthly_payment);

    // Overloaded == operator
    bool operator==(House& other_house);

    // Overloaded << operator. Print out house information.
    friend std::ostream& operator<<(std::ostream& out, House house);


    // Function to read in house details
    void read_house_details(std::istream& in);


private:
    bool yard;
    int garage_size;
    bool rental;
    float monthly_payment;

};


#endif //ASSIGNMENT4_HOUSE_H
