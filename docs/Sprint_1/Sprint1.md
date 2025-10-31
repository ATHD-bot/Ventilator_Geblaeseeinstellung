# Sprint 1:

Scope: Implementierung der ersten Standard Funktionen eines Ventilators (STUFE[1-3], STUFE AUS, Ansteuerung Gebläsemotor)

# Traceability Matrix Sprint 1:

| Component  | Requirement | Klassen  | Schnittstelle | Testfall | 
| ------------- | ------------- | -------------  | ------------- | ------------- |
| STUFE1 Schalter | F-Req. 1, F-Req. 4, F-Req. 5, F-Req. 7, F-Req. 8| Button  | asynchron: readS1() | TBD | 
| STUFE2 Schalter  | F-Req. 2, F-Req. 4, F-Req. 5, F-Req. 7, F-Req. 8 | Button  | asynchron: readS2() | TBD | 
| STUFE3 Schalter  | F-Req. 3, F-Req. 4, F-Req. 5, F-Req. 7, F-Req. 8   | Button  | asynchron: readS3() | TBD | 
| AUS Schalter  | F-Req. 4, F-Req. 7 , F-Req. 8 |Button  | asynchron: readAUS() | TBD | 
| Gebläsemotor  | F-Req. 8, F-Req. 9  |Actor  | asynchron: setMotor() | TBD | 


# Klassendiagramm


<img width="958" height="580" alt="Screenshot 2025-10-31 083120" src="https://github.com/user-attachments/assets/a8ce3e0a-94a3-4a0a-bc0e-aec25156c457" />


# Zustandsdiagramm

<img width="503" height="467" alt="Screenshot 2025-10-31 091226" src="https://github.com/user-attachments/assets/7268d729-78ba-4104-9f46-e10188f0ba29" />


# Sequenzdiagramm

<img width="897" height="471" alt="Screenshot 2025-10-31 185616" src="https://github.com/user-attachments/assets/52bfef0b-b0fb-434d-bcb2-cbbc83c38818" />


# Kommunikationsdiagramm

User -> µC: readS1(), readS2(), readS3(), readAUS()

µC   -> Gebläsemotor: setMotor()


