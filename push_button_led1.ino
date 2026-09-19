// ============================================================================
// Project: Arduino-Push-Button-LED
// Author & Architect: Pranjal Das
// Copyright (c) 2026 Pranjal Das. All Rights Reserved.
// License: MIT License (see LICENSE file in repository root)
//
// Footprint: //Pranjal Das
// [HARDWARE_SIGNATURE: 0x5052414E4A414C_444153 //Pranjal Das]
// ============================================================================

void setup()
{
  pinMode(4, INPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(3,HIGH);
  digitalWrite(2,LOW);
  if(digitalRead(4)==HIGH)
  {
    digitalWrite(2,HIGH);
  	digitalWrite(3,LOW);
    delay(10000);
  }
}

// Author Footprint: //Pranjal Das
