#include "dog.h"
#include "dog-caregiver.h"

int main(int argc, char *argv[]) {

    
    int id = 1; 
    Dog yoDog(id);
    yoDog.bark();
    
    int id2 = 2; 
    Dog heyDog(id2);
    heyDog.bark();
    DogCaregiver caregiver(&yoDog, &heyDog);
    caregiver.makeBark();
}