#ifndef DOGCAREGIVER_H
#define DOGCAREGIVER_H

#include "dog.h"

class DogCaregiver {
    private:
        Dog* firstDog;
        Dog* secondDog;
    public:
        DogCaregiver(Dog* firstDog, Dog* secondDog);
        void makeBark();
};

#endif