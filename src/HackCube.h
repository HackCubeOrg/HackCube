/*
  HackCube.h - Library wrap connection method in HackCube sensor network. Contains common functions for all cubes.
  Created by Sebastian Czarnecki, January 20, 2018.
  Released into the public domain.
*/
#ifndef HackCube_h
#define HackCube_h

#include "Arduino.h"

class HackCube
{
  public:
    String CUBE_ADDRESS;
    HackCube();
    String ConstructMessage(String content);
    void Connect();
};

#endif
