--------------------------------------------------------------------------------
-- (c) Empresarios Agrupados - EcosimPro Simulation Source Code
-- FILE NAME: DIS_Common.el
-- DESCRIPTION: Defines common ports and components for discrete simulation
-- NOTES:
-- AUTHOR: Luis Ordoñez Inda
-- CREATION DATE: 1/12/2000
--------------------------------------------------------------------------------
USE MATH 
-- Ports
--------------------------------------------------------------------------------
-- Port for logical connections
--------------------------------------------------------------------------------
PORT DigitalPort "Logical port"
   EQUAL BOOLEAN s = TRUE         	"Logical boolean signal (TRUE/FALSE)"

END PORT


-- Components
--------------------------------------------------------------------------------
-- Component that represents a clock signal generator
--------------------------------------------------------------------------------
COMPONENT Clock
   "Clock signal generator"

   PORTS
      OUT DigitalPort po          	"Output logical signal port"

   DATA
      REAL period = 1.            	UNITS	u_s		"Period"

   DECLS
      DISCR REAL nextTime         	UNITS u_s	   "Next time for signal change"

   INIT
      nextTime = period / 2.

   DISCRETE
      WHEN (TIME >= nextTime) THEN
         po.s = NOT po.s AFTER 0.
         nextTime += period / 2.
      END WHEN

END COMPONENT

--------------------------------------------------------------------------------
-- Component that represents a reset signal generator
--------------------------------------------------------------------------------
COMPONENT Reset
   "Reset signal generator"

   PORTS
      OUT DigitalPort po          	"Output logical signal port"

   DATA
      REAL delay = 2.              	UNITS u_s		"Delay"

   INIT
      po.s = FALSE AFTER delay

END COMPONENT

--------------------------------------------------------------------------------
-- Component that represents a flip-flop
--------------------------------------------------------------------------------
COMPONENT T_flip_flop
   "Flip-flop"

   PORTS
      IN DigitalPort pi           	"Input logical signal port"
      IN DigitalPort clock        	"Input clock signal port"
      IN DigitalPort reset        	"Input reset signal port"
      OUT DigitalPort po          	"Output logical signal port"

   DATA
      REAL delay = 0.1            	UNITS u_s		"Delay"

   DISCRETE
      WHEN (clock.s == FALSE) THEN
         IF (NOT reset.s) THEN
            po.s = NOT pi.s AFTER delay
         END IF
      END WHEN 

      WHEN (reset.s == TRUE) THEN
         po.s = FALSE AFTER 0.
      END WHEN

END COMPONENT
