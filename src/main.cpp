#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author YOUR_NAME
 * @date YYYY-MM-DD
 *
 * @details
 * Controls RGB LED using digital ON/OFF
 * and analog PWM brightness control
 */



// TODO 1:
#define RED_PIN 9

// TODO 2:
#define GREEN_PIN 10

// TODO 3:
#define BLUE_PIN 11

void setup() {

    // TODO 4:
    Serial.begin(9600);

    // TODO 5:
    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPUT);
    pinMode(BLUE_PIN, OUTPUT);

    // TODO 6:
    Serial.println("RGB LED System Initialized");
}

void loop() {

    // -------- DIGITAL MODE --------

    // TODO 7: Turn ON red
    digitalWrite(RED_PIN, HIGH);
    delay(1000);

    // TODO 8: Turn OFF red
    digitalWrite(RED_PIN, LOW);
    delay(500);


    // -------- ANALOG (PWM) MODE --------

    // TODO 9: Set RED brightness
    analogWrite(RED_PIN, 255);   // Full brightness

    // TODO 10: Set GREEN brightness
    analogWrite(GREEN_PIN, 0);   // Off

    // TODO 11: Set BLUE brightness
    analogWrite(BLUE_PIN, 0);    // Off

    delay(1000);


    // Change color to Purple
    analogWrite(RED_PIN, 255);
    analogWrite(GREEN_PIN, 0);
    analogWrite(BLUE_PIN, 255);

    // TODO 12:
    delay(1000);
}
