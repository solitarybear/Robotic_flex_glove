// Project: Robotic Hand Mimicking Flex Sensor Glove
// Board: Arduino UNO
// Output: Serial Monitor Only
// Author: Aman (2025)

const int flexPins[5] = {A0, A1, A2, A3, A4};  // Flex sensor inputs for: Thumb, Index, Middle, Ring, Pinky
int flexValues[5];  // Array to store analog values

void setup() {
  Serial.begin(9600);  // Start Serial Monitor
  for (int i = 0; i < 5; i++) {
    pinMode(flexPins[i], INPUT);  // Set all pins as input
  }
  Serial.println("✅ Flex Sensor Glove Initialized - Begin Finger Movement Tracking");
}

void loop() {
  // Read all 5 flex sensors
  for (int i = 0; i < 5; i++) {
    flexValues[i] = analogRead(flexPins[i]);  // Read analog value (range: 0 to 1023)
  }

  // Print the readings to Serial Monitor
  Serial.print("Thumb: ");  Serial.print(flexValues[0]);  Serial.print("\t");
  Serial.print("Index: ");  Serial.print(flexValues[1]);  Serial.print("\t");
  Serial.print("Middle: "); Serial.print(flexValues[2]);  Serial.print("\t");
  Serial.print("Ring: ");   Serial.print(flexValues[3]);  Serial.print("\t");
  Serial.print("Pinky: ");  Serial.println(flexValues[4]);

  delay(300);  // Small delay for readability
}
