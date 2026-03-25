Week 2 code:
const int SENSOR_PIN = A0;
const float SENSITIVITY = 0.066;
const int ZERO_POINT = 512;

void setup() {
  Serial.begin(9600);
  Serial.println("Current Sensor Reading");
}

void loop() {
  int raw = analogRead(SENSOR_PIN);
  float voltage = raw * (5.0 / 1024.0);
  float current = (raw - ZERO_POINT) * (5.0 / 1024.0) / SENSITIVITY;

  Serial.print("Raw: "); Serial.print(raw);
  Serial.print(" | Voltage: "); Serial.print(voltage, 3);
  Serial.print("V | Current: "); Serial.print(current, 3);
  Serial.println("A");
  delay(500);
}
