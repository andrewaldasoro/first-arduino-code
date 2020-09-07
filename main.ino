void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
char dati = Serial.read();
if(dato == '1')digitalWrite(13,HIGH);
if(dato == '2')digitalWrite(13,LOW);
}
