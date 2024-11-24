const int pingPin = 7; // Trigger Pin of Ultrasonic Sensor
const int echoPin = 6; // Echo Pin of Ultrasonic Sensor
int buzzerPin = 8;
// int delay_ms = 250; // 500 delay without final delay in loop sounds good

// settings //
int discrete_delay_ms = 250; // shorter discrete_delay_ms when pulsed = 1 should correlate with tempo of playing
int continuous_delay_ms = 200;
bool continuous = 0;
bool pulsed = 1;

int last_delay = continuous_delay_ms;
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
    delay(discrete_delay_ms); 
    if (pulsed) {
      noTone(buzzerPin); // Stop the tone
    }   
   Serial.println();
   }
  // else if (inches > 0 && inches < 6) 
  else if (cm > 0 && cm < 6) {
    Serial.print("AAAAAAAAAAAAA");
    tone(buzzerPin, 440); // A
    delay(discrete_delay_ms); 
    if (pulsed) {
      noTone(buzzerPin); // Stop the tone
    }  
  }
  // else if (inches > 0 && inches < 8) 
  else if (cm > 0 && cm < 9) {
    Serial.print("BBBBBBBBBBBBB");
    tone(buzzerPin, 494); // B
    delay(discrete_delay_ms); 
    if (pulsed) {
      noTone(buzzerPin); // Stop the tone
    }  
  }
  // else if (inches > 0 && inches < 10) 
  else if (cm > 0 && cm < 12) {
    Serial.print("CCCCCCCCCCCCC");
    tone(buzzerPin, 523); // C4
    delay(discrete_delay_ms); 
    if (pulsed) {
      noTone(buzzerPin); // Stop the tone
    }  
  }
  // else if (inches > 0 && inches < 12) 
  else if (cm > 0 && cm < 15) {
    Serial.print("DDDDDDDDDDDDD");
    tone(buzzerPin, 587); // D4
    delay(discrete_delay_ms); 
    if (pulsed) {
      noTone(buzzerPin); // Stop the tone
    }  
  }
  //  else if (inches > 0 && inches < 14) 
   else if (cm > 0 && cm < 18) {
    Serial.print("EEEEEEEEEEEEE");
    tone(buzzerPin, 659); // E4
    delay(discrete_delay_ms); 
    if (pulsed) {
      noTone(buzzerPin); // Stop the tone
    }  
   }
  //  else if (inches > 0 && inches < 16) 
   else if (cm > 0 && cm < 21) {
    Serial.print("FFFFFFFFFFFFF");
    tone(buzzerPin, 698); // F4
    delay(discrete_delay_ms); 
    if (pulsed) {
      noTone(buzzerPin); // Stop the tone
    }  
   }
  //  else if (inches > 0 && inches < 18) 
   else if (cm > 0 && cm < 24) {
    Serial.print("GGGGGGGGGGGGG");
    tone(buzzerPin, 784); // G4
    delay(discrete_delay_ms); 
    if (pulsed) {
      noTone(buzzerPin); // Stop the tone
    }  
   }

  // else if (inches > 0 && inches > 25) 
  else if (cm > 0 && cm < 27) {
    Serial.print("AAAAAAAAAAAAA");
    tone(buzzerPin, 880); // A5
    delay(discrete_delay_ms); 
    if (pulsed) {
      noTone(buzzerPin); // Stop the tone
    }  
  }

  else if (cm > 0 && cm < 30) {
    Serial.print("BBBBBBBBBBBBB");
    tone(buzzerPin, 988); // B5
    delay(discrete_delay_ms); 
    if (pulsed) {
      noTone(buzzerPin); // Stop the tone
    }  

  }
  else if (cm > 0 && cm < 33) {
    Serial.print("CCCCCCCCCCCCC");
    tone(buzzerPin, 1047); // C5
    delay(discrete_delay_ms); 
    if (pulsed) {
      noTone(buzzerPin); // Stop the tone
    }  

  }
  else if (cm > 0 && cm < 36) {
    Serial.print("DDDDDDDDDDDDD");
    tone(buzzerPin, 1175); // D
    delay(discrete_delay_ms); 
    if (pulsed) {
      noTone(buzzerPin); // Stop the tone
    }  
  }
  else if (cm > 0 && cm < 39) {
    Serial.print("EEEEEEEEEEEEE");
    tone(buzzerPin, 1319); // E
    delay(discrete_delay_ms); 
    if (pulsed) {
      noTone(buzzerPin); // Stop the tone
    }  
  }
  else if (cm > 0 && cm < 42) {
    Serial.print("FFFFFFFFFFFFF");
    tone(buzzerPin, 1397); // F
    delay(discrete_delay_ms); 
    if (pulsed) {
      noTone(buzzerPin); // Stop the tone
    }  
  }
  else if (cm > 0 && cm < 45 ) {
    Serial.print("GGGGGGGGGGGGG");
     tone(buzzerPin, 1568); // G
    delay(discrete_delay_ms); 
    if (pulsed) {
      noTone(buzzerPin); // Stop the tone
    }  
  }
  else if (cm > 45) {
    noTone(buzzerPin); // Stop the tone
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

  // set delay based on measured derivative
  // initially 300
  
  Serial.print("cm - last_cm: ");
  Serial.print(cm-last_cm);
  Serial.print(" last_delay: ");
  Serial.print(last_delay);

  // time adjusted change in distance
  // float derivative = abs((float)(cm - last_cm)/(float)last_delay);
  // delay_ms = (int) 1/derivative * 5;

  // just change in distance, works well:
  float derivative = abs((float)(cm - last_cm));
  Serial.print("derivative: ");
  Serial.print(derivative);
  Serial.println();
  if (derivative < 3) {
    continuous_delay_ms = (int) (200- 100 * derivative/3);
  }
  else if (derivative < 6) {
    continuous_delay_ms = (int) (150- 50*derivative /3);
  }
  else {
    continuous_delay_ms = 50; // can't be too small otherwise can't catch change in distance
  }

  Serial.print(" continuous_delay_ms: ");
  Serial.print(continuous_delay_ms);

   //  if (inches > 0 && inches < 4) 
   if (cm > 0 && cm < 3) {
    Serial.print("GGGGGGGGGGGGG");
    tone(buzzerPin, 392); // G
    delay(continuous_delay_ms); 
    // noTone(buzzerPin); // Stop the tone -- dont need for continous
   Serial.println();
   }
  // else if (inches > 0 && inches < 6) 
  else if (cm > 0 && cm < 6) {
    Serial.print("AAAAAAAAAAAAA");
    tone(buzzerPin, 440); // A
    delay(continuous_delay_ms); 
    // noTone(buzzerPin); // Stop the tone
  }
  // else if (inches > 0 && inches < 8) 
  else if (cm > 0 && cm < 9) {
    Serial.print("BBBBBBBBBBBBB");
    tone(buzzerPin, 494); // B
    delay(continuous_delay_ms); 
    // noTone(buzzerPin); // Stop the tone
  }
  // else if (inches > 0 && inches < 10) 
  else if (cm > 0 && cm < 12) {
    Serial.print("CCCCCCCCCCCCC");
    tone(buzzerPin, 523); // C4
    delay(continuous_delay_ms); 
    // noTone(buzzerPin); // Stop the tone
  }
  // else if (inches > 0 && inches < 12) 
  else if (cm > 0 && cm < 15) {
    Serial.print("DDDDDDDDDDDDD");
    tone(buzzerPin, 587); // D4
    delay(continuous_delay_ms); 
    // noTone(buzzerPin); // Stop the tone
  }
  //  else if (inches > 0 && inches < 14) 
   else if (cm > 0 && cm < 18) {
    Serial.print("EEEEEEEEEEEEE");
    tone(buzzerPin, 659); // E4
    delay(continuous_delay_ms); 
    // noTone(buzzerPin); // Stop the tone
   }
  //  else if (inches > 0 && inches < 16) 
   else if (cm > 0 && cm < 21) {
    Serial.print("FFFFFFFFFFFFF");
    tone(buzzerPin, 698); // F4
    delay(continuous_delay_ms); 
    // noTone(buzzerPin); // Stop the tone
   }
  //  else if (inches > 0 && inches < 18) 
   else if (cm > 0 && cm < 24) {
    Serial.print("GGGGGGGGGGGGG");
    tone(buzzerPin, 784); // G4
    delay(continuous_delay_ms); 
    // noTone(buzzerPin); // Stop the tone
   }

  // else if (inches > 0 && inches > 25) 
  else if (cm > 0 && cm < 27) {
    Serial.print("AAAAAAAAAAAAA");
    tone(buzzerPin, 880); // A5
    delay(continuous_delay_ms); 
    // noTone(buzzerPin); // Stop the tone
  }

  else if (cm > 0 && cm < 30) {
    Serial.print("BBBBBBBBBBBBB");
    tone(buzzerPin, 988); // B5
    delay(continuous_delay_ms); 
    // noTone(buzzerPin); // Stop the tone

  }
  else if (cm > 0 && cm < 33) {
    Serial.print("CCCCCCCCCCCCC");
    tone(buzzerPin, 1047); // C5
    delay(continuous_delay_ms); 
    // noTone(buzzerPin); // Stop the tone

  }
  else if (cm > 0 && cm < 36) {
    Serial.print("DDDDDDDDDDDDD");
    tone(buzzerPin, 1175); // D
    delay(continuous_delay_ms); 
    // noTone(buzzerPin); // Stop the tone
  }
  else if (cm > 0 && cm < 39) {
    Serial.print("EEEEEEEEEEEEE");
    tone(buzzerPin, 1319); // E
    delay(continuous_delay_ms); 
    // noTone(buzzerPin); // Stop the tone
  }
  else if (cm > 0 && cm < 42) {
    Serial.print("FFFFFFFFFFFFF");
    tone(buzzerPin, 1397); // F
    delay(continuous_delay_ms); 
    // noTone(buzzerPin); // Stop the tone
  }
  else if (cm > 0 && cm < 45 ) {
    Serial.print("GGGGGGGGGGGGG");
     tone(buzzerPin, 1568); // G
    delay(continuous_delay_ms); 
    // noTone(buzzerPin); // Stop the tone
  }
  else if (cm > 45) {
    noTone(buzzerPin); // Stop the tone
  }

  last_cm = cm;
  last_delay = continuous_delay_ms;

}

void loop() {

  if (!continuous) {
    discrete_mode();
  }
  else {
    continuous_mode();

  }

}
