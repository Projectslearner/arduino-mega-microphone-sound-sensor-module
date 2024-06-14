/*
    Project name : Microphone sound sensor module
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-microphone-sound-sensor-module
*/

const int soundSensorPin = A0; // Analog pin connected to the sound sensor module
int soundValue = 0; // Variable to store the sound sensor value

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the value from the sound sensor
  soundValue = analogRead(soundSensorPin);

  // Print the sensor value to the Serial Monitor
  Serial.print("Sound Sensor Value: ");
  Serial.println(soundValue);

  delay(500); // Add a small delay before the next reading
}
