## Test 2
### Ziel des Tests in Sprint 2

Standard Funktionalität der Buttons (OSZILLIEREN, STURZERKENNUNG) und der Ansteuerung der Motoren (Gebläße Motor und Oszillieren), sowie Ausgabe auf Display soll getestet werden.
Tests stellen sicher dass:
- Die Logikabfolge korret ist und zeitnah ausgeführt wird
- Das System innerhalb der Systemgrenzen stabil läuft

Folgende Requirments sind dabei im Scope:
- F-Req.:   5, 6, 8, 9, 10, 11, 12, 13, 14
- NF-Req.:  1, 2, 3, 4, 5

## Neue Testfälle
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


## Wiederholte Testfälle aus Sprint 1
Diese Testfälle wurden im Sprint 1 abgedeckt und jetzt auf dem Software Stand von Sprint 2 wiederholt.
(ITx/UTx(S2)) = S2 = durgeführt in Sprint 2

### Testfall auf Modulebene
Unit Test (UTx) für alle Buttons und Gebläßemotor

| Function  | Unit Test | Status |
| ------------- | ------------- |  ------------- |
|  S1 | UT1(S2)  | PASS  |
|   S2  | UT2(S2)  | PASS |
|    S3  |   UT3(S2) | PASS |
|   AUS   |  UT4(S2) | PASS |
|     Geb_Motor |    UT5(S2)  | PASS |

### Testfall auf Integrationsebene

Überprüfung der Tasterverhalten und deren Auswirkung auf den Geb_Motor

| Function  | Integrations Test | Status |
| ------------- | ------------- | ------------- |
|  S1 -> Geb_Motor | IT1(S2)  | PASS |
|   S2 -> Geb_Motor | IT2(S2)  | PASS |
|    S3  -> Geb_Motor |   IT3(S2) | PASS |
|   AUS   -> Geb_Motor |  IT4(S2) | PASS |

## Testfälle aus Sprint 1
Ergebnisse aus Sprint 1 zur Dokumentation / Information:

### Testfall auf Modulebene
(S1) = Sprint 1

Unit Test (UTx) für alle Buttons und Gebläßemotor

| Function  | Unit Test | Status |
| ------------- | ------------- |  ------------- |
|  S1 | UT1(S1)  | PASS  |
|   S2  | UT2(S1)  | PASS |
|    S3  |   UT3(S1) | PASS |
|   AUS   |  UT4(S1) | PASS |
|     Geb_Motor |    UT5(S1)  | PASS |

### Testfall auf Integrationsebene

Überprüfung der Tasterverhalten und deren Auswirkung auf den Geb_Motor

| Function  | Integrations Test | Status |
| ------------- | ------------- | ------------- |
|  S1 -> Geb_Motor | IT1(S1)  | PASS |
|   S2 -> Geb_Motor | IT2(S1)  | PASS |
|    S3  -> Geb_Motor |   IT3(S1) | PASS |
|   AUS   -> Geb_Motor |  IT4(S1) | PASS |

