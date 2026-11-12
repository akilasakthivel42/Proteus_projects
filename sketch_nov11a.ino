int G = A1;
int led = 11;

void setup() {
  pinMode(G,INPUT);
  pinMode(led,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int A = analogRead(G);
  Serial.println(A);
  delay(500);
  int i = map(A,0,1023,0,255);
  analogWrite(led,i);
  delay(5);
}
