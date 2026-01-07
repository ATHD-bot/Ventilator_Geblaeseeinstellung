#include "write_HW_O.h"


Motor::Motor(int pin) : pin(pin), Zustand(false), speed(0) {}
void Motor::writeMotor(int val) {
    speed = val;
    Zustand = (val != 0);
}
bool Motor::getZustand() const {
    return Zustand;
}
int Motor::getSpeed() const {
    return speed;
}


Display::Display(int pin) : pin(pin) {} 
void Display::writeDisplay(bool text[32]) {}
