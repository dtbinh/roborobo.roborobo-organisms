/*
 *  SDL_gfxPrimitivesExtra.h
 *  roborobo
 *
 *  Created by Nicolas on 05/01/09.
 *  Copyright 2009 __MyCompanyName__. All rights reserved.
 *
 */

#ifndef SDL_GFXPRIMITIVESEXTRA
#define SDL_GFXPRIMITIVESEXTRA

#include "Utilities/SDL_gfxPrimitives.h"
#include "RoboroboMain/roborobo.h"

struct SensorRay {
    double x1, y1;
    double x2, y2;
    int maxRange;
    double xReal, yReal, orientationAngle; // Not really needed, but can come in handy, if we want to pass all the required information in one piece.
    int idx;
};

void traceRayRGBA(SDL_Surface * dst, int x1, int y1, int x2, int y2, Uint8 r, Uint8 g, Uint8 b, Uint8 a);
int castSensorRay(SDL_Surface* surface, SensorRay sensorRay, int* ranges, int* pixels);
int castSensorRay(SDL_Surface* image, double x1, double y1, double * x2pt, double * y2pt , int __maxValue = -1);

int RenderTextToSurface(std::string Text, int x, int y, SDL_Surface *Dest, SDL_Color *TXT_Color);


#endif /* SDL_GFXPRIMITIVESEXTRA */

