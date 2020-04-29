int lightSensor = A0 ;
int threshold =100;
int analogValue = 0;

int led = D7;

void setup() {
 pinMode(led, OUTPUT);
 pinMode(lightSensor,INPUT);
} 
void loop() { 

   if (analogValue >= threshold) 
   { 
       digitalWrite(led, HIGH);
       Particle.publish("light_intensity_high", "Sunlight_present", PRIVATE);
       delay(1000);
   } 
   else 
   {
       digitalWrite(led, LOW);
       Particle.publish("light_intensity_low", "Sunlight_absent", PRIVATE); 
        delay(1000);
    } 
}