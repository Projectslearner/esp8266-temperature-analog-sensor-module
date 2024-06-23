/*
    Project name : ESP8266 Temperature Analog sensor module
    Modified Date: 20-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/esp8266-temperature-analog-sensor-module
*/

const int sensorPin = A0; // Analog pin connected to the temperature sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int sensorValue = analogRead(sensorPin); // Read the analog value from the sensor

  // Convert the analog value to voltage (assuming 10-bit ADC and 3.3V reference)
  float voltage = sensorValue * (3.3 / 1023.0);

  // Convert voltage to temperature
  float temperatureC = voltage * 100.0; // LM35: 10mV per degree Celsius, TMP36: (voltage - 0.5) * 100.0

  // Print the temperature to the Serial Monitor
  Serial.print("Temperature: ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(1000); // Wait 1 second before taking another reading
}
