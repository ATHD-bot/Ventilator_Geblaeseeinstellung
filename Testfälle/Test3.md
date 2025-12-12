## Test
### Ziel des Tests in Sprint 3

Gesamtfunktionalität des Systems wird getestet. Dabei werden sämtliche Tests aus Test1 und Test2 wiederholt.
Tests stellen sicher dass:
- Die Logikabfolge korret ist und zeitnah ausgeführt wird
- Das System innerhalb der Systemgrenzen stabil läuft

Dabei sind folgende Requirements im Scope:
- F-Req.: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14
- NF-Req.: 1, 2, 3, 4, 5

### Testfall auf Modulebene

Überprüfung der einzelenen Komponenten

| Function  | Unit Test | Status |
| ------------- | ------------- |  ------------- |
|  S1 | UT1  | PASS  |
|   S2  | UT2  | PASS |
|    S3  |   UT3 | PASS |
|   AUS   |  UT4 | PASS |
|     Geb_Motor |    UT5  | PASS |
|  OSZILLIEREN | UTOSZ  | PASS  |
|   STURZERKENNUNG  | UTSTURZ  | PASS |
|    DISPLAY  |   UTDISPLAY | PASS |

### Testfall auf Integrationsebene

Überprüfung des Gesamtsystems

| Function  | Integrations Test | Status |
| ------------- | ------------- | ------------- |
|  S1 -> Geb_Motor | IT1  | PASS |
|   S2 -> Geb_Motor | IT2  | PASS |
|    S3  -> Geb_Motor |   IT3 | PASS |
|   AUS   -> Geb_Motor |  IT4 | PASS |
|  OSZILLIEREN -> Motor_OSZILLIEREN | ITOSZ1  | PASS |
|   STURZERKENNUNG -> Geb_Motor, OSZILLIEREN | ITSTURZ  | PASS |
|    S1, S2, S3, AUS, OSZILLIEREN -> Display |   ITDISPLAY | PASS |
