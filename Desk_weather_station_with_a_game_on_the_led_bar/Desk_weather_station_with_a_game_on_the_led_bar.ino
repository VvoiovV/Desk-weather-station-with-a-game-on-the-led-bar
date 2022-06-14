





#include <LiquidCrystal.h>
LiquidCrystal lcd(10, 9, 8, 7, 6, 5);
/////////////////////////////////////////////////////////////////////////
#include "DHT.h" 
#define DHTTYPE DHT11
DHT dht1(11, DHTTYPE);
///////////////////////////////////////////////////////////////////////////////////
#include <Adafruit_NeoPixel.h>
Adafruit_NeoPixel pixels(26, 4, NEO_GRB + NEO_KHZ800);
  int R = 15;
  int G = 15;
  int B = 15;
  int numer = 0;
//////////////////////////////////////////////////////////////////////////////////
//PRZYCISK
  int przycisk1 = 3;
  int przycisk2 = 2; 
//////////////////////////////////////////////////////////////////////////////////
int jasnosc = 0;
int procentjasnosci = 0;
/////////////////////////////////////////////////////////////////////////////////////

void setup() {
//PRZYCISK
 pinMode(przycisk1, INPUT_PULLUP);
 pinMode(przycisk2, INPUT_PULLUP);
 
////////////////////////////////////////////////////////////////////////////  
  lcd.begin(16, 2);
  lcd.noBlink();
  lcd.home();
  lcd.print("Dzien dobry");
  dht1.begin();
  delay(3000);
  lcd.clear();
  
  
/////////////////////////////////////////////////////////////////////////
  pixels.begin();
  pixels.clear();
  R = R;
  G = G;
  B = B;
  pixels.setPixelColor(numer ,pixels.Color(R ,G ,B));
  pixels.show();
  
 
  
////////////////////////////////////////////////////////////////////////////
  



}


void loop() {
lcd.noBlink();

//////////////////////////////////////////////////////////////////////////
//PRZYCISK  1
if(digitalRead(przycisk1) == LOW){
  delay(70);
  if(digitalRead(przycisk1) == LOW){
    pixels.clear();
    numer = numer + 1;
    pixels.setPixelColor( numer,pixels.Color( R, G, B));
    pixels.show();
 
      if( numer > 25){
       numer = numer - 26;
    }
  }
}
  ////////////////                 /////////////////////
 ////////////////DODAWANIE KOLORU//////////////////////
////////////////                 /////////////////////
  if(digitalRead(przycisk2) == LOW ){
    delay(50);
  if(digitalRead(przycisk2) == LOW){
    if(numer == 0){
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
      pixels.setPixelColor( numer,pixels.Color( R, G, B));
      pixels.show();
      delay(500); 
        if(R > 250){
          R = R - 10;   
        }
     }
    }
   }

  if(digitalRead(przycisk2) == LOW ){
    delay(50);
  if(digitalRead(przycisk2) == LOW){
    if(numer == 1){
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
      pixels.setPixelColor( numer,pixels.Color( R, G, B));
      pixels.show();
      delay(500); 
        if(R > 250){
          G = G - 10;   
        }
     }
    }
   }

  if(digitalRead(przycisk2) == LOW ){
    delay(50);
  if(digitalRead(przycisk2) == LOW){
    if(numer == 2){
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
      pixels.setPixelColor( numer,pixels.Color( R, G, B));
      pixels.show();
      delay(500); 
        if(R > 250){
          B = B - 10;   
        }
     }
    }
   } 

  if(digitalRead(przycisk2) == LOW ){
    delay(50);
  if(digitalRead(przycisk2) == LOW){
    if(numer == 3){
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
      pixels.setPixelColor( numer,pixels.Color( R, G, B));
      pixels.show();
      delay(500); 
           
        
    } 
    }
   }
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////JASNOSC +//////////////////////

if(digitalRead(przycisk2) == LOW ){
    delay(50);
  if(digitalRead(przycisk2) == LOW){
    if(numer == 4){
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
      pixels.setPixelColor( numer,pixels.Color( R, G, B));
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
///////////////////JASNOSC -//////////////////////
if(digitalRead(przycisk2) == LOW ){
    delay(50);
  if(digitalRead(przycisk2) == LOW){
    if(numer == 5){
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
      pixels.setPixelColor( numer,pixels.Color( R, G, B));
      pixels.show();
      delay(500);
     } 
    }
   }
////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////GRA/////////////////////
if(numer == 13){
if(digitalRead(przycisk2) == LOW ){
  delay(50);
    if(digitalRead(przycisk2) == LOW ){
      delay(200);
    
    if(digitalRead(przycisk2) == HIGH){
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Gra zacznie sie");
      lcd.setCursor(0, 1);
      lcd.print("Za 5S");
      delay(1000);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Gra zacznie sie");
      lcd.setCursor(0, 1);
      lcd.print("Za 4S");
      delay(1000);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Gra zacznie sie");
      lcd.setCursor(0, 1);
      lcd.print("Za 3S");
      delay(1000);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Gra zacznie sie");
      lcd.setCursor(0, 1);
      lcd.print("Za 2S");
      delay(1000);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("Gra zacznie sie");
      lcd.setCursor(0, 1);
      lcd.print("Za 1S");
      delay(1000);
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("START");
      delay(1000);
      lcd.clear();
      
      int predkosc = 100;
      int wonsz = 0;
      
      while(digitalRead(przycisk2) == HIGH){
      
      pixels.setPixelColor( wonsz,pixels.Color( R, G, B));
      pixels.show();
      wonsz = wonsz + 1;
      delay(predkosc);
      pixels.clear();
      //SCORE
      
       if(wonsz > 25){
       wonsz = wonsz - 26;
       lcd.home();      
         }
        if(digitalRead(przycisk1) == LOW){
          if(wonsz == 14){
          
            lcd.clear();
            lcd.home();
            lcd.print("WYGRALES");
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
            //SCOREEEEEEEEEEEEEEEEEE
            delay(2000);
            lcd.clear();
            predkosc = predkosc - 15;
              if(predkosc < 15){
                predkosc = 15;
              }
             
            }
            }
          }
        }
      }
    }
  }
 
 
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  if(numer == 0){
    pixels.setPixelColor( numer,pixels.Color( R, G, B));
    pixels.show();
  }
  if(numer == 25){
    pixels.setPixelColor( numer,pixels.Color( R, G, B));
    pixels.show();
  }



///////////////////////////////////////////////////////////////////////////// 
 pixels.clear();
  
///////////////////////////////////////////////////////////////////////////
  float h1 = dht1.readHumidity();                               //                          
  float t1 = dht1.readTemperature();                           ///                            
  float f1 = dht1.readTemperature(true);                      ////                                
  if (isnan(h1) || isnan(t1) || isnan(f1)) {                 // //                                      
  lcd.setCursor(0, 0);                                      //  //                           
  lcd.print(F("Failed read DHT1"));                             //                                  
  return;}                                                      //                       
  float hif1 = dht1.computeHeatIndex(f1, h1);                   //                   
  float hic1 = dht1.computeHeatIndex(t1, h1, false);
///////////////////////////////////////////////////////////////////////////////////////
  lcd.setCursor(0, 0);
  lcd.print(t1);
  lcd.print(F("C"));
  lcd.setCursor(0,1);

  lcd.setCursor(0, 1);
  lcd.print(h1);
  lcd.print("%");
  lcd.setCursor(0,1);

  jasnosc = analogRead(A7);
  procentjasnosci = map(jasnosc, 0, 500, 0, 100);
  lcd.setCursor(8, 0);
  lcd.print("=O= ");
  lcd.print(procentjasnosci);
  lcd.print("%");

  
  lcd.setCursor(8, 1);
  lcd.print(numer);
  
  if(numer < 10){
    lcd.setCursor(8, 1);
    lcd.print("  ");
    lcd.setCursor(8, 1);
    lcd.print(numer);
    }
  
//////////////////////////////////////////////////////////////////////////////////

////////////////////////////////////////////////////////////////////////
  
}  
