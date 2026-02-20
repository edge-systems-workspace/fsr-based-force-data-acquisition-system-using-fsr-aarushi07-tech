#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Force Measurement System using FSR
 * @author aarushi07-tech
 * @date 2026-02-20
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

 // TODO 1:
 // Define FSR analog pin (Use A0)

 // TODO 2:
 // Create variable to store sensor reading

void setup() {
    Serial.begin(9600);


}

void loop() {
    int analogReading = analogRead(FORCE_SENSOR_PIN);

    Serial.print("Force sensor reading = ");
    Serial.print(analogReading); // print the raw analog reading

    if (analogReading < 10)       // from 0 to 9
        Serial.println(" -> no pressure");
    else if (analogReading < 200) // from 10 to 199
        Serial.println(" -> light touch");
    else if (analogReading < 500) // from 200 to 499
        Serial.println(" -> light squeeze");
    else if (analogReading < 800) // from 500 to 799
        Serial.println(" -> medium squeeze");
    else // from 800 to 1023
        Serial.println(" -> big squeeze");

    delay(1000);


}

