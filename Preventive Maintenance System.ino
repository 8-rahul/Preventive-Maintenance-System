#include <LiquidCrystal.h>

const int tempPin = A0;          // TMP36 Temperature sensor
const int currentPin = A1;       // Simulated current sensor (potentiometer)
const int motorPin = 9;          // NPN transistor base connected via resistor

LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

String status = "Normal";

void setup() {
  lcd.begin(16, 2);
  pinMode(motorPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Read and convert temperature
  int tempReading = analogRead(tempPin);
  float voltage = tempReading * (5.0 / 1023.0);
  float temperature = (voltage - 0.5) * 100;

  // Simulate current reading from potentiometer
  int currentReading = analogRead(currentPin);
  float current = map(currentReading, 0, 1023, 0, 500) / 100.0; // 0 to 5A

  // Determine system status
  bool overheat = temperature > 50;
  bool overload = current > 3.0;
  bool noLoad = current < 0.2;

  lcd.clear();

  if (overheat) {
    status = "Overheat";
    lcd.setCursor(0, 0);
    lcd.print("Status: Overheat");
    lcd.setCursor(0, 1);
    lcd.print("Temp: "); lcd.print(temperature, 1); lcd.print(" C");
  }
  else if (overload) {
    status = "Overload";
    lcd.setCursor(0, 0);
    lcd.print("Status: Overload");
    lcd.setCursor(0, 1);
    lcd.print("Curr: "); lcd.print(current, 1); lcd.print(" A");
  }
  else if (noLoad) {
    status = "No Load";
    lcd.setCursor(0, 0);
    lcd.print("Status: No Load");
    lcd.setCursor(0, 1);
    lcd.print("Curr: "); lcd.print(current, 1); lcd.print(" A");
  }
  else {
    status = "Normal";
    lcd.setCursor(0, 0);
    lcd.print("Status: Normal  ");
    // Second line left blank
  }

  // Motor Control
  if (status == "Normal") {
    digitalWrite(motorPin, HIGH); // Motor ON
  } else {
    digitalWrite(motorPin, LOW);  // Motor OFF on fault
  }

  delay(1000); // 1 second delay
}
