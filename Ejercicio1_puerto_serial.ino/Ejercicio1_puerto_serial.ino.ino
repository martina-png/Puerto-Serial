void setup(){
Serial.begin(9600);
}

void loop(){
 
}

void serialEvent(){
   if (Serial.available()){
     char x = Serial.read();  
     Serial.println("Se ingresaron datos"); 
 }
}

