/*! \file    OCPConst.hpp
 *  \brief   Definition of build-in datatypes and consts
 *  \author  Shizhe Li
 *  \date    Oct/01/2021
 *
 *-----------------------------------------------------------------------------------
 *  Copyright (C) 2021--present by the OpenCAEPoro team. All rights reserved.
 *  Released under the terms of the GNU Lesser General Public License 3.0 or later.
 *-----------------------------------------------------------------------------------
 */

#ifndef __OPENCAEPORO_CONSTS_HEADER__
#define __OPENCAEPORO_CONSTS_HEADER__

// Standard header files
#include <iostream>

// OpenCAEPoro header files
#include "UtilError.hpp"

// Build-in data type
typedef unsigned int       USI;     ///< Generic unsigned integer
typedef unsigned long long OCP_ULL; ///< Long long unsigned integer
typedef unsigned int       OCP_USI; ///< Long unsigned integer
typedef int                OCP_INT; ///< Long integer
typedef double             OCP_DBL; ///< Double precision
typedef float              OCP_SIN; ///< Single precision

// General consts
const OCP_DBL GAS_CONSTANT = 10.73159;    ///< Gas Constant
const OCP_DBL TINY         = 1E-8;        ///< Small constant
const OCP_DBL PI           = 3.141592653; ///< Pi

// Control consts
const OCP_DBL MAX_TIME_STEP     = 365.0; ///< Maximal time stepsize
const OCP_DBL MIN_TIME_STEP     = 0.01;  ///< Minimal time stepsize
const OCP_DBL MIN_TIME_CURSTEP  = 1E-6;  ///< Minimal time stepsize of current step ???
const OCP_DBL TIME_STEP_CUT     = 0.5;   ///< Time stepsize cut ratio
const OCP_DBL TIME_STEP_AMPLIFY = 2.0;   ///< Time stepsize amplification ratio
const OCP_DBL MAX_VOLUME_ERR    = 0.01;  ///< Maximal volume error
const OCP_DBL MAX_DP_LIMIT      = 200;   ///< Maximal pressure change
const OCP_DBL MAX_DS_LIMIT      = 0.1;   ///< Maximal saturation change
const OCP_DBL TARGET_DP         = 50;    ///< Target pressure change
const OCP_DBL TARGET_DS         = 0.01;  ///< Target saturation change

// Physical consts
const OCP_DBL GRAVITY_FACTOR  = 0.00694444; ///< 0.00694444 ft2 psi / lb
const OCP_DBL RHOW_STD        = 62.3664;    ///< Water density in lb / ft3
const OCP_DBL RHOAIR_STD      = 0.076362;   ///< Air density in lb / ft3
const OCP_DBL PRESSURE_STD    = 14.7;       ///< 14.6959 psia = 1 atm
const OCP_DBL TEMPERATURE_STD = 519.67;     ///< Standard temperature

// Unit conversion consts
const OCP_DBL CONV1 = 5.61458;    ///< 1 bbl = CONV1 ft3
const OCP_DBL CONV2 = 1.12712E-3; ///< Darcy constant in field unit
const OCP_DBL CONV3 = 0.45359237; ///< 1 lb = CONV3 kg
const OCP_DBL CONV4 = 0.02831685; ///< 1 ft3 = CONV4 m3

// Grid Type
const USI ORTHOGONAL_GRID = 1; ///< Grid type = orthogonal
const USI CORNER_GRID     = 2; ///< Grid type = corner-point
const USI GENERAL_GRID    = 3; ///< Grid type = general

// Solution methods
const USI IMPEC = 1; ///< Solution method = IMPEC
const USI FIM   = 2; ///< Solution method = FIM
const USI IMPEC_P = 11; ///< improved version of IMPEC

// Fluid types
const USI OIL     = 0; ///< Fluid type = oil
const USI GAS     = 1; ///< Fluid type = gas
const USI WATER   = 2; ///< Fluid type = water
const USI SOLVENT = 3; ///< Fluid type = solvent

// Mixture types
const USI BLKOIL   = 1; ///< Mixture model = black-oil
const USI EOS_PVTW = 2; ///< Mixture model = equation-of-state

// EoS models
const USI EOS_PR  = 1; ///< EoS model = PR
const USI EOS_SRK = 2; ///< EoS model = SRK

// Phase types
const USI PHASE_W    = 1; ///< Phase type = water only
const USI PHASE_GW   = 2; ///< Phase type = gas-water
const USI PHASE_OW   = 3; ///< Phase type = oil-water
const USI PHASE_OG   = 4; ///< Phase type = oil-gas
const USI PHASE_ODGW = 5; ///< Phase type = oil-dry gas-water
const USI PHASE_DOGW = 6; ///< Phase type = dead oil-gas-water
const USI PHASE_ODGW01 = 51; ///< Phase type = oil-dry gas-water
const USI PHASE_ODGW02 = 52; ///< Phase type = oil-dry gas-water
const USI PHASE_ODGW01_MISCIBLE = 511; ///< Phase type = oil-dry gas-water

// Well params
const USI  INJ        = 1;     ///< Well type = injector
const USI  PROD       = 2;     ///< Well type = producer
const USI  HORIZONTAL = 1;     ///< Well type = horizontal
const USI  VERTICAL   = 2;     ///< Well type = vectical
const bool OPEN       = true;  ///< Well type = open
const bool CLOSE      = false; ///< Well type = closed

// Well option params
const USI RATE_MODE  = 1; ///< Well option = fixed total rate???
const USI ORATE_MODE = 2; ///< Well option = fixed oil rate
const USI GRATE_MODE = 3; ///< Well option = fixed gas rate
const USI WRATE_MODE = 4; ///< Well option = fixed water rate
const USI LRATE_MODE = 5; ///< Well option = fixed fluid rate???
const USI BHP_MODE   = 6; ///< Well option = fixed bottom-hole-pressure

// Perforation directions
const USI X_DIRECTION = 1; ///< x-direction
const USI Y_DIRECTION = 2; ///< y-direction
const USI Z_DIRECTION = 3; ///< z-direction

#endif // __OPENCAEPORO_CONSTS_HEADER__

/*----------------------------------------------------------------------------*/
/*  Brief Change History of This File                                         */
/*----------------------------------------------------------------------------*/
/*  Author              Date             Actions                              */
/*----------------------------------------------------------------------------*/
/*  Shizhe Li           Oct/01/2021      Create file                          */
/*  Chensong Zhang      Oct/15/2021      Format file                          */
/*  Chensong Zhang      Oct/27/2021      Unify error check                    */
/*  Chensong Zhang      Jan/16/2022      Update Doxygen                       */
/*----------------------------------------------------------------------------*/