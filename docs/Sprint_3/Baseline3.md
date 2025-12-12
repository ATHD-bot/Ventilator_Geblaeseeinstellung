# Baseline Dokumentation – Sprint 3

##  Kurzbeschreibung

Im Sprint 3 wurde die Gesamtfunktionalität des Ventilatorsystems vollständig implementiert und getestet.

- Display-Steuerung:
  - Aktuell gedrücktem Taster (STUFE[1–3], AUS, OSZILLIEREN)
  - Lüftungsstufe (1–3)
  - Oszillationsstatus (aktiv/inaktiv)
  - Sturzerkennung (Warnung bei Sturz)
- Zusammenhängende Steuerlogik zwischen Tastereingaben, Motorsteuerung, Oszillation und Sicherheitsfunktion
- Test der Gesamtfunktionalität unter verschiedenen Bedingungen (z. B. Sturz, Stufenwechsel, Oszillation)


Die Architektur bleibt modular, skalierbar und basiert weiterhin auf einem fiktiven Mikrocontroller.

---

## Komponenten

| Komponente               | Typ         | Funktion |
|--------------------------|-------------|---------|
| STUFE[1–3], AUS          | Taster      | Steuerung der Lüftungsstufen und Abschaltung |
| OSZILLIEREN              | Taster      | Aktiviert/deaktiviert die Oszillationsbewegung |
| Gebläsemotor             | Aktor       | Luftstrom |
| Oszillationsmotor         | Aktor       | Servo-Motor zur Drehbewegung des Ventilators |
| STURZERKENNUNG Taster    | Taster      | Erkennung von Stürzen  |
| Display  | Ausgabegerät | Anzeige des aktuellen Tastereingangs, Stufe, Oszillation, Warnungen |

---

## Schnittstellen

| Komponente             | Funktion                     | Beschreibung |
|------------------------|------------------------------|-------------|
| `readS()`              | `bool`                       | Liest den Zustand eines Tasters (gedrückt/losgelassen) |
| `setMotorSpeed(int speed)` | `void`                    | Setzt die Drehzahl des Gebläsemotors (0–100%) |
| `toggleOscillation(bool on)` | `void`                 | Aktiviert/deaktiviert die Oszillationsfunktion |
| `isFallDetected()`     | `bool`                       | Gibt `true` zurück, falls ein Sturz erkannt wurde |
| `updateDisplay(string line1, string line2)` | `void` | Aktualisiert beide Zeilen des Displays |

---

## Abhängigkeiten

- Motor hängt ab von:
  - Taster STUFE[1–3], AUS
  - Zustand des Tasters OSZILLIEREN
  - Sturzerkennung

- Oszillationsfunktion hängt ab von:
  - Zustand des Tasters OSZILLIEREN
  - Aktivität des Motors (Geb_Motor muss laufen)

- Display aktualisiert sich dynamisch basierend auf:
  - Aktuell gedrücktem Taster
  - Lüftungsstufe (1–3)
  - Oszillationsstatus
  

---

## Skalierbarkeit

- Die Architektur ist modular und erweiterbar:
  - Neue Taster, Sensoren oder Motoren können einfach hinzugefügt werden
  - Klassen wie `Taster`, `Motor`, `Sensor`, `Display` sind unabhängig und testbar
  - Zustandsverwaltung ist zentralisiert
  - Die Logik ist leicht anpassbar für andere Geräte

---

## Technologiestack

- Mikrocontroller: Fiktiver Mikrocontroller (zur Vereinfachung der Entwicklung)
- Motoren:
  - 1x DC-Motor (Gebläsemotor)
  - 1x Servo-Motor (Oszillation)
- Benutzeroberfläche:
  - LCD-Display (16x2)
  - Taster (STUFE[1–3], AUS, OSZILLIEREN)
- **Programmiersprache**: C++ (objektorientiert)

---

## Dokumentation

- Quellcode ist an zentralen Stellen
- Projektverlauf ist nachvollziehbar durch:
  - Git-Repository mit Commit-Historie
  - Traceability Matrix (Anforderungen → Implementierung)
  - Aktualisierte Dokumente: Lastenheft, Pflichtenheft, Sprint-3-Planung
- Testberichte sind im Testfälle Ordner hinterlegt

---

## Design-Entscheidungen

- Fiktiver Mikrocontroller gewählt, um:
  - Kosten zu minimieren
  - Hardwareabhängigkeiten zu vermeiden
  - Fokus auf Softwarelogik und Architektur zu legen
- Display-Update-Logik ist asynchron und gibt Änderungen sofort aus
- Sicherheitsmechanismus:
  - Bei Sturz → Motor wird sofort abgeschaltet
- Display-AUsgabe verbessert Benutzerfreundlichkeit
---

## Erkenntnisse aus Sprint 3

- Die Gesamtfunktionalität ist erfolgreich implementiert und getestet:
  - Alle Taster funktionieren korrekt
  - Motor reagiert mit richtiger Drehzahl bei Stufenwechsel
  - Oszillation startet nur bei laufendem Motor
  - Sturzerkennung löst korrekt aus und schaltet den Motor ab
- Das Display ist ein entscheidender Bestandteil der Benutzerführung:
  - Bietet sofortige Rückmeldung über Systemstatus
