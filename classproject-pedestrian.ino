#define veh_ledRed_1 3
#define veh_ledYellow_2 4
#define veh_ledGreen_3 5
#define ped_ledRed_4 8
#define ped_ledGreen_5 9
#define button 12
#define buzzer 13
void setup() {
  pinMode(veh_ledRed_1, OUTPUT);
  pinMode(veh_ledYellow_2, OUTPUT);
  pinMode(veh_ledGreen_3, OUTPUT);
  pinMode(ped_ledRed_4, OUTPUT);
  pinMode(ped_ledGreen_5, OUTPUT);
  pinMode(button, INPUT_PULLUP);
  pinMode(buzzer, OUTPUT);

  digitalWrite(veh_ledGreen_3, HIGH);
  digitalWrite(ped_ledRed_4, HIGH);
}
void loop() {

  // Check if the pedestrian wants to cross
  if (digitalRead(button) == HIGH) {
delay(500);
    digitalWrite(veh_ledYellow_2, HIGH);
    digitalWrite(veh_ledGreen_3, LOW);
    digitalWrite(ped_ledRed_4, LOW);
    delay(3000);

    // Change pedestrian traffic lights to green
    // Change Vehicle traffic lights to red
    digitalWrite(veh_ledYellow_2, LOW);
    digitalWrite(veh_ledRed_1, HIGH);
    digitalWrite(ped_ledGreen_5, HIGH);

    for (int x = 0; x < 10; x++) {
      digitalWrite(buzzer, HIGH);
      delay(500);
      digitalWrite(buzzer, LOW);
      delay(500);
    }




    // Change vehicle traffic lights to yellow after a safe interval warining the vehicle to get ready to start moving
     digitalWrite(veh_ledRed_1, LOW);
    digitalWrite(veh_ledYellow_2, HIGH);
    delay(3000);
    digitalWrite(veh_ledYellow_2, LOW);
    
    //set traffic lights to red for pedestrians and green for vehicles

    digitalWrite(veh_ledGreen_3, HIGH);
    digitalWrite(ped_ledRed_4, HIGH);
    digitalWrite(veh_ledRed_1, LOW);
    digitalWrite(ped_ledGreen_5, LOW);
    delay(10000);
  }
}
