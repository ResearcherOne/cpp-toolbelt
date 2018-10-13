#include "dog.h"
#include <stdio.h>

Dog::Dog(int id) {
    this->idTag = id;
}

void Dog::bark() {
    printf("%d: Bark Bark! \n", this->idTag);
}