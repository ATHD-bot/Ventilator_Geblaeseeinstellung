#include "read_HW_I.h"

//HW Funktionen sind nur fiktiv, da keine HW vorhanden
class Button {
int pin;
bool Zustand = false;
public:
  Button(int pin) : pin(pin) {}

  bool readS(void)
{
 //fiktive Funktion zum einlesen des aktuellen Zustands
  //Zustand = xy;
}

bool getZustand()
{
  return Zustand;
}

}
