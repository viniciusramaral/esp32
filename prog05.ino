const int ledAzul = 19;
const int ledVermelho = 22;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello, ESP32!");
  pinMode(ledAzul, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
}

void loop() {
  

  //digitalWrite(ledAzul, LOW);
  //digitalWrite(ledVermelho, HIGH);

  int n = 255;

  for (int i = 0; i <= 255; i++){
    analogWrite(ledAzul, i);
    analogWrite(ledVermelho, n);
    n--;
    delay(100);
    Serial.println(n);
    Serial.println(i);
  }
//delay(100000);
}
