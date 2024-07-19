/*
  Plant.cpp - Library for creating plant objects for controlling watering
  Created by Sam Dicker on 18.07.2024
*/

#include "Arduino.h"
#include "Plant.h"

/*
*
*/
Plant::Plant(){
    WaterSensorPin = 1;
    ValvePin = 2;
    tDelay = 1000;
    minWaterLevel = 0;
    maxWaterLevel = 255;
    String = "Unnamed Plant";

    initWaterSensor();
    initValve();
    getWaterLevel();
}

/*
*
*/
Plant::Plant(int WaterSensorPin, int ValvePin, String Name){
    this->WaterSensorPin = WaterSensorPin;
    this->ValvePin = ValvePin;
    tDelay = 1000;
    minWaterLevel = 0;
    maxWaterLevel = 255;
    this->Name = Name;

    initWaterSensor();
    initValve();
    getWaterLevel();
}

Plant::Plant(int WaterSensorPin, int ValvePin, long tDelay, int minWaterLevel, int maxWaterLevel, String Name){
    this->WaterSensorPin = WaterSensorPin;
    this->ValvePin = ValvePin;
    this->tDelay = tDelay;
    this->minWaterLevel = minWaterLevel;
    this->maxWaterLevel = maxWaterLevel;
    this->Name = Name;

    initWaterSensor();
    initValve();
    getWaterLevel();
}

void Plant::setWaterSensorPin(int){

}

void Plant::setValvePin(int){

}

void Plant::settDelay(long){

}

void Plant::setMinWaterLevel(int){

}

void Plant::setMaxWaterLevel(int){

}

void Plant::setWaterLevel(int){

}

void Plant::setName(String){
 
}

int Plant::getWaterSensorPin(){

}

int Plant::getValvePin(){

}

long Plant::gettDelay(){

}

int Plant::getMinWaterLevel(){

}

int Plant::getMaxWaterLevel(){

}

int Plant::getWaterLevel(){

}

String Plant::getName(){

}