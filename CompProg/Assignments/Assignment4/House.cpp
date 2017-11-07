//
// Created by jasha on 11/5/2017.
//

#include "Dwelling.h"
#include "House.h"

// House member function to calculate the $/sqft.
float House::per_sqft(float square_footage, float monthly_payment) {
    float price_per_sq_ft;
    price_per_sq_ft = monthly_payment/square_footage;
    return price_per_sq_ft;
}

// Output function
std::ostream& operator <<(std::ostream& out, House house) {
    std::string have_yard;
    std::string is_rental;
    if (house.yard == true){
        have_yard = "has";
    } else {
        have_yard = "doesn't have";
    }
    if (house.rental == true){
        is_rental = "is";
    } else {
        is_rental = "is not";
    }
    return out << "House has " << house.get_rooms() << " rooms, " << house.get_bathrooms()
               << " bathrooms, " << house.get_sq_ft() << " square feet, " <<  house.garage_size
               << " car garage, the house " << have_yard << " a yard, and " << is_rental
               << " a rental, the monthly payment is " << house.monthly_payment << " which is "
               << house.per_sqft(house.get_sq_ft(), house.monthly_payment) << " per sq. ft.\n";
}

// Input function

void House::read_house_details(std::istream& in) {
    using std::cout;

    int bedrooms;
    int baths;
    float square_feet;
    //int garage_size;
    char home_rental;
    char is_yard;
    //float monthly_payment;
    cout << "Enter number of bedrooms \n";
    in >> bedrooms;
    set_rooms(bedrooms);
    cout << "Enter number of baths \n";
    in >> baths;
    set_bathrooms(baths);
    cout << "Enter square footage \n";
    in >> square_feet;
    set_sq_ft(square_feet);
    cout << "Enter garage size \n";
    in >> garage_size;
    cout << "Is it a rental? \n";
    while (true){
        in >> home_rental;
        if (home_rental == 'y' || home_rental == 'Y') {
            rental = true;
            break;
        }
        if (home_rental == 'n' || home_rental == 'N') {
            rental = false;
            break;
        }
        else {
            cout << "Invalid input. Please enter either y or n.\n";
            continue;
        }

    }
    cout << "Does it have a yard? \n";
    while (true){
        in >> is_yard;
        if (is_yard == 'y' || is_yard == 'Y') {
            yard = true;
            break;
        }
        if (is_yard == 'n' || is_yard == 'N') {
            yard = false;
            break;
        }
        else {
            cout << "Invalid input. Please enter either y or n.\n";
            continue;
        }

    }
    cout << "Enter monthly payment \n";
    in >> monthly_payment;
}


bool House::operator==(House &other_house) {
    return get_rooms() == other_house.get_rooms() &&
           get_bathrooms() == other_house.get_bathrooms() &&
           get_sq_ft() == other_house.get_sq_ft() &&
           yard == other_house.yard &&
           garage_size == other_house.garage_size &&
           rental == other_house.rental &&
           monthly_payment == other_house.monthly_payment;
}


// Default Constructor
House::House() : Dwelling(), yard(false), garage_size(0), rental(false), monthly_payment(){

}

House::House(int rooms, int bathrooms, float square_footage, bool is_rental,
             bool has_yard, int temp_garage_size, float temp_monthly_payment) :
        Dwelling(rooms, bathrooms, square_footage), yard(has_yard), garage_size(temp_garage_size),
                 rental(is_rental), monthly_payment(temp_monthly_payment)
{

    yard = has_yard;
    garage_size = temp_garage_size;
    rental = is_rental;
    monthly_payment = temp_monthly_payment;

}

