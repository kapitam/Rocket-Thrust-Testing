#include "SPI.h"
#include "Wire.h"
#include <Arduino.h>
#include "HX711.h"

#define DOUT 19  // HX711 Data pin
#define CLK 18   // HX711 Clock pin





bool sw = false;

HX711 scale;

void setup() {
    Serial.begin(115200);  
    scale.begin(DOUT, CLK);
    scale.set_gain(128);  // Default gain

    // Initialize I2C with specific pins (only needed for ESP32/ESP8266)`   

    // Initialize LCD

}

void loop() {
    if (Serial.available() > 0) {
        String input = Serial.readStringUntil('\n');
        input.trim();
        if (input == "stop") {
            sw = true;
        }
    }
    if (sw) {
        return;
    }
    if (scale.is_ready()) {
        long raw_value = scale.read();

        Serial.print(millis());  // Print timestamp
        Serial.print(",");
        Serial.println(raw_value);  // Print thrust value

        delay(50);  // Adjust sampling rate
    }

    // Update LCD display
}