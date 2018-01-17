/*
 HackCube.cpp - Library wrap connection method in HackCube sensor network. Contains common functions for all cubes.
  Created by Sebastian Czarnecki, January 20, 2018.
  Released into the public domain.
*/

#include "Arduino.h"
#include "HackCube.h"

HackCube::HackCube()
{
}

HackCub::CUBE_ADDRESS = "";

String HackCube::ConstructMessage(String content)
{
  String separator = "|";
  String message = CUBE_ADDRESS + separator + content;

  return message;
}

void HackCube::Connect()
{
}
