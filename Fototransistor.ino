#include<LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);//Inicializar la libreria indicando los pins de la interfaz
void setup() {
  Serial.begin(9600);
  lcd.begin(16,2);//Configuramos las filas y columnas de la pantalla
  pinMode(A0,INPUT);

}

 double pot1=0;
 double v=0;
 double x=0;
void loop() {
  delay(1000);
  lcd.clear();
  lcd.setCursor(0,0);//Ubicar el cursor en la columna 0 y fila 0
  lcd.print("Sensor CNY-70");
  pot1=analogRead(A0);
  v=5*pot1/1023;
  x=17.93666667-8.164965809*sqrt(0.9160601667+v);
  lcd.setCursor(0,1);
  lcd.print("Distancia:");
  lcd.setCursor(10,1);
  lcd.print(x);
  lcd.setCursor(14,1);
  lcd.print("mm");
  
  

}
