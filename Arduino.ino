//Codigo Arduino Examen 01 Instrumentacion Virtual Aplicada
// Definimos las variables
byte datos_in;
int A=0;
int num=0;
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}
void loop() {
 //Comprobamos si el puerto serial esta disponible 
if(Serial.available() > 0) {
  datos_in = Serial.read();

  //Si labview detecta la comunicacion del puerto serial comenzara la lectura del sensor
  if(datos_in == 'A') {
    A=1;
  }
}
if (A==1) {
  num=analogRead(A0);  //Lectura del puerto A0
  Serial.println(num); //Imprimimos los datos y los enviamos a labview
  delay(50);
}else {
  Serial.println("Arduino1:Sharp"); /*Si el puerto serial no
                                    esta disponible enviara esta
                                    informracion hasta que labview la confirme */
  delay(5);
}
}
