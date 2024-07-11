# Pic18F4620_Drivers
## Pin Diagram
![Screenshot 2024-07-12 013429](https://github.com/user-attachments/assets/fbfb294e-704b-4d01-850e-1f66065d8595)
### Introduction
The PIC drivers for PIC18F4620 are a collection of C libraries that simplify the process of utilizing the microcontroller's hardware peripherals such as GPIO, UART, ADC, Timer/Counter, etc. These drivers abstract the low-level register manipulations and provide easy-to-use functions for interacting with the peripherals.
#### MCAL Layer

   GPIO Driver: For configuring and manipulating General Purpose Input/Output pins.

   ADC Driver: For Analog to Digital Converter.

   CCP Driver: For Capture,Compare and PWM 
 
   EEPROM Driver:For interface with EEPROM.

   Timer Drivers: For utilizing the Timer/Counter modules for various timing and PWM applications.

   USART Driver: For USART serial communication with other devices.

   SPI Driver: For Serial Peripheral Interface Communication with other devices.

   I2C Driver: For two wire interface Communication with other devices.
   
   Interrupt Driver:For handling External &Internal Interrupts.


##### ECU Layer 
  Chr_LCD: For interfacing with Liquad Crystal Display

  KEYPAD: For interfacing with 4X4 keypad.      

  Seven Segment: For interfacing with seven segment display common [Anode/Cathode] .

  DC_Motor: For interfacing with DC Motors Connected to L293 H-bridge.

  Button : For Interfacing push Button as Active High & Active Low.

  Relay : For Interfacing  Relay as a Magnetic Switch.

  Led   : For Interfacing  Led On,Off and Toggle.

  Ultrasonic : For Detecting Objects.

  
  
  
   
