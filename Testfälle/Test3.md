## Test
### Ziel des Tests in Sprint 3

Gesamtfunktionalität des Systems wird getestet. Dabei werden sämtliche Tests aus Test1 und Test2 wiederholt.
Tests stellen sicher dass:
- Die Logikabfolge korret ist und zeitnah ausgeführt wird
- Das System innerhalb der Systemgrenzen stabil läuft

Dabei sind folgende Requirements im Scope:
- F-Req.: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14
- NF-Req.: 1, 2, 3, 4, 5

## Neue Testfälle
## Wiederholung der Testfälle aus Sprint 2 (Sprint 1 inklusive)
Diese Testfälle wurden im Sprint 2 (1) abgedeckt und jetzt auf dem Software Stand von Sprint 3 wiederholt.
(ITx/UTx(S3)) = S3 = durgeführt in Sprint 3

### Testfall auf Modulebene

Überprüfung der einzelenen Komponenten

| Function  | Unit Test | Status |
| ------------- | ------------- |  ------------- |
|  S1 | UT1(S3)  | PASS  |
|   S2  | UT2(S3)  | PASS |
|    S3  |   UT3(S3) | PASS |
|   AUS   |  UT4(S3) | PASS |
|     Geb_Motor |    UT5(S3)  | PASS |
|  OSZILLIEREN | UTOSZ(S3)  | PASS  |
|   STURZERKENNUNG  | UTSTURZ(S3)  | PASS |
|    DISPLAY  |   UTDISPLAY(S3) | PASS |

### Testfall auf Integrationsebene

Überprüfung des Gesamtsystems

| Function  | Integrations Test | Status |
| ------------- | ------------- | ------------- |
|  S1 -> Geb_Motor | IT1(S3)  | PASS |
|   S2 -> Geb_Motor | IT2(S3)  | PASS |
|    S3  -> Geb_Motor |   IT3(S3) | PASS |
|   AUS   -> Geb_Motor |  IT4(S3) | PASS |
|  OSZILLIEREN -> Motor_OSZILLIEREN | ITOSZ1(S3)  | PASS |
|   STURZERKENNUNG -> Geb_Motor, OSZILLIEREN | ITSTURZ(S3)  | PASS |
|    S1, S2, S3, AUS, OSZILLIEREN -> Display |   ITDISPLAY(S3) | PASS |
| Sx -> µC Abstraktion -> Geb_Motor, OSZILLIEREN, Display| ITµC(S3) | PASS |








# Sprint History:


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

====================================================================================

## Testfälle aus Sprint 2
### Testfall auf Modulebene

Unit Test (UTx) für OSZILLIEREN, DISPLAY und STURZERKENNUNG

| Function  | Unit Test | Status |
| ------------- | ------------- |  ------------- |
|  OSZILLIEREN | UTOSZ(S2)  | PASS  |
|   STURZERKENNUNG  | UTSTURZ(S2)  | PASS |
|    DISPLAY  |   UTDISPLAY(S2) | PASS |

### Testfall auf Integrationsebene

Überprüfung der OSZILLIEREN und STURZERKENNUNG auf die MOTOREN, sowie die Ausgabe auf dem Display.

| Function  | Integrations Test | Status |
| ------------- | ------------- | ------------- |
|  OSZILLIEREN -> Motor_OSZILLIEREN | ITOSZ1(S2)  | PASS |
|   STURZERKENNUNG -> Geb_Motor, OSZILLIEREN | ITSTURZ(S2)  | PASS |
|    S1, S2, S3, AUS, OSZILLIEREN -> Display |   ITDISPLAY(S2) | PASS |


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
