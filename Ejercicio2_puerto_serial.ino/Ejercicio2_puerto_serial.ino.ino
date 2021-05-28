void setup() {
Serial.begin(9600);
}

void loop() {
}

void serialEvent() { //esta función se activa cuando hay datos disponibles en el puerto serial

 String lectura = Serial.readString(); //almacenar la lectura del buffer del serial en la variable "lectura"
Serial.print("Se ingreso: ");
Serial.print(lectura);
Serial.print(" con ");
Serial.print(lectura.length());
Serial.println(" caracteres.");
}

