const int pingPin = 7; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 6; // Echo Pin of Ultrasonic Sensor
int buzzerPin = 8;
int delay_ms = 200; // 500 delay without final delay in loop sounds good
bool continuous = 1;
int last_delay = delay_ms;
int last_cm = 10;

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
   if (cm > 0 && cm < 3) {
    Serial.print("GGGGGGGGGGGGG");
    tone(buzzerPin, 392); // G
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
   Serial.println();
   }
  // else if (inches > 0 && inches < 6) 
  else if (cm > 0 && cm < 6) {
    Serial.print("AAAAAAAAAAAAA");
    tone(buzzerPin, 440); // A
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  // else if (inches > 0 && inches < 8) 
  else if (cm > 0 && cm < 9) {
    Serial.print("BBBBBBBBBBBBB");
    tone(buzzerPin, 494); // B
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  // else if (inches > 0 && inches < 10) 
  else if (cm > 0 && cm < 12) {
    Serial.print("CCCCCCCCCCCCC");
    tone(buzzerPin, 523); // C4
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  // else if (inches > 0 && inches < 12) 
  else if (cm > 0 && cm < 15) {
    Serial.print("DDDDDDDDDDDDD");
    tone(buzzerPin, 587); // D4
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  //  else if (inches > 0 && inches < 14) 
   else if (cm > 0 && cm < 18) {
    Serial.print("EEEEEEEEEEEEE");
    tone(buzzerPin, 659); // E4
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
   }
  //  else if (inches > 0 && inches < 16) 
   else if (cm > 0 && cm < 21) {
    Serial.print("FFFFFFFFFFFFF");
    tone(buzzerPin, 698); // F4
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
   }
  //  else if (inches > 0 && inches < 18) 
   else if (cm > 0 && cm < 24) {
    Serial.print("GGGGGGGGGGGGG");
    tone(buzzerPin, 784); // G4
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
   }

  // else if (inches > 0 && inches > 25) 
  else if (cm > 0 && cm < 27) {
    Serial.print("AAAAAAAAAAAAA");
    tone(buzzerPin, 880); // A5
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }

  else if (cm > 0 && cm < 30) {
    Serial.print("BBBBBBBBBBBBB");
    tone(buzzerPin, 988); // B5
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone

  }
  else if (cm > 0 && cm < 33) {
    Serial.print("CCCCCCCCCCCCC");
    tone(buzzerPin, 1047); // C5
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone

  }
  else if (cm > 0 && cm < 36) {
    Serial.print("DDDDDDDDDDDDD");
    tone(buzzerPin, 1175); // D
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  else if (cm > 0 && cm < 39) {
    Serial.print("EEEEEEEEEEEEE");
    tone(buzzerPin, 1319); // E
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  else if (cm > 0 && cm < 42) {
    Serial.print("FFFFFFFFFFFFF");
    tone(buzzerPin, 1397); // F
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  else if (cm > 0 && cm < 45 ) {
    Serial.print("GGGGGGGGGGGGG");
     tone(buzzerPin, 1568); // G
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  else if (cm > 63) {

  }

}

void continuous_mode() {
  // put your main code here, to run repeatedly:
    long duration, inches, cm;
    // int delay_ms = 50;
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

  // set delay based on measured derivative
  // initially 300
  
  Serial.print("cm - last_cm: ");
  Serial.print(cm-last_cm);
  Serial.print(" last_delay: ");
  Serial.print(last_delay);

  // float derivative = abs((float)(cm - last_cm)/(float)last_delay);
  // delay_ms = (int) 1/derivative * 5;
  float derivative = abs((float)(cm - last_cm));
  Serial.print("derivative: ");
  Serial.print(derivative);
  Serial.println();
  if (derivative < 3) {
    delay_ms = (int) (200- 100 * derivative/3);
  }
  else if (derivative < 6) {
    delay_ms = (int) (150- 50*derivative /3);
  }
  else {
    delay_ms = 50;
  }

  Serial.print(" delay_ms: ");
  Serial.print(delay_ms);
  if (delay_ms < 20) {
    delay_ms = 20;
  }
  else if (delay_ms > 200) {
    delay_ms = 200;
  }
  // delay_ms should be between [100,500] so it sounds good and isn't too long

  // Serial.print(" modified delay_ms: ");
  // Serial.print(delay_ms);
  // Serial.println();

  // buffer to detect note hold
  // if new note same as previous 3, increase delay

   //  if (inches > 0 && inches < 4) 
   if (cm > 0 && cm < 3) {
    Serial.print("GGGGGGGGGGGGG");
    tone(buzzerPin, 392); // G
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
   Serial.println();
   }
  // else if (inches > 0 && inches < 6) 
  else if (cm > 0 && cm < 6) {
    Serial.print("AAAAAAAAAAAAA");
    tone(buzzerPin, 440); // A
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  // else if (inches > 0 && inches < 8) 
  else if (cm > 0 && cm < 9) {
    Serial.print("BBBBBBBBBBBBB");
    tone(buzzerPin, 494); // B
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  // else if (inches > 0 && inches < 10) 
  else if (cm > 0 && cm < 12) {
    Serial.print("CCCCCCCCCCCCC");
    tone(buzzerPin, 523); // C4
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  // else if (inches > 0 && inches < 12) 
  else if (cm > 0 && cm < 15) {
    Serial.print("DDDDDDDDDDDDD");
    tone(buzzerPin, 587); // D4
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  //  else if (inches > 0 && inches < 14) 
   else if (cm > 0 && cm < 18) {
    Serial.print("EEEEEEEEEEEEE");
    tone(buzzerPin, 659); // E4
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
   }
  //  else if (inches > 0 && inches < 16) 
   else if (cm > 0 && cm < 21) {
    Serial.print("FFFFFFFFFFFFF");
    tone(buzzerPin, 698); // F4
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
   }
  //  else if (inches > 0 && inches < 18) 
   else if (cm > 0 && cm < 24) {
    Serial.print("GGGGGGGGGGGGG");
    tone(buzzerPin, 784); // G4
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
   }

  // else if (inches > 0 && inches > 25) 
  else if (cm > 0 && cm < 27) {
    Serial.print("AAAAAAAAAAAAA");
    tone(buzzerPin, 880); // A5
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }

  else if (cm > 0 && cm < 30) {
    Serial.print("BBBBBBBBBBBBB");
    tone(buzzerPin, 988); // B5
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone

  }
  else if (cm > 0 && cm < 33) {
    Serial.print("CCCCCCCCCCCCC");
    tone(buzzerPin, 1047); // C5
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone

  }
  else if (cm > 0 && cm < 36) {
    Serial.print("DDDDDDDDDDDDD");
    tone(buzzerPin, 1175); // D
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  else if (cm > 0 && cm < 39) {
    Serial.print("EEEEEEEEEEEEE");
    tone(buzzerPin, 1319); // E
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  else if (cm > 0 && cm < 42) {
    Serial.print("FFFFFFFFFFFFF");
    tone(buzzerPin, 1397); // F
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  else if (cm > 0 && cm < 45 ) {
    Serial.print("GGGGGGGGGGGGG");
     tone(buzzerPin, 1568); // G
    delay(delay_ms); // Wait for 1 second (1000 milliseconds)
    noTone(buzzerPin); // Stop the tone
  }
  else if (cm > 45) {

  }

  last_cm = cm;
  last_delay = delay_ms;

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
