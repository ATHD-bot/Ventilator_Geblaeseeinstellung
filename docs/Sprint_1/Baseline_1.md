## Baseline Dokumentation für Sprint 1

Die Steuerung Venitlator Gebläsemotor ist ein sehr einfaches Programm, welches mittels
4 Schalter STUFE[1-3] und AUS sowie einem Schalter fürs OSZILLIEREN und einem SIcherheitsschalter 
fürs KIPPEN ausgestatet ist. Als Ausgabe stehen der Gebläsemotor sowie die Oszilieren Funktion zur Verfügung.

Im Sprint 1 wurden nur die Schalter STUFE[1-3], AUS und der Gebläsemotor beachtet.
Diese wurden als Objekte in C++ implementiert und werden mittels deren Funktionen 
readS() und writeMotor() ausgelesen/angesprochen.

### Komponenten Sprint 1
-4 Taster: STUFE[1-3], AUS
-1 Aktor: Gebläsemotor

### Schnittstellen:
- Taster: readS()
- Gebläsemotor: writeMotor()

### Abhängigkeiten
- Motor ist vom Input der Taster abhängig

### Skalierbarkeit
- Code lässt sich auf verschiedene ANzahl von Taster und Motoren erweitern

### Technologistack
- fiktiver Mikrocontroller
- Motoren: 1x DC Motor
- UserInterface: 4 Taster

### Dokumentation
- C++ Code ist an den enstprechenden Stellen kommentiert
- Nachvollziehbarkeit des Projektverlaufs durch die Dokumentation in git (Traceability Matrix, Sprint 1, Lastenheft, Pflichtenheft)

### Design Entscheidung:
- Es wurde ein fiktiver Mikrocontroller gewählt um die Komplexität des Systems so gering wie möglich zu halten, um Kosten zu reduzieren, um leciht SW Änderungen vorzunehmen

### Erkenntnisse
- Evtl. wäre eine funktionale Programmierung in C besser gewesen
