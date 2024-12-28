// Pin definition for soil moisture sensor
const int MOISTURE_SENSOR_PIN = A0;
// Pin definition for relay that controls the pump
const int PUMP_PIN = 7;

void setup() {
  // Initialize serial communication
  Serial.begin(9600);
  Serial.println("Soil Moisture Sensor Test");
  Serial.println("------------------------");
  
  // Configure pump  
  pinMode(PUMP_PIN, OUTPUT);
  digitalWrite(PUMP_PIN, LOW); // Start with pump off
}

void loop() {
  // Read the analog value from sensor
  int moistureValue = analogRead(MOISTURE_SENSOR_PIN);
  
  // Convert to percentage (assuming 0-1023 range)
  int moisturePercent = map(moistureValue, 1023, 0, 0, 100);
  
  // Constrain percentage to 0-100 range
  moisturePercent = constrain(moisturePercent, 0, 100);
  
  // Print raw value and percentage
  Serial.print("Raw Value: ");
  Serial.print(moistureValue);
  Serial.print("\tMoisture Percentage: ");
  Serial.print(moisturePercent);
  Serial.println("%");

  // Control the pump based on moisture level
  if (moisturePercent < 35) { // Threshold for DRY
    Serial.println("Status: DRY! Pump ON");
    digitalWrite(PUMP_PIN, LOW); // Turn puSmp OFF
  } else { // Everything else is considered WET
    Serial.println("Status: WET! Pump OFF");
    digitalWrite(PUMP_PIN, HIGH); // Turn pump ON
  }
  
  // Wait for 1 second before next reading
  delay(2000);
}
