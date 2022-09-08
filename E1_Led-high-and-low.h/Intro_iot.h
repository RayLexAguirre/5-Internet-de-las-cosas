#include "test.h"
#define PIN_LOW 5
#define PIN_HIGH 18
    test_iot tito;
void setup() {
    Serial.begin(115200);
    pinMode(PIN_LOW, OUTPUT);
    pinMode(PIN_HIGH, OUTPUT);
}
void loop() {
    digitalWrite(PIN_LOW, HIGH);
    digitalWrite(PIN_HIGH, HIGH);
    //tito.imprimisida();
    delay(2000);
    digitalWrite(PIN_LOW, LOW);
    digitalWrite(PIN_HIGH, LOW);
    //Serial.println("Hola Mundo");
}