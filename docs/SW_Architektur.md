## Komponentendiagramm

<img width="1021" height="635" alt="SE_ARC_1" src="https://github.com/user-attachments/assets/7ecaefed-9219-4191-a3e7-01cf64c9748c" />



| Component  | Requirement |
| ------------- | ------------- |
| STUFE1 Schalter | F-Req. 1, F-Req. 4, F-Req. 5, F-Req. 7, F-Req. 8|
| STUFE2 Schalter  | F-Req. 2, F-Req. 4, F-Req. 5, F-Req. 7, F-Req. 8 |
| STUFE3 Schalter  | F-Req. 3, F-Req. 4, F-Req. 5, F-Req. 7, F-Req. 8   |
| AUS Schalter  | F-Req. 4, F-Req. 7 , F-Req. 8 |
| OSZILLIEREN Schalter  | F-Req. 5, F-Req. 6, F-Req. 7 , F-Req. 8|
| Sturzerkennung Taster  | Content Cell, F-Req. 8, F-Req. 12, F-Req. 13, F-Req. 14  |
| µC  | F-Req. 8  |
| Sicherheitsabschaltung  | F-Req. 8, F-Req. 14  |
| Display  | F-Req. 11  |
| Gebläsemotor  | F-Req. 8, F-Req. 9  |
| Oszillieren (Motor)  | F-Req. 8, F-Req. 10  |

## Verantworltichkeit der Komponenten
| Component  | Rolle | Verantwortlichkeiten |
| ------------- | ------------- | -----------|
| STUFE1 Schalter | | |
| STUFE2 Schalter  | ||
| STUFE3 Schalter  |  | |
| AUS Schalter  | | |
| OSZILLIEREN Schalter  | | |
| Sturzerkennung Taster  |   | |
| µC  |  | |
| Sicherheitsabschaltung  |   | |
| Display  |   | |
| Gebläsemotor  |  | |
| Oszillieren (Motor)  |  | |




|    Eingabe             |Schnittstelle|       |   Verarbeitung         |Schnittstelle |  |    Ausgabe         |Schnittstelle|  |
| -------------          |------|              |   -------------        |------        |  | -------------      |------|         |
| STUFE1 Schalter        |      |              | µC                     |              |  |    Display         |      |         |
| STUFE2 Schalter        |      |              | Sicherheitsabschaltung |              |  |  Gebläsemotor      |      |         |
| STUFE3 Schalter        |      |              |                        |              |  | Oszillieren (Motor)|      |         |
| AUS Schalter           |      |              |                        |              |  |                    |      |         |
| OSZILLIEREN Schalter   |      |              |                        |              |  |                    |      |         |
| Sturzerkennung Taster  |      |              |                        |              |  |                    |      |         |
