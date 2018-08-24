int LED=13;
void setup() {
  Serial.begin(9600);
  pinMode(LED, OUTPUT);

}

void loop() {
 
int sensorValue = analogRead(A0);
//Serial.println(sensorValue);
delay(1000);
int ph_level=analogRead(A0);  

//Serial.print("analog value: "); */

if(ph_level<449) {

Serial.println("BAD WATER");
digitalWrite(LED , HIGH);    
  delay(1000);  
}

if((ph_level>450)&&(ph_level<800)) {

Serial.println("GOOD WATER");
digitalWrite(LED, LOW); 
  delay(1000);
delay(1000);

}

if(ph_level>801){
digitalWrite(LED, LOW); 
//Serial.println("BAD WATER");
//delay(1000);

}

}

