/*
 * File:    RearSensorCode_1.1.ino
 * Date:    9/13/2022
 * Org:     Software Engineering Baja Team
 * Author:  Gabriel Shanahan / Logan Gillum / Paul Haines / ADD NAME HERE IF EDITED 
 * Purpose: Reads sensor data for Baja Buggy (shock travel & wheel speed)
 *          and sends to MasterController for data collection and organization.
 */

//SHOCK
#define driverShock A0
#define passengerShock A1

//HALL EFFECT
#define driverHall A2
#define passengerHall A3

void setup() {
  //Setup Function that automatically runs when Arduino is powered on. 

  Serial.begin(9600);

  //Define Pins for Shock Inputs
    pinMode(driverShock, INPUT );
    pinMode(passengerShock, INPUT );

  //Define Pins for Hall Effect Inputs
    pinMode(driverHall,INPUT);
    pinMode(passengerHall,INPUT);
}


void loop() {
  //Loop Function for constantly polling sensors while Ardiuno runs 

  //SHOCK
    //REAR driver-side shock sensor
      int VALdriverShock = analogRead(driverShock);
      Serial.print("driverShock: "); //print for debug only
      Serial.println(VALdriverShock);

    //REAR passenger-side shock sensor
    int VALpassengerShock = analogRead(passengerShock);
    Serial.print("passengerShock: "); //print for debug only
    Serial.println(VALpassengerShock);

  //HALL EFFECT
    //REAR driver-side hall effect sensor
      int VALdriverHall = digitalRead(driverHall);
      Serial.print("driverHall: "); //print for debug only
      Serial.println(VALdriverHall);

    //REAR passenger-side hall effect sensor
      int VALpassengerHall = digitalRead(passengerHall);
      Serial.print("passengerHall: "); //print for debug only
      Serial.println(VALpassengerHall);
}
