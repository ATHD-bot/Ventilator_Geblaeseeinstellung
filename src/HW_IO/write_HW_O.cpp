#include "write_HW_O.h"

class Motor {
int pin;
bool Zustand = false;
public:
Motor(int pin) : pin(pin) {}

void writeMotor(int val)
{
  //Fiktive Funktion zum Wert an Motorsteuerung übermitteln
  Zustand = val;
}

}


class Display {
int pin;
bool[32] Text;
public:
Display(int pin) : pin(pin) {}

void write Display(bool[32] Text)
{
  //Fiktiver Write auf ein Display z.B. 2x16
}
}
