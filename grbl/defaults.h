/*
  defaults.h - defaults settings configuration file
  Part of Grbl

  Copyright (c) 2017-2018 Gauthier Briere
  Copyright (c) 2012-2016 Sungeun K. Jeon for Gnea Research LLC

  Grbl is free software: you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation, either version 3 of the License, or
  (at your option) any later version.

  Grbl is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.

  You should have received a copy of the GNU General Public License
  along with Grbl.  If not, see <http://www.gnu.org/licenses/>.
*/

/* The defaults.h file serves as a central default settings selector for different machine
   types, from DIY CNC mills to CNC conversions of off-the-shelf machines. The settings
   files listed here are supplied by users, so your results may vary. However, this should
   give you a good starting point as you get to know your machine and tweak the settings for
   your nefarious needs.
   NOTE: Ensure one and only one of these DEFAULTS_XXX values is defined in config.h */

#ifndef defaults_h

#ifdef DEFAULTS_GENERIC
  // Grbl generic default settings. Should work across different machines.
  #define DEFAULT_AXIS1_STEPS_PER_UNIT 250.0
  #define DEFAULT_AXIS2_STEPS_PER_UNIT 250.0
  #define DEFAULT_AXIS3_STEPS_PER_UNIT 250.0
  #define DEFAULT_AXIS1_MAX_RATE 500.0 // mm/min
  #define DEFAULT_AXIS2_MAX_RATE 500.0 // mm/min
  #define DEFAULT_AXIS3_MAX_RATE 500.0 // mm/min
  #define DEFAULT_AXIS1_ACCELERATION (10.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_AXIS2_ACCELERATION (10.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_AXIS3_ACCELERATION (10.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_AXIS1_MAX_TRAVEL 200.0 // mm NOTE: Must be a positive value.
  #define DEFAULT_AXIS2_MAX_TRAVEL 200.0 // mm NOTE: Must be a positive value.
  #define DEFAULT_AXIS3_MAX_TRAVEL 200.0 // mm NOTE: Must be a positive value.
  #define DEFAULT_SPINDLE_RPM_MAX 1000.0 // rpm
  #define DEFAULT_SPINDLE_RPM_MIN 0.0 // rpm
  #define DEFAULT_STEP_PULSE_MICROSECONDS 10
  #define DEFAULT_STEPPING_INVERT_MASK 0
  #define DEFAULT_DIRECTION_INVERT_MASK 0
  #define DEFAULT_STEPPER_IDLE_LOCK_TIME 25 // msec (0-254, 255 keeps steppers enabled)
  #define DEFAULT_STATUS_REPORT_MASK 1 // MPos enabled
  #define DEFAULT_JUNCTION_DEVIATION 0.01 // mm
  #define DEFAULT_ARC_TOLERANCE 0.002 // mm
  #define DEFAULT_REPORT_INCHES 0 // false
  #define DEFAULT_INVERT_ST_ENABLE 0 // false
  #define DEFAULT_INVERT_LIMIT_PINS 0 // false
  #define DEFAULT_SOFT_LIMIT_ENABLE 0 // false
  #define DEFAULT_HARD_LIMIT_ENABLE 0  // false
  #define DEFAULT_INVERT_PROBE_PIN 0 // false
  #define DEFAULT_LASER_MODE 0 // false
  #define DEFAULT_HOMING_ENABLE 0  // false
  #define DEFAULT_HOMING_DIR_MASK 0 // move positive dir
  #define DEFAULT_HOMING_FEED_RATE 25.0 // mm/min
  #define DEFAULT_HOMING_SEEK_RATE 500.0 // mm/min
  #define DEFAULT_HOMING_DEBOUNCE_DELAY 250 // msec (0-65k)
  #define DEFAULT_HOMING_PULLOFF 1.0 // mm
#endif

#ifdef DEFAULTS_SIMULATOR
  // Settings only for Grbl Simulator (www.github.com/grbl/grbl-sim)
  // Grbl generic default settings. Should work across different machines.
  #define DEFAULT_AXIS1_STEPS_PER_UNIT 1000.0
  #define DEFAULT_AXIS2_STEPS_PER_UNIT 1000.0
  #define DEFAULT_AXIS3_STEPS_PER_UNIT 1000.0
  #define DEFAULT_AXIS1_MAX_RATE 1000.0 // mm/min
  #define DEFAULT_AXIS2_MAX_RATE 1000.0 // mm/min
  #define DEFAULT_AXIS3_MAX_RATE 1000.0 // mm/min
  #define DEFAULT_AXIS1_ACCELERATION (100.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_AXIS2_ACCELERATION (100.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_AXIS3_ACCELERATION (100.0*60*60) // 10*60*60 mm/min^2 = 10 mm/sec^2
  #define DEFAULT_AXIS1_MAX_TRAVEL 1000.0 // mm NOTE: Must be a positive value.
  #define DEFAULT_AXIS2_MAX_TRAVEL 1000.0 // mm NOTE: Must be a positive value.
  #define DEFAULT_AXIS3_MAX_TRAVEL 1000.0 // mm NOTE: Must be a positive value.
  #define DEFAULT_SPINDLE_RPM_MAX 1000.0 // rpm
  #define DEFAULT_SPINDLE_RPM_MIN 0.0 // rpm
  #define DEFAULT_STEP_PULSE_MICROSECONDS 10
  #define DEFAULT_STEPPING_INVERT_MASK 0
  #define DEFAULT_DIRECTION_INVERT_MASK 0
  #define DEFAULT_STEPPER_IDLE_LOCK_TIME 25 // msec (0-254, 255 keeps steppers enabled)
  #define DEFAULT_STATUS_REPORT_MASK 1 // MPos enabled
  #define DEFAULT_JUNCTION_DEVIATION 0.01 // mm
  #define DEFAULT_ARC_TOLERANCE 0.002 // mm
  #define DEFAULT_REPORT_INCHES 0 // false
  #define DEFAULT_INVERT_ST_ENABLE 0 // false
  #define DEFAULT_INVERT_LIMIT_PINS 0 // false
  #define DEFAULT_SOFT_LIMIT_ENABLE 0 // false
  #define DEFAULT_HARD_LIMIT_ENABLE 0  // false
  #define DEFAULT_INVERT_PROBE_PIN 0 // false
  #define DEFAULT_LASER_MODE 0 // false
  #define DEFAULT_HOMING_ENABLE 0  // false
  #define DEFAULT_HOMING_DIR_MASK 0 // move positive dir
  #define DEFAULT_HOMING_FEED_RATE 25.0 // mm/min
  #define DEFAULT_HOMING_SEEK_RATE 500.0 // mm/min
  #define DEFAULT_HOMING_DEBOUNCE_DELAY 250 // msec (0-65k)
  #define DEFAULT_HOMING_PULLOFF 1.0 // mm
#endif

#ifdef DEFAULTS_RAMPS_BOARD
  #define DEFAULT_AXIS1_STEPS_PER_UNIT 25.027 //$100
  #define DEFAULT_AXIS2_STEPS_PER_UNIT 1.0 // $101
  #define DEFAULT_AXIS3_STEPS_PER_UNIT 17.778 //$102
  #define DEFAULT_AXIS1_MAX_RATE 5000.0 // $110 9000 mm/min = 9000/60 = 150 mm/sec
  #define DEFAULT_AXIS2_MAX_RATE 1.0 // $111 9000 mm/min = 9000/60 = 150 mm/sec
  #define DEFAULT_AXIS3_MAX_RATE 5100.0  // $112  300 mm/min =  300/60 =   5 mm/sec
  #define DEFAULT_AXIS1_ACCELERATION (24800.0*60*60) // $120 300*60*60 mm/min^2 = 300 mm/sec^2
  #define DEFAULT_AXIS2_ACCELERATION (1.0*60*60) // $121 300*60*60 mm/min^2 = 300 mm/sec^2
  #define DEFAULT_AXIS3_ACCELERATION (300.0*60*60) // $122 100*60*60 mm/min^2 = 100 mm/sec^2
  #define DEFAULT_AXIS1_MAX_TRAVEL 1000.0 // mm $130
  #define DEFAULT_AXIS2_MAX_TRAVEL 1000.0 // mm $131
  #define DEFAULT_AXIS3_MAX_TRAVEL 1000.0 // mm $132
  #if N_AXIS > 3
    #define DEFAULT_AXIS4_STEPS_PER_UNIT 1.0 // $103 Direct drive : (200 pas par tours * 1/16 microsteps)/360°
    #define DEFAULT_AXIS4_MAX_RATE 1.0 // $113 °/mn
    #define DEFAULT_AXIS4_ACCELERATION (1.0*60*60) // $123 100*60*60 mm/min^2 = 100 mm/sec^2
    #define DEFAULT_AXIS4_MAX_TRAVEL 720.0 // $133°
  #endif
  #if N_AXIS > 4
    #define DEFAULT_AXIS5_STEPS_PER_UNIT 40.772 // $104 Direct drive : (200 pas par tours * 1/16 microsteps)/360°
    #define DEFAULT_AXIS5_MAX_RATE 17500.0 // $114°/mn
    #define DEFAULT_AXIS5_ACCELERATION (8000.0*60*60) // $124 100*60*60 mm/min^2 = 100 mm/sec^2
    #define DEFAULT_AXIS5_MAX_TRAVEL 720.0 // $134 °
  #endif
  #if N_AXIS > 5
    #define DEFAULT_AXIS6_STEPS_PER_UNIT 17.778 // $105 Direct drive : (200 pas par tours * 1/16 microsteps)/360°
    #define DEFAULT_AXIS6_MAX_RATE 35300.0 // $115 °/mn
    #define DEFAULT_AXIS6_ACCELERATION (10590.0*60*60) // $125 100*60*60 mm/min^2 = 100 mm/sec^2
    #define DEFAULT_AXIS6_MAX_TRAVEL 720.0 // $135 °
  #endif
  #define DEFAULT_SPINDLE_RPM_MAX 1000.0 // $30 rpm
  #define DEFAULT_SPINDLE_RPM_MIN 0.0 // $31 min rpm
  #define DEFAULT_STEP_PULSE_MICROSECONDS 10 // $0
  #define DEFAULT_STEPPING_INVERT_MASK 0 // $2
  #define DEFAULT_DIRECTION_INVERT_MASK 17 // $3
  #define DEFAULT_STEPPER_IDLE_LOCK_TIME 255 // $1 msec (0-254, 255 keeps steppers enabled)
  #define DEFAULT_STATUS_REPORT_MASK 1 // $10 MPos enabled
  #define DEFAULT_JUNCTION_DEVIATION 0.02 // $11 mm
  #define DEFAULT_ARC_TOLERANCE 0.002 //  $12 mm
  #define DEFAULT_REPORT_INCHES 0 // $13 false
  #define DEFAULT_INVERT_ST_ENABLE 0 // $4 false
  #define DEFAULT_INVERT_LIMIT_PINS 0 // $5 false
  #define DEFAULT_SOFT_LIMIT_ENABLE 0 // $20 true
  #define DEFAULT_HARD_LIMIT_ENABLE 1  // $21 false
  #define DEFAULT_INVERT_PROBE_PIN 0 // $6 false
  #define DEFAULT_LASER_MODE 0 // $32 false
  #define DEFAULT_HOMING_ENABLE 1  // $22 true
  #define DEFAULT_HOMING_DIR_MASK 63 // $23 move positive dir
  #define DEFAULT_HOMING_FEED_RATE 25.0 // $24 mm/min
  #define DEFAULT_HOMING_SEEK_RATE 20000.0 // $25 mm/min
  #define DEFAULT_HOMING_DEBOUNCE_DELAY 25 // $26 msec (0-65k)
  #define DEFAULT_HOMING_PULLOFF 2.0 // $27 mm
#endif

#endif
