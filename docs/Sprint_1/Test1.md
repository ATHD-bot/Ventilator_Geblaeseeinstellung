## Test
### Ziel des Tests in Sprint 1

Standard Funktionalität der Buttons (STUFE[1-3], AUS) und der Ansteuerung des Gebläsemotors soll getestet werden.
Tests stellen sicher dass:
- Die Logikabfolge korret ist und zeitnah ausgeführt wird
- Das System innerhalb der Systemgrenzen stabil läuft

Folgende Requirments sind dabei im Scope:
- F-Req.:   1, 2, 3, 4, 7, 8, 9
- NF-Req.:  1, 2, 3, 4, 5

### Testfall auf Modulebene


Unit Test (UTx) für alle Buttons und Gebläßemotor

| Function  | Unit Test | Status |
| ------------- | ------------- |  ------------- |
|  S1 | UT1  | PASS  |
|   S2  | UT2  | PASS |
|    S3  |   UT3 | PASS |
|   AUS   |  UT4 | PASS |
|     Geb_Motor |    UT5  | PASS |

### Testfall auf Integrationsebene

Überprüfung der Tasterverhalten und deren Auswirkung auf den Geb_Motor

| Function  | Integrations Test | Status |
| ------------- | ------------- | ------------- |
|  S1 -> Geb_Motor | UT1  | PASS |
|   S2 -> Geb_Motor | UT2  | PASS |
|    S3  -> Geb_Motor |   UT3 | PASS |
|   AUS   -> Geb_Motor |  UT4 | PASS |
