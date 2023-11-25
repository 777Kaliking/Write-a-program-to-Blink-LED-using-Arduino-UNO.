const int ledPin = 8; // Define the LED pin as pin 8
int ledState = HIGH; // Initialize the LED state to HIGH (on)

void setup() {
  pinMode(ledPin, OUTPUT); // Set the LED pin as an output
}

void loop() {
  digitalWrite(ledPin, ledState); // Set the LED state
  delay(1000); // Wait for 1 second
  ledState = !ledState; // Toggle the LED state
}
