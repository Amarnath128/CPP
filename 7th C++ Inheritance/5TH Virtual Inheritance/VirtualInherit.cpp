// Virtual Inheritance
#include <iostream>
using namespace std;

// base class with a speciesName member variable
class Animal {
private:
    string species_name;

public:

    // constructor that accepts 
    // a species name for initialization
    Animal(const string& name) : species_name(name) {
        cout << "Animal constructor called" << endl;
    }

    void show_species() const {
        cout << "This animal belongs to the species: " << species_name << endl;
    }
};

// WingedAnimal class with virtual inheritance from Animal
class WingedAnimal : virtual public Animal {
public:
    // constructor that initializes 
    // the Animal part of WingedAnimal
    WingedAnimal(const string& name) : Animal(name) {
        cout << "WingedAnimal constructor called" << endl;
    }
};

// Mammal class with virtual inheritance from Animal
class Mammal : virtual public Animal {
public:
    // constructor that initializes 
    // the Animal part of Mammal
    Mammal(const string& name) : Animal(name) {
        cout << "Mammals constructor called" << endl;
    }
};

// Bat class inherits from WingedAnimal and Mammal
class Bat : public WingedAnimal, public Mammal {
public:
    // Bat constructor
    // note that Animal's constructor will only be called once
    // due to virtual inheritance.
    Bat() : Animal("Bat"), WingedAnimal("Bat"), Mammal("Bat") {
    }

    void show_info() {
        cout << endl << "It's a unique animal! Here are some details:" << endl;
        
          // show the species_name
          // demonstrating the shared member variable
        show_species();
    }
};

int main() {
    Bat my_bat;
    my_bat.show_info();
    return 0;
}