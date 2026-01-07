#include "read_HW_I.h"
#include "write_HW_O.h"
#include <iostream>
#include <cctype>
#include <string>

int main() {
    Button AUS(4);
    Button S1(1);
    Button S2(2);
    Button S3(3);
    Button OSZILLIEREN(6);
    Button STURZ(8);
    Motor Geb_Motor(5);
    Motor OSZILIEREN_Motor(7);

    std::cout << "=== VENTILATOR-STEUERUNG ===\n";
    std::cout << "Eingabe: 1/2/3 = Geschwindigkeit | o = Oszillieren (toggle) | a = Hauptmotor (toggle) | t = STURZ (toggle) | q = Beenden\n\n";

    while (true) {
        std::cout << ">> ";
        char input;
        std::cin >> input;
        input = std::tolower(input);

        
        if (input == '1' || input == '2' || input == '3') {
            S1.setZustand(false);
            S2.setZustand(false);
            S3.setZustand(false);
        }

        
        switch (input) {
        case '1': S1.setZustand(true); break;
        case '2': S2.setZustand(true); break;
        case '3': S3.setZustand(true); break;
        case 'o': OSZILLIEREN.setZustand(!OSZILLIEREN.getZustand()); break; 
        case 'a': AUS.setZustand(!AUS.getZustand()); break; 
        case 't': STURZ.setZustand(!STURZ.getZustand()); break; 
        case 'q': return 0;
        default:
            std::cout << "Ungueltige Eingabe! (1/2/3/o/a/t/q)\n";
            continue;
        }

        
        if (STURZ.getZustand()) {
            Geb_Motor.writeMotor(0);
            OSZILIEREN_Motor.writeMotor(0);
        }
        else if (AUS.getZustand()) {
            Geb_Motor.writeMotor(0);
            OSZILIEREN_Motor.writeMotor(0);
        }
        else {
            if (S1.getZustand()) Geb_Motor.writeMotor(1);
            else if (S2.getZustand()) Geb_Motor.writeMotor(2);
            else if (S3.getZustand()) Geb_Motor.writeMotor(3);
            else Geb_Motor.writeMotor(0);

            OSZILIEREN_Motor.writeMotor(OSZILLIEREN.getZustand() ? 1 : 0);
        }

        
        std::string sturzState = STURZ.getZustand() ? "AKTIV" : "INAKTIV";
        std::string motorState = Geb_Motor.getZustand() ?
            "AN (Geschw. " + std::to_string(Geb_Motor.getSpeed()) + ")" :
            "AUS";
        std::string oscillateState = OSZILIEREN_Motor.getZustand() ? "AN" : "AUS";

        std::cout << "Hauptmotor: " << motorState
            << " | Oszillier-Motor: " << oscillateState
            << " | STURZ: " << sturzState << "\n\n";
    }
}
