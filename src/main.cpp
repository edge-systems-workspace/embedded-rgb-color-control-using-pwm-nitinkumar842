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
