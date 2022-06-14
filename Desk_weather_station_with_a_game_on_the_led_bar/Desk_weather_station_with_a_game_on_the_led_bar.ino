


#include <LiquidCrystal.h>
LiquidCrystal lcd(10, 9, 8, 7, 6, 5);

#include "DHT.h" 
#define DHTTYPE DHT11
DHT dht1(11, DHTTYPE);

#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel pixels(26, 4, NEO_GRB + NEO_KHZ800);
  int R = 15;
  int G = 15;
  int B = 15;
  int number = 0;
  
//BUTTON

  int button1 = 3;
  int button2 = 2; 
  
int brightness = 0;
int percentageofbrightness = 0;

void setup() {
  
//BUTTONS

 pinMode(button1, INPUT_PULLUP);
 pinMode(button2, INPUT_PULLUP);
  
  lcd.begin(16, 2);
  lcd.noBlink();
  lcd.home();
  lcd.print("Good Morning");
  dht1.begin();
  delay(3000);
  lcd.clear();
  
  
  pixels.begin();
  pixels.clear();
  R = R;
  G = G;
  B = B;
  pixels.setPixelColor(numer ,pixels.Color(R ,G ,B));
  pixels.show();
}

void loop() {
lcd.noBlink();

//BUTTON 1

if(digitalRead(button1) == LOW){ //button checking
  delay(70);
  if(digitalRead(button1) == LOW){
    pixels.clear();
    number = number + 1;
    pixels.setPixelColor( number,pixels.Color( R, G, B));
    pixels.show();
 
      if( number > 25){
       number = number - 26;
    }
  }
}
  ////////////////                //////////////////////
 ////////////////  ADDING COLOR  //////////////////////
////////////////                //////////////////////

  if(digitalRead(button2) == LOW ){ //button checking
    delay(50);
  if(digitalRead(button2) == LOW){
    if(number == 0){
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("R=");
      lcd.print(R);
      lcd.setCursor(8, 0);
      lcd.print("G=");
      lcd.print(G);
      lcd.setCursor(0, 1);
      lcd.print("B=");
      lcd.print(B);  
      R = R + 10;
      pixels.setPixelColor( number,pixels.Color( R, G, B));
      pixels.show();
      delay(500); 
        if(R > 250){
          R = R - 10;   
        }
     }
    }
   }

  if(digitalRead(button2) == LOW ){ //button checking
    delay(50);
  if(digitalRead(button2) == LOW){
    if(number == 1){
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("R=");
      lcd.print(R);
      lcd.setCursor(8, 0);
      lcd.print("G=");
      lcd.print(G);
      lcd.setCursor(0, 1);
      lcd.print("B=");
      lcd.print(B);  
      G = G + 10;
      pixels.setPixelColor( number,pixels.Color( R, G, B));
      pixels.show();
      delay(500); 
        if(R > 250){
          G = G - 10;   
        }
     }
    }
   }

  if(digitalRead(button2) == LOW ){ //button checking
    delay(50);
  if(digitalRead(button2) == LOW){
    if(number == 2){
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("R=");
      lcd.print(R);
      lcd.setCursor(8, 0);
      lcd.print("G=");
      lcd.print(G);
      lcd.setCursor(0, 1);
      lcd.print("B=");
      lcd.print(B);  
      B = B + 10;
      pixels.setPixelColor( number,pixels.Color( R, G, B));
      pixels.show();
      delay(500); 
        if(R > 250){
          B = B - 10;   
      }
     }
    }
   } 

  if(digitalRead(button2) == LOW ){ //button checking
    delay(50);
  if(digitalRead(button2) == LOW){
    if(number == 3){
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("R=");
      lcd.print(R);
      lcd.setCursor(8, 0);
      lcd.print("G=");
      lcd.print(G);
      lcd.setCursor(0, 1);
      lcd.print("B=");
      lcd.print(B);  
      R = 10;
      G = 10;
      B = 10;
      pixels.setPixelColor( number,pixels.Color( R, G, B));
      pixels.show();
      delay(500);
     } 
    }
   }
   
///////////////////BRIGHTNESS +//////////////////////

if(digitalRead(button2) == LOW ){ //button checking
    delay(50);
  if(digitalRead(button2) == LOW){
    if(number == 4){
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("R=");
      lcd.print(R);
      lcd.setCursor(8, 0);
      lcd.print("G=");
      lcd.print(G);
      lcd.setCursor(0, 1);
      lcd.print("B=");
      lcd.print(B);  
      R = R * 2;
      G = G * 2;
      B = B * 2;
      pixels.setPixelColor( number,pixels.Color( R, G, B));
      pixels.show();
      delay(500); 
      if( R > 255){
          R = 255;     
        } 
      if( G > 255){
          G = 255;     
        }  
      if( B > 255){
          B = 255;     
      }
     }
    }
   }
   
///////////////////BRIGHTNESS -//////////////////////

if(digitalRead(button2) == LOW ){ //button checking
    delay(50);
  if(digitalRead(button2) == LOW){
    if(number == 5){
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("R=");
      lcd.print(R);
      lcd.setCursor(8, 0);
      lcd.print("G=");
      lcd.print(G);
      lcd.setCursor(0, 1);
      lcd.print("B=");
      lcd.print(B);  
      R = R / 2;
      G = G / 2;
      B = B / 2;
      pixels.setPixelColor( number,pixels.Color( R, G, B));
      pixels.show();
      delay(500);
     } 
    }
   }
   
/////////////////////GAME/////////////////////

if(number == 13){
if(digitalRead(button2) == LOW ){ //button checking
  delay(50);
    if(digitalRead(button2) == LOW ){
      delay(200);
    
    if(digitalRead(button2) == HIGH){
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("The Game Starts");
      lcd.setCursor(0, 1);
      lcd.print("IN 5S");
      delay(1000);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("The Game Starts");
      lcd.setCursor(0, 1);
      lcd.print("IN 4S");
      delay(1000);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("The Game Starts");
      lcd.setCursor(0, 1);
      lcd.print("IN 3S");
      delay(1000);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("The Game Starts");
      lcd.setCursor(0, 1);
      lcd.print("IN 2S");
      delay(1000);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("The Game Starts");
      lcd.setCursor(0, 1);
      lcd.print("IN 1S");
      delay(1000);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("START");
      delay(1000);
      lcd.clear();
      
      int snakespeed = 100;
      int snake = 0;
      
      while(digitalRead(button2) == HIGH){
      
      pixels.setPixelColor( snake,pixels.Color( R, G, B));
      pixels.show();
      snake = snake + 1;
      delay(snakespeed);
      pixels.clear();
      
      //SCORE
      
       if(snake > 25){
       snake = snake - 26;
       lcd.home();      
         }
        if(digitalRead(button1) == LOW){
          if(snake == 14){
          
            lcd.clear();
            lcd.home();
            lcd.print("YOU WON");
            pixels.setPixelColor(0,pixels.Color( R, G, B));
            pixels.setPixelColor(1,pixels.Color( R, G, B));
            pixels.setPixelColor(2,pixels.Color( R, G, B));
            pixels.setPixelColor(3,pixels.Color( R, G, B));
            pixels.setPixelColor(4,pixels.Color( R, G, B));
            pixels.setPixelColor(5,pixels.Color( R, G, B));
            pixels.setPixelColor(6,pixels.Color( R, G, B));
            pixels.setPixelColor(7,pixels.Color( R, G, B));
            pixels.setPixelColor(8,pixels.Color( R, G, B));
            pixels.setPixelColor(9,pixels.Color( R, G, B));
            pixels.setPixelColor(10,pixels.Color( R, G, B));
            pixels.setPixelColor(11,pixels.Color( R, G, B));
            pixels.setPixelColor(12,pixels.Color( R, G, B));
            pixels.setPixelColor(13,pixels.Color( R, G, B));
            pixels.setPixelColor(14,pixels.Color( R, G, B));
            pixels.setPixelColor(15,pixels.Color( R, G, B));
            pixels.setPixelColor(16,pixels.Color( R, G, B));
            pixels.setPixelColor(17,pixels.Color( R, G, B));
            pixels.setPixelColor(18,pixels.Color( R, G, B));
            pixels.setPixelColor(19,pixels.Color( R, G, B));
            pixels.setPixelColor(20,pixels.Color( R, G, B));
            pixels.setPixelColor(21,pixels.Color( R, G, B));
            pixels.setPixelColor(22,pixels.Color( R, G, B));
            pixels.setPixelColor(23,pixels.Color( R, G, B));
            pixels.setPixelColor(24,pixels.Color( R, G, B));
            pixels.setPixelColor(25,pixels.Color( R, G, B));
            pixels.show();
            delay(500);
            pixels.clear();
            delay(500);
            pixels.setPixelColor(0,pixels.Color( R, G, B));
            pixels.setPixelColor(1,pixels.Color( R, G, B));
            pixels.setPixelColor(2,pixels.Color( R, G, B));
            pixels.setPixelColor(3,pixels.Color( R, G, B));
            pixels.setPixelColor(4,pixels.Color( R, G, B));
            pixels.setPixelColor(5,pixels.Color( R, G, B));
            pixels.setPixelColor(6,pixels.Color( R, G, B));
            pixels.setPixelColor(7,pixels.Color( R, G, B));
            pixels.setPixelColor(8,pixels.Color( R, G, B));
            pixels.setPixelColor(9,pixels.Color( R, G, B));
            pixels.setPixelColor(10,pixels.Color( R, G, B));
            pixels.setPixelColor(11,pixels.Color( R, G, B));
            pixels.setPixelColor(12,pixels.Color( R, G, B));
            pixels.setPixelColor(13,pixels.Color( R, G, B));
            pixels.setPixelColor(14,pixels.Color( R, G, B));
            pixels.setPixelColor(15,pixels.Color( R, G, B));
            pixels.setPixelColor(16,pixels.Color( R, G, B));
            pixels.setPixelColor(17,pixels.Color( R, G, B));
            pixels.setPixelColor(18,pixels.Color( R, G, B));
            pixels.setPixelColor(19,pixels.Color( R, G, B));
            pixels.setPixelColor(20,pixels.Color( R, G, B));
            pixels.setPixelColor(21,pixels.Color( R, G, B));
            pixels.setPixelColor(22,pixels.Color( R, G, B));
            pixels.setPixelColor(23,pixels.Color( R, G, B));
            pixels.setPixelColor(24,pixels.Color( R, G, B));
            pixels.setPixelColor(25,pixels.Color( R, G, B));
            pixels.show();
            delay(500);
            pixels.clear();
            delay(500);
            
            //lcd.setCursor(0, 1);
            //SCORE
            delay(2000);
            lcd.clear();
            snakespeed = snakespeed - 15;
              if(snakespeed < 15){
                snakespeed = 15;
              }
            }
           }
          }
        }
      }
    }
  }
  if(number == 0){
    pixels.setPixelColor( number,pixels.Color( R, G, B));
    pixels.show();
  }
  if(number == 25){
    pixels.setPixelColor( number,pixels.Color( R, G, B));
    pixels.show();
  }
 pixels.clear();
  
  float h1 = dht1.readHumidity();                               //                          
  float t1 = dht1.readTemperature();                           ///                            
  float f1 = dht1.readTemperature(true);                      ////                                
  if (isnan(h1) || isnan(t1) || isnan(f1)) {                 // //                                      
  lcd.setCursor(0, 0);                                      //  //                           
  lcd.print(F("Failed read DHT1"));                             //                                  
  return;}                                                      //                       
  float hif1 = dht1.computeHeatIndex(f1, h1);                   //                   
  float hic1 = dht1.computeHeatIndex(t1, h1, false);
  
  lcd.setCursor(0, 0);
  lcd.print(t1);
  lcd.print(F("C"));
  lcd.setCursor(0,1);

  lcd.setCursor(0, 1);
  lcd.print(h1);
  lcd.print("%");
  lcd.setCursor(0,1);

  jasnosc = analogRead(A7);
  procentjasnosci = map(brightness, 0, 500, 0, 100);
  lcd.setCursor(8, 0);
  lcd.print("=O= ");
  lcd.print(percentageofbrightness);
  lcd.print("%");

  
  lcd.setCursor(8, 1);
  lcd.print(number);
  
  if(number < 10){
    lcd.setCursor(8, 1);
    lcd.print("  ");
    lcd.setCursor(8, 1);
    lcd.print(number);
    }
}  
