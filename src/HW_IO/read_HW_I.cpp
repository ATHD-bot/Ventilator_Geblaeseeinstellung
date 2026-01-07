#include "read_HW_I.h"

Button::Button(int pin) : pin(pin), Zustand(false) {}

void Button::setZustand(bool state) {
    Zustand = state;
}

bool Button::getZustand() const {
    return Zustand;
}
