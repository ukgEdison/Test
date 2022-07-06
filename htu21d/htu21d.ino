#include <SparkFunHTU21D.h>                  //скачиваем библиотеку

#include <Wire.h>                            // Подключаем библиотеку Wire
//#include "SparkFunHTU21D.h"                  // Подключаем библиотеку SparkFunHTU21D
 
HTU21D myHumidity;                           // Создаем объект для работы с датчиком                
 
void setup()
{
  Serial.begin(9600);                        // Открытие последовательного порта на скорости 9600
  Serial.println("HTU21D Example!");         // Отправка сообщения в последовательного порт
 
  myHumidity.begin();                        // Инициализация HTU21D
}
 
void loop()
{
  float humd = myHumidity.readHumidity();    // Считываем влажность
  float temp = myHumidity.readTemperature(); // Считываем температуру
 
  Serial.print("Temperature:");              // Отправка сообщения
  Serial.print(temp, 1);                     // Отправка температуры
  Serial.print("C");                         // Отправка сообщения
  Serial.print(" Humidity:");                // Отправка сообщения
  Serial.print(humd, 1);                     // Отправка влажности
  Serial.print("%");                         // Отправка сообщения

  Serial.println();                          // Отправка сообщения

  delay(1000);                               // Пауза
}
