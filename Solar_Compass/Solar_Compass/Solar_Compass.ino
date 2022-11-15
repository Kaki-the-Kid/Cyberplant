// Imports

// Global vars
int sensorPinNorth = A0;    // select the input pin for the North
int sensorPinEast = A1;    // select the input pin for the East
int sensorPinSouth = A2;    // select the input pin for the South
int sensorPinWest = A3;    // select the input pin for the West

int ledPin = 13;     // Onboard LED

int sensorValueNorth = 0;  // variable to store the value coming from the sensor
int sensorValueEast  = 0;  // variable to store the value coming from the sensor
int sensorValueSouth = 0;  // variable to store the value coming from the sensor
int sensorValueWest  = 0;  // variable to store the value coming from the sensor

// the setup function runs once when you press reset or power the board
void setup() {
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);// initialize digital pin LED_BUILTIN as an output.
  Serial.println("Programmet startet: ");
}

// the loop function runs over and over again forever
void loop() {
  // Indicate measuring start
  digitalWrite(ledPin, HIGH);

  // Read the values from the sensors:
  sensorValueNorth = analogRead(sensorPinNorth);
  sensorValueEast  = analogRead(sensorPinEast);
  sensorValueSouth = analogRead(sensorPinSouth);
  sensorValueWest  = analogRead(sensorPinWest);  

  // Indicate measuring done
  digitalWrite(ledPin, LOW);

  // Output the values to the console
  Serial.print("Nord: ");
  Serial.println(sensorValueNorth);
  Serial.print("Øst:  ");
  Serial.println(sensorValueEast);
  Serial.print("Syd:  ");
  Serial.println(sensorValueSouth);
  Serial.print("Vest: ");
  Serial.println(sensorValueWest);
  Serial.println("---------------");
 
  // stop the program for for <sensorValue> milliseconds:
  delay(1000);                    // wait for a second
}
