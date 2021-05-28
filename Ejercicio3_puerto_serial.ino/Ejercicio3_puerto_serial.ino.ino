void setup() {
Serial.begin(9600);
}

void loop() {
  Serial.println("FUNCIONAMIENTO: OK.");
  delay(1000);
}

void serialEvent(){ 
 String lectura = Serial.readString();
  
  if(lectura.equals("hola")){
   Serial.println("Full picado pa"); 
  }
}
