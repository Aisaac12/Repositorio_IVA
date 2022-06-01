const int Bot1=2;
const int Bot2=3;
int v1;
int v2;
void setup() {
pinMode(Bot1,INPUT);
pinMode(Bot2,INPUT);
Serial.begin(9600);
}
void loop() {
v1=digitalRead(Bot1);
v2=digitalRead(Bot2);
if (v1==HIGH){
Serial.println("DERECHA");
delay(1000);
}

if (v2==HIGH){
Serial.println("IZQUIERDA");
delay(1000);
}
}
