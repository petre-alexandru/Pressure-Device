// Include Libraries
#include "Arduino.h"
#include "FSR.h"
#define FSR_PIN_1  A5 //connecting fsr to A5
#define segA 2// connecting segment A to PIN2
#define segB 3// connecting segment B to PIN3
#define segC 4// connecting segment C to PIN4
#define segD 5// connecting segment D to PIN5
#define segE 6// connecting segment E to PIN6
#define segF 7// connecting segment F to PIN7
#define segG 8// connecting segment G to PIN8


FSR fsr(FSR_PIN_1); // setting pin A5 as input


void setup()
{
  Serial.begin(9600);
    while (!Serial) ; // wait for serial port to connect. Needed for native USB
    Serial.println("start");
                  for (int i=0;i<14;i++)
                  {
                                    pinMode(i, OUTPUT);// taking all pins from 0-13 as output
                  }
}

void loop()
{
 float fsrForce = fsr.getForce(); //getting force from sensor
int Force= fsrForce /45 ; //scaling force in [0.0 , 9.9]
    Serial.print(F("Force: ")); Serial.print(Force); Serial.println(F(" [g]"));

int FirstDigit = Force/10;
int SecondDigit = Force-FirstDigit*10;


if (Force > 99){
//digitalWrite(0, HIGH);
digitalWrite(1, LOW); // turning on red led
}
else {
//digitalWrite(0, LOW);
digitalWrite(1, HIGH);// turning on green led
}
digitalWrite(11, HIGH);// turning off decimal point

int Digit = FirstDigit;
digitalWrite(10, HIGH);// turning on first digit
digitalWrite(12, HIGH);// turning off led bar
digitalWrite(9, LOW);//turning off second digit
               if (Digit == 0) 
               {
                digitalWrite(segA, LOW);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, LOW);
                digitalWrite(segE, LOW);
                digitalWrite(segF, LOW);
                digitalWrite(segG, HIGH);
                }
               else if (Digit == 1)  
                {
                digitalWrite(segA, HIGH);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, HIGH);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, HIGH);
                digitalWrite(segG, HIGH);
                }
                else if (Digit == 2)  
                {
                digitalWrite(segA, LOW);
                digitalWrite(segB, LOW);
                digitalWrite(segC, HIGH);
                digitalWrite(segD, LOW);
                digitalWrite(segE, LOW);
                digitalWrite(segF, HIGH);
                digitalWrite(segG, LOW);
                }
               else if (Digit == 3)  
                {
                digitalWrite(segA, LOW);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, LOW);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, HIGH);
                digitalWrite(segG, LOW);
                }
                else if (Digit == 4)  
               {
                digitalWrite(segA, HIGH);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, HIGH);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, LOW);
                digitalWrite(segG, LOW);
                }
                else if (Digit == 5) 
                {
                digitalWrite(segA, LOW);
                digitalWrite(segB, HIGH);
                digitalWrite(segC, LOW);
                digitalWrite(segD, LOW);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, LOW);
                digitalWrite(segG, LOW);
                }
                else if (Digit == 6) 
                {
                digitalWrite(segA, LOW);
                digitalWrite(segB, HIGH);
                digitalWrite(segC, LOW);
                digitalWrite(segD, LOW);
                digitalWrite(segE, LOW);
                digitalWrite(segF, LOW);
                digitalWrite(segG, LOW);
                }
                else if (Digit == 7) 
                {
                digitalWrite(segA, LOW);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, HIGH);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, HIGH);
                digitalWrite(segG, HIGH);
                }
                else if (Digit == 8) 
                {
                digitalWrite(segA, LOW);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, LOW);
                digitalWrite(segE, LOW);
                digitalWrite(segF, LOW);
                digitalWrite(segG, LOW);
                }
                else if (Digit == 9)  
                {
                digitalWrite(segA, LOW);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, LOW);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, LOW);
                digitalWrite(segG, LOW);
                }
                digitalWrite(11, LOW);
                if(Force > 99) {
                digitalWrite(segA, HIGH);
                digitalWrite(segB, HIGH);
                digitalWrite(segC, HIGH);
                digitalWrite(segD, HIGH);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, HIGH);
                digitalWrite(segG, LOW);  
                digitalWrite(11, HIGH);
                }
delay(9);

digitalWrite(11, HIGH);//turning off decimal point
digitalWrite(10, LOW);//turning off first digit
digitalWrite(9, HIGH);//turning on second digit
digitalWrite(12, HIGH);//turning off led bar
Digit = SecondDigit;
               if (Digit == 0) 
               {
                digitalWrite(segA, LOW);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, LOW);
                digitalWrite(segE, LOW);
                digitalWrite(segF, LOW);
                digitalWrite(segG, HIGH);
                }
               else if (Digit == 1)  
                {
                digitalWrite(segA, HIGH);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, HIGH);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, HIGH);
                digitalWrite(segG, HIGH);
                }
                else if (Digit == 2)  
                {
                digitalWrite(segA, LOW);
                digitalWrite(segB, LOW);
                digitalWrite(segC, HIGH);
                digitalWrite(segD, LOW);
                digitalWrite(segE, LOW);
                digitalWrite(segF, HIGH);
                digitalWrite(segG, LOW);
                }
               else if (Digit == 3)  
                {
                digitalWrite(segA, LOW);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, LOW);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, HIGH);
                digitalWrite(segG, LOW);
                }
                else if (Digit == 4)  
               {
                digitalWrite(segA, HIGH);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, HIGH);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, LOW);
                digitalWrite(segG, LOW);
                }
                else if (Digit == 5) 
                {
                digitalWrite(segA, LOW);
                digitalWrite(segB, HIGH);
                digitalWrite(segC, LOW);
                digitalWrite(segD, LOW);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, LOW);
                digitalWrite(segG, LOW);
                }
                else if (Digit == 6) 
                {
                digitalWrite(segA, LOW);
                digitalWrite(segB, HIGH);
                digitalWrite(segC, LOW);
                digitalWrite(segD, LOW);
                digitalWrite(segE, LOW);
                digitalWrite(segF, LOW);
                digitalWrite(segG, LOW);
                }
                else if (Digit == 7) 
                {
                digitalWrite(segA, LOW);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, HIGH);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, HIGH);
                digitalWrite(segG, HIGH);
                }
                else if (Digit == 8) 
                {
                digitalWrite(segA, LOW);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, LOW);
                digitalWrite(segE, LOW);
                digitalWrite(segF, LOW);
                digitalWrite(segG, LOW);
                }
                else if (Digit == 9)  
                {
                digitalWrite(segA, LOW);
                digitalWrite(segB, LOW);
                digitalWrite(segC, LOW);
                digitalWrite(segD, LOW);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, LOW);
                digitalWrite(segG, LOW);
                }
                if(Force > 99) {
                digitalWrite(segA, HIGH);
                digitalWrite(segB, HIGH);
                digitalWrite(segC, HIGH);
                digitalWrite(segD, HIGH);
                digitalWrite(segE, HIGH);
                digitalWrite(segF, HIGH);
                digitalWrite(segG, LOW);  
               
                }

                delay(9);

digitalWrite(10, LOW);//turning off first point
digitalWrite(9, LOW);//turning off second point
digitalWrite(12, LOW);//turning on led bar
digitalWrite(11, HIGH);//turning off decimal point
digitalWrite(8, HIGH);
Digit = FirstDigit;
               if (Digit == 9) 
               {
                digitalWrite(0, HIGH);
                digitalWrite(2, HIGH);
                digitalWrite(3, HIGH);
                digitalWrite(4, HIGH);
                digitalWrite(5, HIGH);
                digitalWrite(6, HIGH);
                digitalWrite(7, HIGH);
                digitalWrite(8, HIGH);
                digitalWrite(13, HIGH);
                digitalWrite(11, LOW);
                
                } 
                else if (Digit == 8) 
               {
                digitalWrite(0, HIGH);
                digitalWrite(2, HIGH);
                digitalWrite(3, HIGH);
                digitalWrite(4, HIGH);
                digitalWrite(5, HIGH);
                digitalWrite(6, HIGH);
                digitalWrite(7, HIGH);
                digitalWrite(8, HIGH);
                digitalWrite(13, LOW);
                digitalWrite(11, LOW);
                }
               else if (Digit == 7) 
               {
                digitalWrite(0, HIGH);
                digitalWrite(2, HIGH);
                digitalWrite(3, HIGH);
                digitalWrite(4, HIGH);
                digitalWrite(5, HIGH);
                digitalWrite(6, HIGH);
                digitalWrite(7, HIGH);
                digitalWrite(8, LOW);
                digitalWrite(13, LOW);
                digitalWrite(11, LOW);
                }
                 else if (Digit == 6) 
               {
                digitalWrite(0, HIGH);
                digitalWrite(2, HIGH);
                digitalWrite(3, HIGH);
                digitalWrite(4, HIGH);
                digitalWrite(5, HIGH);
                digitalWrite(6, HIGH);
                digitalWrite(7, LOW);
                digitalWrite(8, LOW);
                digitalWrite(13, LOW);
                digitalWrite(11, LOW);
                }
                 else if (Digit == 5) 
               {
                digitalWrite(0, HIGH);
                digitalWrite(2, HIGH);
                digitalWrite(3, HIGH);
                digitalWrite(4, HIGH);
                digitalWrite(5, HIGH);
                digitalWrite(6, LOW);
                digitalWrite(7, LOW);
                digitalWrite(8, LOW);
                digitalWrite(13, LOW);
                digitalWrite(11, LOW);
                }
                else if (Digit == 4) 
               {
                digitalWrite(0, HIGH);
                digitalWrite(2, HIGH);
                digitalWrite(3, HIGH);
                digitalWrite(4, HIGH);
                digitalWrite(5, LOW);
                digitalWrite(6, LOW);
                digitalWrite(7, LOW);
                digitalWrite(8, LOW);
                digitalWrite(13, LOW);
                digitalWrite(11, LOW);
                }
                else if (Digit == 3) 
               {
                digitalWrite(0, HIGH);
                digitalWrite(2, HIGH);
                digitalWrite(3, HIGH);
                digitalWrite(4, LOW);
                digitalWrite(5, LOW);
                digitalWrite(6, LOW);
                digitalWrite(7, LOW);
                digitalWrite(8, LOW);
                digitalWrite(13, LOW);
                digitalWrite(11, LOW);
                }
                else if (Digit == 2) 
               {
                digitalWrite(0, HIGH);
                digitalWrite(2, HIGH);
                digitalWrite(3, LOW);
                digitalWrite(4, LOW);
                digitalWrite(5, LOW);
                digitalWrite(6, LOW);
                digitalWrite(7, LOW);
                digitalWrite(8, LOW);
                digitalWrite(13, LOW);
                digitalWrite(11, LOW);
               }
                else if (Digit == 1) 
               {
                digitalWrite(0, HIGH);
                digitalWrite(2, LOW);
                digitalWrite(3, LOW);
                digitalWrite(4, LOW);
                digitalWrite(5, LOW);
                digitalWrite(6, LOW);
                digitalWrite(7, LOW);
                digitalWrite(8, LOW);
                digitalWrite(13, LOW);
                digitalWrite(11, LOW);
                }
                else if (Digit == 0) 
               {
                digitalWrite(0, LOW);
                digitalWrite(2, LOW);
                digitalWrite(3, LOW);
                digitalWrite(4, LOW);
                digitalWrite(5, LOW);
                digitalWrite(6, LOW);
                digitalWrite(7, LOW);
                digitalWrite(8, LOW);
                digitalWrite(13, LOW);
                digitalWrite(11, LOW);
                }
                delay(9);  
                
                if (Force >99) { // blinking led bar and segG if force>99
                 digitalWrite(9, LOW);
                 digitalWrite(10, LOW);
                 digitalWrite(12, LOW); 
                 delay(250);   
                 digitalWrite(9, HIGH);
                 digitalWrite(10, HIGH);
                 digitalWrite(12, HIGH); 
                 delay(250);                   
                }

  }



    
