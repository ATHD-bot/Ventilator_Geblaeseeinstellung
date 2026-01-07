#pragma once

class Motor {
public:
    Motor(int pin);
    void writeMotor(int val);
    bool getZustand() const;
    int getSpeed() const;
private:
    int pin;
    bool Zustand;
    int speed;
};

class Display {
public:
    Display(int pin);
    void writeDisplay(bool text[32]);
private:
    int pin;
};
