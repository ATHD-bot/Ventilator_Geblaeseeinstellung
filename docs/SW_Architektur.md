## Komponentendiagramm

<img width="1032" height="612" alt="SE_ARC_3" src="https://github.com/user-attachments/assets/5bb7f99c-d581-43ee-923c-9a3eaf32c3f9" />




## Verantwortlichkeit der Komponenten
| Component  | Rolle | Verantwortlichkeiten |
| ------------- | ------------- | -----------|
| STUFE1 Schalter | User Interface| User Interaktion |
| STUFE2 Schalter  |User Interface | User Interaktion|
| STUFE3 Schalter  | User Interface |  User Interaktion|
| AUS Schalter  | User Interface| User Interaktion |
| OSZILLIEREN Schalter  | User Interface | User Interaktion|
| Sturzerkennung Taster  |  Input | Sicherheitsabschaltung |
| µC Abstraktion  | Hardware Interface | Simulation HW|
| Sicherheitsabschaltung  | Aktor  | Sicherheitsabschaltung |
| Display  | User Interface  | User Interaktion|
| Gebläsemotor  | Aktor | Lüfterdrehzahl |
| Oszillieren (Motor)  | Aktor | Oszillieren |

## Schnittstellendokumentation

### Methode: asynchron: readS1()
Beschreibung: Liefert aktuellen Zustand des Schalters STUFE1

Parameter: keine

Rückgabewert: bool

### Methode: asynchron: readS2()
Beschreibung: Liefert aktuellen Zustand des Schalters STUFE2

Parameter: keine

Rückgabewert: bool

### Methode: asynchron: readS3()
Beschreibung: Liefert aktuellen Zustand des Schalters STUFE3

Parameter: keine

Rückgabewert: bool

### Methode: asynchron: readAUS()
Beschreibung: Liefert aktuellen Zustand des Schalters AUS

Parameter: keine

Rückgabewert: bool

### Methode: asynchron: readOsz()
Beschreibung: Liefert aktuellen Zustand des Schalters OSZILLIEREN

Parameter: keine

Rückgabewert: bool

### Methode: asynchron: readSTZ()
Beschreibung: Liefert aktuellen Zustand des Sturzerkennung Taster

Parameter: keine

Rückgabewert: bool

### Methode: asynchron: µC_main()
Beschreibung: Main Funktion

Parameter: keine

Rückgabewert: int

### Methode: asynchron: SAFETY_main()
Beschreibung: Interrupt Funktion für Sicherheitsabschaltung

Parameter: keine

Rückgabewert: bool

### Methode: asynchron: setDisplay()
Beschreibung: Anzeigen der aus F-Req 11 gennanten Daten

Parameter: Gebläsestufe[0-3], Oszillieren[0-1] -> (int, int)

Rückgabewert: void

### Methode: asynchron: setMotor()
Beschreibung: Stellt den Gebläsemotor ein

Parameter: int STUFE

Rückgabewert: void

### Methode: asynchron: readOSZ()
Beschreibung: Stellt Oszillieren EIN/AUS

Parameter: bool

Rückgabewert: void

