#include <Arduino.h>
#include <LedControl.h>

// DIN = D7, CLK = D5, CS = D8
LedControl lc = LedControl(D7, D5, D8, 1);

void setup() {
  lc.shutdown(0, false);   // Wake up display
  lc.setIntensity(0, 8);   // Brightness (0–15)
  lc.clearDisplay(0);      // Clear display
}

void loop() {
  static unsigned long counter = 0;

  // Convert counter to digits and display
  unsigned long temp = counter;
  for (int i = 0; i < 8; i++) {
    int digit = temp % 10;
    lc.setDigit(0, i, digit, false);
    temp /= 10;
  }

  counter++;
  delay(500); // Update every half second
}