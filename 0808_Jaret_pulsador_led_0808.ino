const int PULSADOR = 7;
const int LED = 8;
 
// Variable para almacenar el estado del PULSADOR
int estado; 
 
void setup(){
    // PULSADOR configurado como entrada de datos
    pinMode(PULSADOR,INPUT);
    // LED configurado como salida de datos
    pinMode(LED,OUTPUT);
}
 
void loop(){
    // Se almacena el estado del pulsador
  estado = digitalRead(PULSADOR); 
    // Si la lectura del pulsador es HIGH (pulsado)...
  if  (estado == HIGH){
        // ... enciende el LED.
    digitalWrite(LED,HIGH);
      // En caso contrario (no pulsado)... 
  } else { 
        // Apaga el LED
        digitalWrite(LED,LOW); 
  }
}
