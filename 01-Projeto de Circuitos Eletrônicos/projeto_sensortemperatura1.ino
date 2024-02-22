// C++ code
//

int PinRoj = 8;
int PinAzu = 9;
int PinVer = 10;
int pinTMP = 0;

int valorTMP = 0;

void setup ()
{ 
   pinMode(PinRoj, OUTPUT);
   pinMode(PinAzu, OUTPUT);
   pinMode(PinVer, OUTPUT);


   Serial.begin(9600); 

   digitalWrite(PinRoj, HIGH);
   digitalWrite(PinAzu, LOW);
   digitalWrite(PinVer, LOW);
}

void loop()
{

   valorTMP= analogRead(pinTMP);
   
   Serial.print("Valor TMP := ");
   Serial.println(valorTMP);
   
   if(valorTMP <=125)
   {
     digitalWrite(PinRoj, HIGH);
     digitalWrite(PinAzu, LOW);
     digitalWrite(PinVer, LOW);
   }
   
   if(valorTMP >125 and valorTMP <= 160)
   {
     digitalWrite(PinRoj, HIGH);
     digitalWrite(PinAzu, LOW);
     digitalWrite(PinVer, LOW);
   }

   if(valorTMP > 160)
   {
     digitalWrite(PinRoj, HIGH);
     digitalWrite(PinAzu, LOW);
     digitalWrite(PinVer, LOW);
   }
}
