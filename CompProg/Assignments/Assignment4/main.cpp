#include <ostream>
#include <iostream>
#include "Dwelling.h"
#include "House.h"
#include "Apartment.h"
#include "Room.h"

int main() {

Dwelling gen_dwell(3, 2, 100);
    std::cout << "hi\n";
gen_dwell.add_furniture(0, 5);
    std::cout << "still good\n";
gen_dwell.print_rooms();


    // Declare a generic new dwelling
    Dwelling generic_dwelling;

    // Print out details of generic dwelling
    std::cout << generic_dwelling << std::endl;

    // Assign values to generic dwelling
    generic_dwelling = Dwelling(4, 3, 2170.56);
    std::cout << "good?\n";
    // Print out details of generic dwelling
    std::cout << generic_dwelling << std::endl;
    std::cout << "still good?\n";
    // Use setters to set dwelling info
    generic_dwelling.set_bathrooms(5);
    generic_dwelling.set_rooms(20);
    generic_dwelling.set_sq_ft(40000.125);

    // Print out details of generic dwelling
    std::cout << generic_dwelling << std::endl;

    // Declare a new house
    House some_house;

    // Print out details of some house
    std::cout << some_house << std::endl;

    // Read in house details from user
    some_house.read_house_details(std::cin);

    // Print out details of some house
    std::cout << some_house << std::endl;

    // Declare a new apartment
    Apartment some_apt;

    // Print out details of some apartment
    std::cout << some_apt << std::endl;

    // Read in apartment details from user
    some_apt.read_apartment_details(std::cin);

    // Print out details of some apartment
    std::cout << some_apt << std::endl;

    some_apt.set_bathrooms(2);
    some_apt.set_rooms(3);
    some_apt.set_sq_ft(1240);

    // Print out details of some apartment
    std::cout << some_apt << std::endl;

    some_apt.set_bathrooms(2);
    some_apt.set_rooms(3);
    some_apt.set_sq_ft(1240);

    some_house.set_bathrooms(100);
    some_house.set_rooms(3);
    some_house.set_sq_ft(1240);


    Dwelling temp_apt = some_apt;
    Dwelling temp_house = some_house;

    if (temp_apt == temp_house)
        std::cout << "Apartment and house are equivalent!" << std::endl;
    else
        std::cout << "Apartment and house are NOT equivalent!" << std::endl;

    Apartment some_other_apartment(3, 100, 1.24, 4, 1500);

    std::cout << some_apt << std::endl;
    std::cout << some_other_apartment << std::endl;
    if (some_apt == some_other_apartment)
        std::cout << "Two apartments are equivalent!" << std::endl;
    else
        std::cout << "Two apartments are NOT equivalent!" << std::endl;

    House some_other_house(5, 3, 1600, true, true, 2, 1500);

    some_house.read_house_details(std::cin);
    std::cout << some_house << std::endl;
    std::cout << some_other_house << std::endl;

    if (some_house == some_other_house)
        std::cout << "Two houses are equivalent!" << std::endl;
    else
        std::cout << "Two houses are NOT equivalent!" << std::endl;


    return 0;
}