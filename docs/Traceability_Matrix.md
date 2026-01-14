| Component  | Requirement | Klassen  | Schnittstelle | Testfall |  Scope   |
| ------------- | ------------- | -------------  | ------------- | ------------- | ------------- |
| STUFE1 Schalter | F-Req. 1, F-Req. 4, F-Req. 5, F-Req. 7, F-Req. 8| Button  | asynchron: readS1() (setZustand(), getZustand()) | UT1(S1), UT1(S2), IT1(S1), IT2(S2), IT1(S3), IT2(S3) | Sprint 1 |
| STUFE2 Schalter  | F-Req. 2, F-Req. 4, F-Req. 5, F-Req. 7, F-Req. 8 | Button  | asynchron: readS2() (setZustand(), getZustand()) | UT2(S1), UT2(S2), UT2(S3), IT2(S1), IT2(S2), IT2(S3) | Sprint 1|
| STUFE3 Schalter  | F-Req. 3, F-Req. 4, F-Req. 5, F-Req. 7, F-Req. 8   | Button  | asynchron: readS3() (setZustand(), getZustand()) | UT3(S1), UT3(S2), UT3(S3), IT3(S1), IT3(S2), IT3(S3) | Sprint 1|
| AUS Schalter  | F-Req. 4, F-Req. 7 , F-Req. 8 |Button  | asynchron: readAUS() (setZustand(), getZustand()) | UT4(S1), UT4(S2), UT4(S3), IT4(S1), IT4(S2), IT4(S3) | Sprint 1 |
| OSZILLIEREN Schalter  | F-Req. 5, F-Req. 6, F-Req. 7 , F-Req. 8|Button  | asynchron: readOsz() (setZustand(), getZustand()) | UTOSZ(S2), UTOSZ(S3), ITOSZ1(S2), ITOSZ1(S3) | Sprint 2 |
| Sturzerkennung Taster  | Content Cell, F-Req. 8, F-Req. 12, F-Req. 13, F-Req. 14  | Button  | asynchron: readSTZ() (setZustand(), getZustand()) | UTSTURZ(S2), UTSTURZ(S3), ITSTURZ(S2), ITSTURZ(S3) | Sprint 2 |
| Sicherheitsabschaltung  | F-Req. 8, F-Req. 14  | -  | asynchron: - | UTSTURZ(S2), UTSTURZ(S3), ITSTURZ(S2), ITSTURZ(S3) | Sprint 2 |
| Display  | F-Req. 11  |DEBUG FENSTER  | asynchron: setDisplay() (cout auf Konsole)| UTDISPLAY(S2), UTDISPLAY(S3), ITDISPLAY(S2), ITDISPLAY(S3) | Sprint 2 |
| Gebläsemotor  | F-Req. 8, F-Req. 9  |Motor  | asynchron: setMotor() (writeMotor(), getZustand()) | UT5(S1), UT5(S2), UT5(S3), IT5(S1), IT5(S2), IT5(S3) | Sprint 1 |
| Oszillieren (Motor)  | F-Req. 8, F-Req. 10  |Motor  | asynchron: setOSZ() (writeMotor(), getZustand()) | UTOSZ(S2), UTOSZ(S3), ITOSZ1(S2), ITOSZ1(S3) | Sprint 2 |

Legende: (Sx) hinter den Testfällen, wobei x = {1, 2, 3}, weißt auf den Sprint x hin in dem dieser Testfall getestet wurde
Bei Schnittstelle (text) text in Klammern = Definition im Code


