//Enjoy!
#include <IRremote.h>





// указание пина, к которому подключен ИК-приёмник
const byte IR_RECEIVE_PIN = 4;
void setup()
{
    
    pinMode(9, OUTPUT);
    pinMode(8, OUTPUT);
    pinMode(7, OUTPUT);
    pinMode(6, OUTPUT);     
    Serial.begin(9600);
 
//активация режима приема ИК-сигналов
  IrReceiver.begin(IR_RECEIVE_PIN);
}
//Движение вперед на заданное количество клеток
void forward(int a)
{
for(int i = 0; i != a; ++i) {
    digitalWrite(9, 0);
    digitalWrite(8, 1);
    digitalWrite(7, 1);
    digitalWrite(6, 0);
     delay(330);
    shortstop();}
}
//Поворот на 90 градусов
void right(){
     digitalWrite(9, 0);
    digitalWrite(8, 1);
    digitalWrite(7, 0);
    digitalWrite(6, 1);

     delay(203);
     shortstop();

}

void left(){
     digitalWrite(9, 1);
    digitalWrite(8, 0);
    digitalWrite(7, 1);
    digitalWrite(6, 0);

     delay(203);
     shortstop();

}

//длинная пауза, конец программы
void longstop(){
digitalWrite(9, 0);
    digitalWrite(8, 0);
    digitalWrite(7, 0);
    digitalWrite(6, 0);
     delay(111111100);
    

}
void shortstop(){
     digitalWrite(9, 0);
    digitalWrite(8, 0);
    digitalWrite(7, 0);
    digitalWrite(6, 0);

     delay(50);

}

void loop()
{
  if (IrReceiver.decode())
  {
    // вывод в монитор порта сырых данных
    // в десятичном формате
    Serial.println(IrReceiver.decodedIRData.decodedRawData);

     if (IrReceiver.decodedIRData.decodedRawData == 785449215){
          forward(1);
     } else if (IrReceiver.decodedIRData.decodedRawData == 735314175){
          right();
     } else if (IrReceiver.decodedIRData.decodedRawData == 768737535){
          shortstop();
     } else if (IrReceiver.decodedIRData.decodedRawData == 752025855){
          left();
     }
   
    // вывод справочной информации
    //IrReceiver.printIRResultShort(&Serial);
    shortstop();
    // подготовка  приемника к приему следующего сигнала
    IrReceiver.resume();
  }
    
     
}