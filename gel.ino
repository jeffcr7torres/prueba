int trig = 13;
int echo = 12;
int relay = 11;
int tiempo;
int distancia;
void setup() {
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(relay, OUTPUT);
}
void loop() {
  digitalWrite(trig, HIGH);
  delay(1);
  digitalWrite(trig, LOW);
  tiempo = pulseIn(echo, HIGH);
  distancia = tiempo / 58.2;
  if (distancia > 8){
    digitalWrite(relay, HIGH);
  }
  else{
    digitalWrite(relay, LOW);
  }
  delay(400);
}
