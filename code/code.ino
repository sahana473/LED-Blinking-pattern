/* Problem Statement:
 *  This program is to generate LED patterns as shown in following video
 *  https://www.facebook.com/watch/?v=437404777682929 
 * 
 * Hardware Component :  
 * Arduino Uno 
 * Led Bargraph
 * 
 * Circuit info: 
 *  D4-D13 of Arduino Uno are connected to LEDs  
 *
 * Author : Sahana B G
 * Date: 30 Apr 2021
 */

// Pins for declaring first and last pins of Arduino Uno
 const unsigned int firstPin = 4;
 const unsigned int lastPin = 13; 

void setup() 
{
  // Configure D4-D13 pins to OUTPUT mode
  for(int i=firstPin;i<=lastPin;i++)
  pinMode(i,OUTPUT);

}

void loop() 
{
  pattern1();
  pattern2();
  pattern3();
  pattern4();
  pattern5();
  pattern6();
  pattern7();
}


void pattern1()
{
  // Generate pattern no 1 
  for(int i=firstPin;i<=lastPin;i++)
  {
  digitalWrite(i,HIGH);  // Set the pin HIGH
  delay(100);           // Wait for a second
  digitalWrite(i,LOW); // Set the pin LOW
  }

  for(int i=lastPin;i>=firstPin;i--)
  {
  digitalWrite(i,HIGH); // Set the pin HIGH
  delay(100);          // Wait for a second
  digitalWrite(i,LOW);// Set the pin LOW
  }
}
void  pattern2()
{
  for(int i=firstPin;i<=lastPin;i++)
  {
  //  Set the pins
  digitalWrite(i,HIGH);  
  digitalWrite(i+1,HIGH);
  digitalWrite(i+2,HIGH);
  delay(100);            // Wait for a second
  digitalWrite(i,LOW);
  digitalWrite(i+1,LOW);
  digitalWrite(i+2,LOW);

  }
  for(int i=lastPin;i>=firstPin;i--)
  {
  //  Set the pins  
  digitalWrite(i,HIGH);
  digitalWrite(i-1,HIGH);
  digitalWrite(i-2,HIGH);
  delay(100);         // Wait for a second
  digitalWrite(i,LOW);
  digitalWrite(i-1,LOW);
  digitalWrite(i-2,LOW);

  }
}

void pattern3()
{
  //Generate pattern no 3
   for(int i=firstPin;i<=lastPin;i++)
   {
    digitalWrite(i,HIGH); //  Set the pin HIGH
     delay(100);    // Wait for a second
   }

   for(int i=lastPin;i>=firstPin;i--)
   {
    digitalWrite(i,LOW); 
    delay(100);     // Wait for a second
   }
}

void pattern4()
{
  // Generate pattern no 4
 for(int i=firstPin;i<=lastPin;i++)
 {
  for(int j=1;j<=i-3 ;j++){ 
    digitalWrite(i,HIGH); //  Set the pin HIGH
    delay(100);           // Wait for a second 
    digitalWrite(i,LOW);  //  Set the pin LOW
    delay(100);           // Wait for a second
  }
 }
}

void pattern5()
{
    // Pattern no 5
    int totalLEDPins = lastPin-firstPin+1; // this variable stores total number of led pin connected to ardunio
    int loopCount = totalLEDPins/2; //this variable stores half of the led pins which is required by the pattern

    for(int i=0;i<loopCount;i++)
    {
      // Set the pins 
      digitalWrite(i+firstPin,HIGH);
      digitalWrite(lastPin-i,HIGH);
      delay(1000); // Wait for a second
    }
    }

void pattern6()
{
    // Pattern no 6
    int totalLEDPins = lastPin-firstPin+1; // this variable stores total number of led pin connected to Ardunio Uno
    int loopCount = totalLEDPins/2; //this variable stores half of the led pins which is required by the pattern

    for(int i=0;i<loopCount;i++)
    {
      // Set the pins
      digitalWrite(i+firstPin,HIGH);
      digitalWrite(lastPin-i,HIGH);
      delay(100);                   // Wait for a second
      digitalWrite(i+firstPin,LOW);
      digitalWrite(lastPin-i,LOW);
    }
    for(int i=loopCount;i>0;i--)
    {
      digitalWrite(i+firstPin-1,HIGH);
      digitalWrite(lastPin-i+1,HIGH);
      delay(100);                  // Wait for a second
      digitalWrite(i+firstPin-1,LOW);
      digitalWrite(lastPin-i+1,LOW);
    }
 }

void pattern7()
{
  // Pattern 7 
  for(int i=lastPin;i>=firstPin;--i)
  {
    for(int j=firstPin;j<=i;++j){
      
      // Set the pins
      digitalWrite(j,HIGH);
      delay(100);          // Wait for a second
      digitalWrite(j,LOW);
    }
    digitalWrite(i,HIGH);
  }
}

 
