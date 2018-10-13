#include "dog-caregiver.h"

DogCaregiver::DogCaregiver(Dog* firstDog, Dog* secondDog) {
    this->firstDog = firstDog;
    this->secondDog = secondDog;
}

void DogCaregiver::makeBark(){
    (this->firstDog)->bark();
    (this->secondDog)->bark();
}