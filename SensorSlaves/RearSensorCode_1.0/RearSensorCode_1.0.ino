/*
 * File:    RearSensorCode_1.0.ino
 * Date:    9/13/2022
 * Org:     Software Engineering Baja Team
 * Author:  Gabriel Shanahan
 * Purpose: Reads sensor data for rear half of Baja Buggy (shock travel & wheel speed)
 *          and sends to MasterController for data collection and organization.
 */
//SHOCK
#define potRearDriv A0
#define potRearPass A1
//HALL EFFECT
#define hallRearDriv A2
#define hallRearPass A3

//sensor input setup
void setup() {
  Serial.begin(57600);
  pinMode(potRearDriv, INPUT );
  pinMode(potRearPass, INPUT );

  pinMode(hallRearDriv,INPUT);
  pinMode(hallRearPass,INPUT);
}

//main sensor input loop
void loop() {
  //SHOCK
  //REAR driver-side shock sensor
  int VALpotRearDriv = analogRead(potRearDriv);
  Serial.print("potRearDriv: "); //print for debug only
  Serial.println(VALpotRearDriv);
  //REAR passenger-side shock sensor
  int VALpotRearPass = analogRead(potRearPass);
  Serial.print("potRearPass: "); //print for debug only
  Serial.println(VALpotRearPass);

  //HALL EFFECT
  //REAR driver-side hall effect sensor
  int VALhallRearDriv = analogRead(hallRearDriv);
  Serial.print("hallRearDriv: "); //print for debug only
  Serial.println(VALhallRearDriv);
  //REAR passenger-side hall effect sensor
  int VALhallRearPass = analogRead(hallRearPass);
  Serial.print("hallRearPass: "); //print for debug only
  Serial.println(VALhallRearPass);
}
