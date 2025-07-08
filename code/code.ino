#define SOIL_MOISTURE_PIN A0
#define RELAY_PIN 8

int threshold = 600;  // Adjust based on your soil (wet soil gives lower value)

void setup() {
  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW); // Ensure pump is off initially
  Serial.begin(9600);
}

void loop() {
  int moisture = analogRead(SOIL_MOISTURE_PIN);
  Serial.print("Soil Moisture Value: ");
  Serial.println(moisture);

  if (moisture < threshold) {
    digitalWrite(RELAY_PIN, HIGH);  // Activate relay (pump ON)
    // delay(5000);                     // Run pump for 5 seconds
    // digitalWrite(RELAY_PIN, LOW);   // Deactivate relay (pump OFF)
  }
  else{
    digitalWrite(RELAY_PIN, LOW);   // Deactivate relay (pump OFF)
  }
  delay(5000); // Wait before next reading
}