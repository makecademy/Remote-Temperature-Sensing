// Define analog pin
int temp_pin = 0;

// Setup
void setup() {
  // Init serial
  Serial.begin(9600);  
}

// Main loop
void loop() {
      
     // Get temperature
     int temperature = getvoltage(temp_pin);
     
     // Put temperature on the serial port
     Serial.println(temperature,DEC);
     
     // Wait for 1 sec
     delay(1000);
}

// Function to get analog value
int getvoltage(int pin) {

  return analogRead(pin);
    
}
