/*
  Plant.h - Library for creating plant objects for controlling watering
  Created by Sam Dicker on 18.07.2024
*/

#ifndef Plant_h
#define Plant_h

#include "Arduino.h"

class Plant{
    private:
      int WaterSensorPin;
      int ValvePin;
      long tDelay;
      int minWaterLevel;
      int maxWaterLevel;
      int WaterLevel;
      String Name;

      void initWaterSensor();
      void initValve();

    public:
      Plant();
      Plant(int, int, String);
      Plant(int,int,long,int,int,String);

      void setWaterSensorPin(int);
      void setValvePin(int);
      void settDelay(long);
      void setMinWaterLevel(int);
      void setMaxWaterLevel(int);
      void setWaterLevel(int);
      void setName(String);

      int getWaterSensorPin();
      int getValvePin();
      long gettDelay();
      int getMinWaterLevel();
      int getMaxWaterLevel();
      int getWaterLevel();
      String getName();
};

#endif