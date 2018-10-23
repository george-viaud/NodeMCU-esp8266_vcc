#include "user_interface.h"

ADC_MODE(ADC_VCC);

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);  
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);
  float voltage=0.00f;
  voltage = ESP.getVcc();
  
  //TODO: Determine what the reference is here... Can't be VCC!
  Serial.print(voltage/898.00f); // Magic numbers...
  Serial.println("vDC");
}
