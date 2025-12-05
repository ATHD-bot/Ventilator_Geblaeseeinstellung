## Test
### Ziel des Tests in Sprint 2

Standard Funktionalität der Buttons (OSZILLIEREN, STURZERKENNUNG) und der Ansteuerung der Motoren (Gebläße Motor und Oszillieren), sowie Ausgabe auf Display soll getestet werden.
Tests stellen sicher dass:
- Die Logikabfolge korret ist und zeitnah ausgeführt wird
- Das System innerhalb der Systemgrenzen stabil läuft

Folgende Requirments sind dabei im Scope:
- F-Req.:   5, 6, 8, 9, 10, 11, 12, 13, 14
- NF-Req.:  1, 2, 3, 4, 5

### Testfall auf Modulebene


Unit Test (UTx) für OSZILLIEREN, DISPLAY und STURZERKENNUNG

| Function  | Unit Test | Status |
| ------------- | ------------- |  ------------- |
|  OSZILLIEREN | UTOSZ  | PASS  |
|   STURZERKENNUNG  | UTSTURZ  | PASS |
|    DISPLAY  |   UTDISPLAY | PASS |

### Testfall auf Integrationsebene

Überprüfung der OSZILLIEREN und STURZERKENNUNG auf die MOTOREN, sowie die Ausgabe auf dem Display.

| Function  | Integrations Test | Status |
| ------------- | ------------- | ------------- |
|  OSZILLIEREN -> Motor_OSZILLIEREN | ITOSZ1  | PASS |
|   STURZERKENNUNG -> Geb_Motor, OSZILLIEREN | ITSTURZ  | PASS |
|    S1, S2, S3, AUS, OSZILLIEREN -> Display |   ITDISPLAY | PASS |
