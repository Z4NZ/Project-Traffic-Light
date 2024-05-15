#include <LiquidCrystal_I2C.h>
LiquidCrystal_I2C lcd(0x27, 16, 2);


const int lampu = 13;
const int lampu2 = 12;
const int lampu3 = 11;

const int lampu4 = 10;
const int lampu5 = 9;
const int lampu6 = 8;

const int lampu7 = 7;
const int lampu8 = 6;
const int lampu9 = 5;

const int lampu10 = 4;
const int lampu11 = 3;
const int lampu12 = 2;

void setup() {
    
   pinMode ( lampu, OUTPUT);
   pinMode ( lampu2, OUTPUT);
   pinMode ( lampu3, OUTPUT);
    
   pinMode ( lampu4, OUTPUT);
   pinMode ( lampu5, OUTPUT);
   pinMode ( lampu6, OUTPUT);
    
   pinMode ( lampu7, OUTPUT);
   pinMode ( lampu8, OUTPUT);
   pinMode ( lampu9, OUTPUT);
    
   pinMode ( lampu10, OUTPUT);
   pinMode ( lampu11, OUTPUT);
   pinMode ( lampu12, OUTPUT);
   
    lcd.init();
    lcd.backlight();
    lcd.setCursor(0,0);
    lcd.print("TRAFFIC LIGHT");
    lcd.setCursor(5,1);
    lcd.print("KELOMPOK 6");
       
    }

   

void loop() {
    digitalWrite (lampu4, HIGH );
    digitalWrite (lampu7, HIGH );
    digitalWrite (lampu10, HIGH );
    digitalWrite (lampu, LOW );
    digitalWrite (lampu2, LOW );
    digitalWrite (lampu3, HIGH );
    delay (1000);
    digitalWrite (lampu2, HIGH );
    delay (1000);
    digitalWrite (lampu2, HIGH );
    digitalWrite (lampu3, LOW );
    delay (1000);
    digitalWrite (lampu2, LOW );
    digitalWrite (lampu, HIGH );
    delay (1000);
    digitalWrite (lampu5, HIGH );
    delay (1000);
    digitalWrite (lampu, HIGH );
    delay (1000);
    digitalWrite (lampu, HIGH );
    digitalWrite (lampu4, HIGH );
    digitalWrite (lampu7, HIGH );
    digitalWrite (lampu10, HIGH );
    digitalWrite (lampu2, LOW );
    digitalWrite (lampu3, LOW );
    
    
    digitalWrite (lampu4, LOW );
    digitalWrite (lampu5, LOW );
    digitalWrite (lampu6, HIGH );
    delay (1000);
    digitalWrite (lampu5, HIGH );
    delay (1000);
    digitalWrite (lampu5, HIGH );
    digitalWrite (lampu6, LOW );
    delay (1000);
    digitalWrite (lampu5, LOW );
    digitalWrite (lampu4, HIGH );
    delay (1000);
    digitalWrite (lampu8, HIGH );
    delay (1000);
    digitalWrite (lampu4, HIGH );
    delay (1000);
    digitalWrite (lampu4, HIGH );
    digitalWrite (lampu5, LOW );
    digitalWrite (lampu6, LOW );

    digitalWrite (lampu7, LOW );
    digitalWrite (lampu8, LOW );
    digitalWrite (lampu9, HIGH );
    delay (1000);
    digitalWrite (lampu8, HIGH );
    delay (1000);
    digitalWrite (lampu8, HIGH );
    digitalWrite (lampu9, LOW );
    delay (1000);
    digitalWrite (lampu8, LOW );
    digitalWrite (lampu7, HIGH );
    delay (1000);
    digitalWrite (lampu11, HIGH );
    delay (1000);
    digitalWrite (lampu7, HIGH );
    delay (1000);
    digitalWrite (lampu7, HIGH );
    digitalWrite (lampu8, LOW );
    digitalWrite (lampu9, LOW );

    digitalWrite (lampu10, LOW );
    digitalWrite (lampu11, LOW );
    digitalWrite (lampu12, HIGH );
    delay (1000);
    digitalWrite (lampu11, HIGH );
    delay (1000);
    digitalWrite (lampu11, HIGH );
    digitalWrite (lampu12, LOW );
    delay (1000);
    digitalWrite (lampu11, LOW );
    digitalWrite (lampu10, HIGH );
    delay (1000);
    digitalWrite (lampu2, HIGH );
    delay (1000);
    digitalWrite (lampu10, HIGH );
    delay (1000);
    digitalWrite (lampu10, HIGH );
    digitalWrite (lampu11, LOW );
    digitalWrite (lampu12, LOW );

}