void setup() {
  Serial.begin(9600);
}

void loop() {
  
  // Lecture de la tension sur la pin A0
  int pinLM35 = analogRead(A0);
  
  // Transformation de la valeur lue en degres celcius
  float temperature = pinLM35 * (5.0 / 1023.0 * 100.0);
  
  // Affichage de la temperature sur le port série
  Serial.print(temperature);
  Serial.println(" °C");
  delay(200);
}
