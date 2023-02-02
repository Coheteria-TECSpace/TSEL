#ifndef ROCKET_H
#define ROCKET_H

#include <stdlib.h>
#include <stdio.h>

#include "DLLDefines.h"
#include "design_func.h"
#include "structs.h"

// TODO: free library structs function

// Function prototypes
trel_rocket_t TREL_EXPORT* trel_rocket_init(
    engine_t* engine,
    double telemetry_mass,
    double parachute_mass,
    double fuselage_mass,
    double payload_mass
);

#endif//ROCKET_H
