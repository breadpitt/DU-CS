//
// Created by jasha on 11/5/2017.
//

#include "Dwelling.h"
#include "House.h"

float House::per_sq_ft(float square_footage, float monthly_payment) {
    return square_footage/monthly_payment;
}

std::ostream& operator <<(std::ostream& out, House house) {
    return out << "House has " << house.get_rooms() << " rooms, " << house.get_bathrooms()
               << " bathrooms, " << house.get_sq_ft() << " square feet, " <<  house.garage_size
               << " car garage, the monthly payment is " << house.monthly_payment << " which is "
               << house::per_sq_ft(house.square_footage, house.monthly_payment) << " per sq. ft.\n";
}

// Default Constructor
House::House() : Dwelling(), yard(false), garage_size(0), rental(false), monthly_payment(){

}

House::House(int rooms, int bathrooms, float square_footage, bool is_rental,
             bool has_yard, int temp_garage_size, float temp_monthly_payment, float per_sq_ft) :
        Dwelling(rooms, bathrooms, square_footage), yard(has_yard), garage_size(temp_garage_size),
                 rental(is_rental), monthly_payment(temp_monthly_payment)
{

    yard = has_yard;
    garage_size = temp_garage_size;
    rental = is_rental;
    monthly_payment = temp_monthly_payment;
    per_sq_ft = square_footage / temp_monthly_payment;
}