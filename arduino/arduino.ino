const int ledPin = 13;
const int inputPin = 2;

int val = 0;
int aurrekoa;

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(57600);
  pinMode(ledPin, OUTPUT);
  pinMode(inputPin, INPUT);
  digitalWrite(inputPin, HIGH);
}

void loop() {
 aurrekoa = val; 
 val = digitalRead(inputPin);
 
 if (val != aurrekoa){
    if (val == HIGH)
    {
      digitalWrite(ledPin, HIGH);
      Serial.println("IREKITA");
      delay(100);
    }
    else
    {
      digitalWrite(ledPin, LOW);
      Serial.println("ITXITA");
      delay(100);
    }
   
 }
 
}
