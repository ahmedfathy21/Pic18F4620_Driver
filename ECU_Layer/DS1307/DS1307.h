/* 
 * File:   DS1307.h
 * Author: Ahmed Fathy

 */

#ifndef DS1307_H
#define	DS1307_H


/* Section : Includes */
#include"../../MCAL_Layer/mcal_std_types.h"
#include"../../MCAL_Layer/GPIO/hal_gpio.h"
#include"../../MCAL_Layer/Interrupt/mcal_internal_interrupt.h"
#include"../../MCAL_Layer/I2C/hal_i2c.h"
/* Section: Macro Declarations */

/* Section: Macro Functions Declarations */



/* Section: Data Type Declarations */
typedef struct{
    uint8_t _Hours;
    uint8_t _Minutes;
    uint8_t _Seconds;
    uint8_t _Year;
    uint8_t _Month;
    uint8_t _Day;
}REAL_TIME_CLOCK_DS1307_t;





/* Section: Function Declarations */
REAL_TIME_CLOCK_DS1307_t REAL_TIME_CLOCK_DS1307_Get_Date_Time(void);
void Print_RealTimeClockDS1307(void);

#endif	/* DS1307_H */

