## Komponentendiagramm

<img width="1032" height="612" alt="SE_ARC_3" src="https://github.com/user-attachments/assets/5bb7f99c-d581-43ee-923c-9a3eaf32c3f9" />


| Component  | Requirement |
| ------------- | ------------- |
| STUFE1 Schalter | F-Req. 1, F-Req. 4, F-Req. 5, F-Req. 7, F-Req. 8|
| STUFE2 Schalter  | F-Req. 2, F-Req. 4, F-Req. 5, F-Req. 7, F-Req. 8 |
| STUFE3 Schalter  | F-Req. 3, F-Req. 4, F-Req. 5, F-Req. 7, F-Req. 8   |
| AUS Schalter  | F-Req. 4, F-Req. 7 , F-Req. 8 |
| OSZILLIEREN Schalter  | F-Req. 5, F-Req. 6, F-Req. 7 , F-Req. 8|
| Sturzerkennung Taster  | Content Cell, F-Req. 8, F-Req. 12, F-Req. 13, F-Req. 14  |
| µC Abstraktion | F-Req. 8  |
| Sicherheitsabschaltung  | F-Req. 8, F-Req. 14  |
| Display  | F-Req. 11  |
| Gebläsemotor  | F-Req. 8, F-Req. 9  |
| Oszillieren (Motor)  | F-Req. 8, F-Req. 10  |

## Verantworltichkeit der Komponenten
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




|    Eingabe             |Schnittstelle|       |   Verarbeitung         |Schnittstelle |  |    Ausgabe         |Schnittstelle|  |
| -------------          |------|              |   -------------        |------        |  | -------------      |------|         |
| STUFE1 Schalter        |      |              | µC                     |              |  |    Display         |      |         |
| STUFE2 Schalter        |      |              | Sicherheitsabschaltung |              |  |  Gebläsemotor      |      |         |
| STUFE3 Schalter        |      |              |                        |              |  | Oszillieren (Motor)|      |         |
| AUS Schalter           |      |              |                        |              |  |                    |      |         |
| OSZILLIEREN Schalter   |      |              |                        |              |  |                    |      |         |
| Sturzerkennung Taster  |      |              |                        |              |  |                    |      |         |
