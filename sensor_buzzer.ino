const int pingPin = 7; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 6; // Echo Pin of Ultrasonic Sensor
int buzzerPin = 8;
int delay_ms = 300; // 500 delay without final delay in loop sounds good
bool continuous = 0;

long microsecondsToInches(long microseconds) {
   return microseconds / 74 / 2;
}

long microsecondsToCentimeters(long microseconds) {
   return microseconds / 29 / 2;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); // Starting Serial Terminal
  pinMode(buzzerPin, OUTPUT);

}

void discrete_mode() {
  // put your main code here, to run repeatedly:
    long duration, inches, cm;
   pinMode(pingPin, OUTPUT);
   digitalWrite(pingPin, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);
   inches = microsecondsToInches(duration);
   cm = microsecondsToCentimeters(duration);
   Serial.print(inches);
   Serial.print("in, ");
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();

 //  if (inches > 0 && inches < 4) 
   if (cm > 0 && cm < 10) {
    tone(buzzerPin, 523); // C4
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
   }
  // else if (inches > 0 && inches < 6) 
  else if (cm > 0 && cm < 15) {
    tone(buzzerPin, 587); // D4
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  // else if (inches > 0 && inches < 8) 
  else if (cm > 0 && cm < 20) {
    tone(buzzerPin, 659); // E4
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  // else if (inches > 0 && inches < 10) 
  else if (cm > 0 && cm < 25) {
    tone(buzzerPin, 698); // F4
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  // else if (inches > 0 && inches < 12) 
  else if (cm > 0 && cm < 30) {
    tone(buzzerPin, 784); // G4
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  //  else if (inches > 0 && inches < 14) 
   else if (cm > 0 && cm < 35) {
    tone(buzzerPin, 880); // A5
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
   }
  //  else if (inches > 0 && inches < 16) 
   else if (cm > 0 && cm < 40) {
    tone(buzzerPin, 988); // B5
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
   }
  //  else if (inches > 0 && inches < 18) 
   else if (cm > 0 && cm < 45) {
    tone(buzzerPin, 1047); // C5
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
   }

  // else if (inches > 0 && inches > 25) 
  else if (cm > 0 && cm > 63) {

  }

}

void continuous_mode() {
  // put your main code here, to run repeatedly:
    long duration, inches, cm;
    int delay_ms = 50;
   pinMode(pingPin, OUTPUT);
   digitalWrite(pingPin, LOW);
   delayMicroseconds(2);
   digitalWrite(pingPin, HIGH);
   delayMicroseconds(10);
   digitalWrite(pingPin, LOW);
   pinMode(echoPin, INPUT);
   duration = pulseIn(echoPin, HIGH);
   inches = microsecondsToInches(duration);
   cm = microsecondsToCentimeters(duration);
   Serial.print(inches);
   Serial.print("in, ");
   Serial.print(cm);
   Serial.print("cm");
   Serial.println();

   int C4 = 523;
   int hz = C4;

  //  if (cm > 0 && cm < 63) {
  //   tone (buzzerPin, cm*12.8 + 513);
  //     delay(delay_ms);
  //     noTone(buzzerPin);
  //  }
  // else if (cm > 0 && cm > 63) {

  // }



   // how to get continuous sound like a real theremin?
  // get derivative of inches over time (absolute value)
  // if derivative large, hand is moving fast, smaller delay?
  // if derivative small, hand is moving slow, longer delay?
  // link derivative and delay in a formula? an inverse function?
  // this should improve the constant formula sound bc slower delay means less agitated sound

}

void loop() {

  if (!continuous) {
    discrete_mode();
  }
  else {
    continuous_mode();

  }
  
  //  delay(delay_ms);


}
