
#define BAUD_RATE 9600

// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position
String message;
bool locked = false;
int ledPin = 3;
void setup() {
  pinMode(ledPin, OUTPUT);
  Serial.begin(BAUD_RATE);
  Serial.setTimeout(10);
}



void loop() {


   if(Serial.available()){
      message = Serial.readString();
      if(message[0] == 'u'){
        digitalWrite(ledPin, HIGH);
      }
      else{
        digitalWrite(ledPin, LOW);
      }
   }

}

