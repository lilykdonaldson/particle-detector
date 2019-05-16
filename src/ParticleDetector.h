/*

    This is a library for a particle detector 

    Functions include
    -      I2C communication
    - 

*/

#ifndef ParticleDetector_h
#define ParticleDetector_h

#pragma once

#include <Arduino.h>
#include "inttypes.h"
#include "Wire.h"
#include "xCore.h"
#include "math.h"

class ParticleDetector {
    public:
        ParticleDetector(void);
        int getDetections();
        float getTimeSinceLastDetection();
        float getDetectionsPerMin();
        float getAvgTimeBetweenDetections();
        float getAvgMagnitude();

    private:
        int detections;

};


#endif