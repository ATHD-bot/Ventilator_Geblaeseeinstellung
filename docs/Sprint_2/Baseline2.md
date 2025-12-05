# Baseline Dokumentation – Sprint 2

---

##  Kurzbeschreibung

Im Sprint 2 wurde die Ventilator-Steuerung um folgende Funktionen erweitert:
- Taster **OSZILLIEREN** zur Aktivierung der Oszillationsfunktion   
- **Sturzerkennung** mittels Taster  
  

Die Architektur bleibt modular und skalierbar, basierend auf einem fiktiven Mikrocontroller.

---

##  Komponenten

| Komponente               | Typ         | Funktion |
|--------------------------|-------------|---------|
| STUFE[1–3], AUS          | Taster      | Steuerung der Lüftungsstufen und Abschaltung |
| OSZILLIEREN              | Taster      | Aktiviert/deaktiviert die Oszillationsbewegung |
| Gebläsemotor             | Aktor       | PWM-gesteuerter DC-Motor für Luftstrom |
| Oszillationsmotor         | Aktor       | Servo-Motor zur Drehbewegung des Ventilators |
| STURZERKENNUNG Taster     | Taster      | Erkennung von Stürzen  |
| Display (z. B. 16x2 LCD) | Ausgabegerät | Anzeige des aktuellen Tastereingangs und Status |

---

##  Schnittstellen

| Komponente             | Funktion                     | Beschreibung |
|------------------------|------------------------------|-------------|
| `readOSZ()`              | `bool`                       | Liest den Zustand eines Tasters (gedrückt/losgelassen) |
| `setOSZ()` | `void`             | Aktiviert/deaktiviert die Oszillationsfunktion |
| `readSTURZ()`     | `bool`                       | Gibt `true` zurück, falls ein Sturz erkannt wurde |
|`writeDisplay()`| `void`| Schreibt auf das fiktive Display|


---

##  Abhängigkeiten

- **Motor** hängt ab von:
  - Sturzerkennung (bei Sturz: Motor wird automatisch abgeschaltet)

- **Oszillationsfunktion** hängt ab von:
  - Zustand des Tasters OSZILLIEREN
  - Aktivität des Motors (nur aktiv, wenn Motor läuft)

- **Display** aktualisiert sich dynamisch basierend auf:
  - Aktuell gedrücktem Taster
  - Oszillationszustand

---

##  Skalierbarkeit

- Die Architektur ist modular und erweiterbar:
  - Neue Taster, Sensoren oder Motoren können einfach hinzugefügt werden
  - Klassen wie `Taster`, `Motor`, `Sensor`, `Display` sind unabhängig und testbar
  - Die Zustandsverwaltung ist zentralisiert, was die Wartbarkeit verbessert

---

##  Technologiestack

- **Mikrocontroller**: Fiktiver Mikrocontroller (zur Vereinfachung der Entwicklung)
- **Motoren**:  
  - 1x DC-Motor (Gebläsemotor)  
  - 1x Servo-Motor (Oszillation)
- **Benutzeroberfläche**: LCD-Display (16x2), Taster
- **Programmiersprache**: C++ (objektorientiert)


---

##  Dokumentation

- Quellcode ist an zentralen Stellen kommentiert
- Projektverlauf ist nachvollziehbar durch:
  - Git-Repository mit Commit-Historie
  - Traceability Matrix (Anforderungen → Implementierung)
  - Aktualisierte Dokumente: Lastenheft, Pflichtenheft, Sprint-2-Planung


---

##  Design-Entscheidungen

- **Fiktiver Mikrocontroller** gewählt, um:
  - Kosten zu minimieren
  - Hardwareabhängigkeiten zu vermeiden
  - Fokus auf Softwarelogik und Architektur zu legen
- **Modulare Klassenstruktur** ermöglicht Wiederverwendung und Testbarkeit
- **Sicherheitsmechanismus** durch Sturzerkennung:  
  - Bei Sturz → Motor wird automatisch abgeschaltet  
- **Display-Ausgabe** verbessert Benutzerfreundlichkeit

---

##  Erkenntnisse aus Sprint 2

- Die Integration von Sensoren und Ausgabegeräten erfordert robuste Zustandsverwaltung.
- Die Benutzeroberfläche (Display) reduziert Fehlbedienungen und erhöht die Transparenz.
- Die ursprüngliche Architektur ist gut skalierbar und lässt sich problemlos erweitern.

---

 
 Verknüpfung: [Traceability Matrix](docs/Traceability_Matrix.md) | [Sprint 2 Planung](docs/Sprint_2/Sprint2.md)
