#include <LiquidCrystal_I2C.h>

#define I2C_ADDR    0x27
#define LCD_COLUMNS 20
#define LCD_LINES   1

LiquidCrystal_I2C lcd(I2C_ADDR, LCD_COLUMNS, LCD_LINES);

void setup() {
  Serial.begin(115200);
  Serial.println("Raspberry Pi Pico is set!");

  lcd.init();
  lcd.backlight();

  lcd.setCursor(3, 0);
  lcd.print("Hello, world!");
}

void loop() {
  Serial.println("Loop");
  delay(1000);
}
