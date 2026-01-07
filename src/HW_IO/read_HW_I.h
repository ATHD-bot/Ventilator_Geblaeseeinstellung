#pragma once

class Button {
public:
    Button(int pin);
    void setZustand(bool state); 
    bool getZustand() const;
private:
    int pin;
    bool Zustand;
};
