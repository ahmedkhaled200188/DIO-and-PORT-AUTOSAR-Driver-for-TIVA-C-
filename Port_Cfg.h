 /******************************************************************************
 *
 * Module: Port
 *
 * File Name: Port_Cfg.h
 *
 * Description: Port_Cfg file for TM4C123GH6PM Microcontroller - Port Driver.
 *
 * Author: AHMED KHALED 
 ******************************************************************************/

#ifndef PORT_CFG_H_
#define PORT_CFG_H_

/*
 * Module Version 1.0.0
 */
#define PORT_CFG_SW_MAJOR_VERSION              (1U)
#define PORT_CFG_SW_MINOR_VERSION              (0U)
#define PORT_CFG_SW_PATCH_VERSION              (0U)

/*
 * AUTOSAR Version 4.0.3
 */
#define PORT_CFG_AR_RELEASE_MAJOR_VERSION      (4U)
#define PORT_CFG_AR_RELEASE_MINOR_VERSION      (0U)
#define PORT_CFG_AR_RELEASE_PATCH_VERSION      (3U)

/* Switches the Development Error Detection and Notification on or off
. true: Enabled.
false: Disabled */
#define PORT_DEV_ERROR_DETECT                (STD_ON)

/* PPre-processor switch to enable / disable the use of the function Port_SetPinDirection().
TRUE: Enabled - Function Port_SetPinDirection() is available.
FALSE: Disabled - Function Port_SetPinDirection() is not available. */
#define PORT_SET_PIN_DIRECTION_API           (STD_ON)

/* Pre-processor switch to enable / disable the use of the function Port_SetPinMode(). 
true: Enabled - Function Port_SetPinMode() is available.
false: Disabled - Function Port_SetPinMode() is not available. */
#define PORT_SET_PIN_MODE_API          		 (STD_ON)

/* Pre-processor switch to enable / disable the API to read out the modules version information.
true: Version info API enabled.
false: Version info API disabled. */
#define PORT_VERSION_INFO_API          		 (STD_ON)
/*
The initial direction of the pin (IN or OUT).
If the direction is not changeable, the value configured here is fixed.
The direction must match the pin mode.
E.g. a pin used for an ADC must be configured to be an in port. 
Implementation Type: Port_PinDirectionType
*/
#define PORT_PIN_DIRECTION                       (STD_ON)

/* Number of the configured Port PINs */
#define PORT_CONFIGURED_CHANNLES           	  (43U)

/*Parameter to indicate if the direction is changeable on a port pin during runtime. 
true: Port Pin direction changeable enabled.
false: Port Pin direction changeable disabled.*/
#define PORT_PIN_MODE_CHANGEABLE                 (STD_ON)

/*******************************************************************************
 *                           Port Modes                                        *
 *******************************************************************************/
/*
Port pin mode from mode list. Note that more than one mode is allowed by
default. That way it is e.g. possible to combine DIO with another mode such as ICU.
More HW specific literals may be added by module implementor.
E.g. SPI may be further broken down into SpiCsHw, SpiCsSw, etc. if necessary.
*/

/* Default Mode Of Configuration */
#define PORT_PIN_MODE_ADC        (uint8)9     /* ADC Mode */
#define PORT_PIN_MODE_DIO 	     (uint8)0   /* GPIO Mode */
#define PORT_PIN_MODE_UART       (uint8)1   /* UART Mode */
#define PORT_PIN_MODE_SPI        (uint8)2   /* SPI Mode */
#define PORT_PIN_MODE_I2C        (uint8)3   /* I2C Mode */
#define PORT_PIN_MODE_M0PWM      (uint8)4   /*M0PWM Mode */
#define PORT_PIN_MODE_M0FAULT    (uint8)4   /*Motion Control Module  Mode */
#define PORT_PIN_MODE_M1PWM      (uint8)5   /*M1PWM Mode */
#define PORT_PIN_MODE_IDX_PHASE  (uint8)6   /* IDX AND PHASE Mode */
#define PORT_PIN_MODE_TIMER      (uint8)7   /* TIMER  Mode */
#define PORT_PIN_MODE_CAN        (uint8)8   /* CAN Mode */
#define PORT_PIN_MODE_USB        (uint8)8   /* USB Mode */
#define PORT_PIN_MODE_NMI        (uint8)8  /*Non-Maskable Interrupt*/

/*******************************************************************************
 *                           Pins Direction                                    *
 *******************************************************************************/
#define PORTA_PIN0_DIRECTION       (PORT_PIN_IN)
#define PORTA_PIN1_DIRECTION       (PORT_PIN_IN)
#define PORTA_PIN2_DIRECTION       (PORT_PIN_IN)
#define PORTA_PIN3_DIRECTION       (PORT_PIN_IN)
#define PORTA_PIN4_DIRECTION       (PORT_PIN_IN)
#define PORTA_PIN5_DIRECTION       (PORT_PIN_IN)
#define PORTA_PIN6_DIRECTION       (PORT_PIN_IN)
#define PORTA_PIN7_DIRECTION       (PORT_PIN_IN)

#define PORTB_PIN0_DIRECTION       (PORT_PIN_IN)
#define PORTB_PIN1_DIRECTION       (PORT_PIN_IN)
#define PORTB_PIN2_DIRECTION       (PORT_PIN_IN)
#define PORTB_PIN3_DIRECTION       (PORT_PIN_IN)
#define PORTB_PIN4_DIRECTION       (PORT_PIN_IN)
#define PORTB_PIN5_DIRECTION       (PORT_PIN_IN)
#define PORTB_PIN6_DIRECTION       (PORT_PIN_IN)
#define PORTB_PIN7_DIRECTION       (PORT_PIN_IN)

#define PORTC_PIN0_DIRECTION       (PORT_PIN_IN)
#define PORTC_PIN1_DIRECTION       (PORT_PIN_IN)
#define PORTC_PIN2_DIRECTION       (PORT_PIN_IN)
#define PORTC_PIN3_DIRECTION       (PORT_PIN_IN)
#define PORTC_PIN4_DIRECTION       (PORT_PIN_IN)
#define PORTC_PIN5_DIRECTION       (PORT_PIN_IN)
#define PORTC_PIN6_DIRECTION       (PORT_PIN_IN)
#define PORTC_PIN7_DIRECTION       (PORT_PIN_IN)

#define PORTD_PIN0_DIRECTION       (PORT_PIN_IN)
#define PORTD_PIN1_DIRECTION       (PORT_PIN_IN)
#define PORTD_PIN2_DIRECTION       (PORT_PIN_IN)
#define PORTD_PIN3_DIRECTION       (PORT_PIN_IN)
#define PORTD_PIN4_DIRECTION       (PORT_PIN_IN)
#define PORTD_PIN5_DIRECTION       (PORT_PIN_IN)
#define PORTD_PIN6_DIRECTION       (PORT_PIN_IN)
#define PORTD_PIN7_DIRECTION       (PORT_PIN_IN)

#define PORTE_PIN0_DIRECTION       (PORT_PIN_IN)
#define PORTE_PIN1_DIRECTION       (PORT_PIN_IN)
#define PORTE_PIN2_DIRECTION       (PORT_PIN_IN)
#define PORTE_PIN3_DIRECTION       (PORT_PIN_IN)
#define PORTE_PIN4_DIRECTION       (PORT_PIN_IN)
#define PORTE_PIN5_DIRECTION       (PORT_PIN_IN)

#define PORTF_PIN0_DIRECTION       (PORT_PIN_IN)
#define PORTF_PIN1_DIRECTION       (PORT_PIN_OUT) /* LED */
#define PORTF_PIN2_DIRECTION       (PORT_PIN_IN)
#define PORTF_PIN3_DIRECTION       (PORT_PIN_IN)
#define PORTF_PIN4_DIRECTION       (PORT_PIN_IN) /* Switch */

/*******************************************************************************
 *                            Pins Initial value                               *
 *******************************************************************************/
#define PORTA_PIN0_DATA       (STD_LOW)
#define PORTA_PIN1_DATA       (STD_LOW)
#define PORTA_PIN2_DATA       (STD_LOW)
#define PORTA_PIN3_DATA       (STD_LOW)
#define PORTA_PIN4_DATA       (STD_LOW)
#define PORTA_PIN5_DATA       (STD_LOW)
#define PORTA_PIN6_DATA       (STD_LOW)
#define PORTA_PIN7_DATA       (STD_LOW)

#define PORTB_PIN0_DATA       (STD_LOW)
#define PORTB_PIN1_DATA       (STD_LOW)
#define PORTB_PIN2_DATA       (STD_LOW)
#define PORTB_PIN3_DATA       (STD_LOW)
#define PORTB_PIN4_DATA       (STD_LOW)
#define PORTB_PIN5_DATA       (STD_LOW)
#define PORTB_PIN6_DATA       (STD_LOW)
#define PORTB_PIN7_DATA       (STD_LOW)

#define PORTC_PIN0_DATA       (STD_LOW)
#define PORTC_PIN1_DATA       (STD_LOW)
#define PORTC_PIN2_DATA       (STD_LOW)
#define PORTC_PIN3_DATA       (STD_LOW)
#define PORTC_PIN4_DATA       (STD_LOW)
#define PORTC_PIN5_DATA       (STD_LOW)
#define PORTC_PIN6_DATA       (STD_LOW)
#define PORTC_PIN7_DATA       (STD_LOW)

#define PORTD_PIN0_DATA       (STD_LOW)
#define PORTD_PIN1_DATA       (STD_LOW)
#define PORTD_PIN2_DATA       (STD_LOW)
#define PORTD_PIN3_DATA       (STD_LOW)
#define PORTD_PIN4_DATA       (STD_LOW)
#define PORTD_PIN5_DATA       (STD_LOW)
#define PORTD_PIN6_DATA       (STD_LOW)
#define PORTD_PIN7_DATA       (STD_LOW)

#define PORTE_PIN0_DATA       (STD_LOW)
#define PORTE_PIN1_DATA       (STD_LOW)
#define PORTE_PIN2_DATA       (STD_LOW)
#define PORTE_PIN3_DATA       (STD_LOW)
#define PORTE_PIN4_DATA       (STD_LOW)
#define PORTE_PIN5_DATA       (STD_LOW)

#define PORTF_PIN0_DATA       (STD_LOW)
#define PORTF_PIN1_DATA       (STD_LOW)
#define PORTF_PIN2_DATA       (STD_LOW)
#define PORTF_PIN3_DATA       (STD_LOW)
#define PORTF_PIN4_DATA       (STD_LOW)

/*******************************************************************************
 *                           Pins Alternate Function                           *
 *******************************************************************************/
#define PORTA_PIN0_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTA_PIN1_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTA_PIN2_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTA_PIN3_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTA_PIN4_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTA_PIN5_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTA_PIN6_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTA_PIN7_MODE_TYPE      (PORT_PIN_MODE_DIO)

#define PORTB_PIN0_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTB_PIN1_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTB_PIN2_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTB_PIN3_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTB_PIN4_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTB_PIN5_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTB_PIN6_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTB_PIN7_MODE_TYPE      (PORT_PIN_MODE_DIO)

#define PORTC_PIN0_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTC_PIN1_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTC_PIN2_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTC_PIN3_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTC_PIN4_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTC_PIN5_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTC_PIN6_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTC_PIN7_MODE_TYPE      (PORT_PIN_MODE_DIO)

#define PORTD_PIN0_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTD_PIN1_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTD_PIN2_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTD_PIN3_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTD_PIN4_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTD_PIN5_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTD_PIN6_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTD_PIN7_MODE_TYPE      (PORT_PIN_MODE_DIO)

#define PORTE_PIN0_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTE_PIN1_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTE_PIN2_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTE_PIN3_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTE_PIN4_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTE_PIN5_MODE_TYPE      (PORT_PIN_MODE_DIO)

#define PORTF_PIN0_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTF_PIN1_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTF_PIN2_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTF_PIN3_MODE_TYPE      (PORT_PIN_MODE_DIO)
#define PORTF_PIN4_MODE_TYPE      (PORT_PIN_MODE_DIO)

/*******************************************************************************
 *                           Pins Internal Resistor                            *
 *******************************************************************************/
#define PORTA_PIN0_RESISTOR       (PULL_UP)
#define PORTA_PIN1_RESISTOR       (PULL_UP)
#define PORTA_PIN2_RESISTOR       (PULL_UP)
#define PORTA_PIN3_RESISTOR       (PULL_UP)
#define PORTA_PIN4_RESISTOR       (PULL_UP)
#define PORTA_PIN5_RESISTOR       (PULL_UP)
#define PORTA_PIN6_RESISTOR       (PULL_UP)
#define PORTA_PIN7_RESISTOR       (PULL_UP)

#define PORTB_PIN0_RESISTOR       (PULL_UP)
#define PORTB_PIN1_RESISTOR       (PULL_UP)
#define PORTB_PIN2_RESISTOR       (PULL_UP)
#define PORTB_PIN3_RESISTOR       (PULL_UP)
#define PORTB_PIN4_RESISTOR       (PULL_UP)
#define PORTB_PIN5_RESISTOR       (PULL_UP)
#define PORTB_PIN6_RESISTOR       (PULL_UP)
#define PORTB_PIN7_RESISTOR       (PULL_UP)

#define PORTC_PIN0_RESISTOR       (PULL_UP)
#define PORTC_PIN1_RESISTOR       (PULL_UP)
#define PORTC_PIN2_RESISTOR       (PULL_UP)
#define PORTC_PIN3_RESISTOR       (PULL_UP)
#define PORTC_PIN4_RESISTOR       (PULL_UP)
#define PORTC_PIN5_RESISTOR       (PULL_UP)
#define PORTC_PIN6_RESISTOR       (PULL_UP)
#define PORTC_PIN7_RESISTOR       (PULL_UP)

#define PORTD_PIN0_RESISTOR       (PULL_UP)
#define PORTD_PIN1_RESISTOR       (PULL_UP)
#define PORTD_PIN2_RESISTOR       (PULL_UP)
#define PORTD_PIN3_RESISTOR       (PULL_UP)
#define PORTD_PIN4_RESISTOR       (PULL_UP)
#define PORTD_PIN5_RESISTOR       (PULL_UP)
#define PORTD_PIN6_RESISTOR       (PULL_UP)
#define PORTD_PIN7_RESISTOR       (PULL_UP)

#define PORTE_PIN0_RESISTOR       (PULL_UP)
#define PORTE_PIN1_RESISTOR       (PULL_UP)
#define PORTE_PIN2_RESISTOR       (PULL_UP)
#define PORTE_PIN3_RESISTOR       (PULL_UP)
#define PORTE_PIN4_RESISTOR       (PULL_UP)
#define PORTE_PIN5_RESISTOR       (PULL_UP)

#define PORTF_PIN0_RESISTOR       (OFF)
#define PORTF_PIN1_RESISTOR       (OFF)
#define PORTF_PIN2_RESISTOR       (OFF)
#define PORTF_PIN3_RESISTOR       (OFF)
#define PORTF_PIN4_RESISTOR       (PULL_UP)

/*******************************************************************************
 *                          Pins Direction Changable                           *
 *******************************************************************************/
#define PORTA_PIN0_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTA_PIN1_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTA_PIN2_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTA_PIN3_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTA_PIN4_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTA_PIN5_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTA_PIN6_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTA_PIN7_DIRECTION_CHANGABLE         (STD_OFF)

#define PORTB_PIN0_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTB_PIN1_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTB_PIN2_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTB_PIN3_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTB_PIN4_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTB_PIN5_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTB_PIN6_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTB_PIN7_DIRECTION_CHANGABLE         (STD_OFF)

#define PORTC_PIN0_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTC_PIN1_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTC_PIN2_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTC_PIN3_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTC_PIN4_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTC_PIN5_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTC_PIN6_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTC_PIN7_DIRECTION_CHANGABLE         (STD_OFF)

#define PORTD_PIN0_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTD_PIN1_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTD_PIN2_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTD_PIN3_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTD_PIN4_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTD_PIN5_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTD_PIN6_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTD_PIN7_DIRECTION_CHANGABLE         (STD_OFF)

#define PORTE_PIN0_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTE_PIN1_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTE_PIN2_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTE_PIN3_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTE_PIN4_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTE_PIN5_DIRECTION_CHANGABLE         (STD_OFF)

#define PORTF_PIN0_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTF_PIN1_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTF_PIN2_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTF_PIN3_DIRECTION_CHANGABLE         (STD_OFF)
#define PORTF_PIN4_DIRECTION_CHANGABLE         (STD_ON)   
   
/*******************************************************************************
 *                          Pins Mode Changable                                *
 *******************************************************************************/

#define PORTA_PIN0_MODE_CHANGABLE         (STD_OFF)
#define PORTA_PIN1_MODE_CHANGABLE         (STD_OFF)
#define PORTA_PIN2_MODE_CHANGABLE         (STD_OFF)
#define PORTA_PIN3_MODE_CHANGABLE         (STD_OFF)
#define PORTA_PIN4_MODE_CHANGABLE         (STD_OFF)
#define PORTA_PIN5_MODE_CHANGABLE         (STD_OFF)
#define PORTA_PIN6_MODE_CHANGABLE         (STD_OFF)
#define PORTA_PIN7_MODE_CHANGABLE         (STD_OFF)

#define PORTB_PIN0_MODE_CHANGABLE         (STD_OFF)
#define PORTB_PIN1_MODE_CHANGABLE         (STD_OFF)
#define PORTB_PIN2_MODE_CHANGABLE         (STD_OFF)
#define PORTB_PIN3_MODE_CHANGABLE         (STD_OFF)
#define PORTB_PIN4_MODE_CHANGABLE         (STD_OFF)
#define PORTB_PIN5_MODE_CHANGABLE         (STD_OFF)
#define PORTB_PIN6_MODE_CHANGABLE         (STD_OFF)
#define PORTB_PIN7_MODE_CHANGABLE         (STD_OFF)

#define PORTC_PIN0_MODE_CHANGABLE         (STD_OFF)
#define PORTC_PIN1_MODE_CHANGABLE         (STD_OFF)
#define PORTC_PIN2_MODE_CHANGABLE         (STD_OFF)
#define PORTC_PIN3_MODE_CHANGABLE         (STD_OFF)
#define PORTC_PIN4_MODE_CHANGABLE         (STD_OFF)
#define PORTC_PIN5_MODE_CHANGABLE         (STD_OFF)
#define PORTC_PIN6_MODE_CHANGABLE         (STD_OFF)
#define PORTC_PIN7_MODE_CHANGABLE         (STD_OFF)

#define PORTD_PIN0_MODE_CHANGABLE         (STD_OFF)
#define PORTD_PIN1_MODE_CHANGABLE         (STD_OFF)
#define PORTD_PIN2_MODE_CHANGABLE         (STD_OFF)
#define PORTD_PIN3_MODE_CHANGABLE         (STD_OFF)
#define PORTD_PIN4_MODE_CHANGABLE         (STD_OFF)
#define PORTD_PIN5_MODE_CHANGABLE         (STD_OFF)
#define PORTD_PIN6_MODE_CHANGABLE         (STD_OFF)
#define PORTD_PIN7_MODE_CHANGABLE         (STD_OFF)

#define PORTE_PIN0_MODE_CHANGABLE         (STD_OFF)
#define PORTE_PIN1_MODE_CHANGABLE         (STD_OFF)
#define PORTE_PIN2_MODE_CHANGABLE         (STD_OFF)
#define PORTE_PIN3_MODE_CHANGABLE         (STD_OFF)
#define PORTE_PIN4_MODE_CHANGABLE         (STD_OFF)
#define PORTE_PIN5_MODE_CHANGABLE         (STD_OFF)

#define PORTF_PIN0_MODE_CHANGABLE         (STD_OFF)
#define PORTF_PIN1_MODE_CHANGABLE         (STD_OFF)
#define PORTF_PIN2_MODE_CHANGABLE         (STD_OFF)
#define PORTF_PIN3_MODE_CHANGABLE         (STD_OFF)
#define PORTF_PIN4_MODE_CHANGABLE         (STD_ON)   


#endif /* PORT_CFG_H_ */
