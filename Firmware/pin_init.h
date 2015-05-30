/* ###################################################################
**     This component module is generated by Processor Expert. Do not modify it.
**     Filename    : pin_init.h
**     Project     : SuperSled
**     Processor   : MK22FN512VLH12
**     Component   : PinSettings
**     Version     : Component 01.007, Driver 1.2, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2015-05-06, 22:02, # CodeGen: 29
**     Abstract    :
**
**     Settings    :
**
**     Contents    :
**         hardware_init       - void hardware_init(void);
**         configure_gpio_pins - void configure_gpio_pins(uint32_t instance);
**         configure_i2c_pins  - void configure_i2c_pins(uint32_t instance);
**         configure_jtag_pins - void configure_jtag_pins(uint32_t instance);
**         configure_osc_pins  - void configure_osc_pins(uint32_t instance);
**         configure_spi_pins  - void configure_spi_pins(uint32_t instance);
**         configure_tpiu_pins - void configure_tpiu_pins(uint32_t instance);
**         configure_uart_pins - void configure_uart_pins(uint32_t instance);
**
**     Copyright : 1997 - 2014 Freescale Semiconductor, Inc. 
**     All Rights Reserved.
**     
**     Redistribution and use in source and binary forms, with or without modification,
**     are permitted provided that the following conditions are met:
**     
**     o Redistributions of source code must retain the above copyright notice, this list
**       of conditions and the following disclaimer.
**     
**     o Redistributions in binary form must reproduce the above copyright notice, this
**       list of conditions and the following disclaimer in the documentation and/or
**       other materials provided with the distribution.
**     
**     o Neither the name of Freescale Semiconductor, Inc. nor the names of its
**       contributors may be used to endorse or promote products derived from this
**       software without specific prior written permission.
**     
**     THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
**     ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
**     WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
**     DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
**     ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
**     (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
**     LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
**     ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
**     (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
**     SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
**     
**     http: www.freescale.com
**     mail: support@freescale.com
** ###################################################################*/
/*!
** @file pin_init.h
** @version 1.2
** @brief
**
*/         
/*!
**  @addtogroup pin_init_module pin_init module documentation
**  @{
*/         

#ifndef pin_init_H_
#define pin_init_H_

/* MODULE pin_init. */
#ifdef __cplusplus
extern "C" {
#endif

/*
** ===================================================================
**     Method      :  pin_init_DMA (component PinSettings)
*/
/*!
**     @brief
**         DMA method sets registers according routing settings. Call
**         this method code to route desired pins into DMA periphery.
**     @param
**         uint32_t instance - DMA instance number (0 is expected)
*/
/* ===================================================================*/
void configure_dma_pins(uint32_t instance);
/*
** ===================================================================
**     Method      :  pin_init_GPIO (component PinSettings)
*/
/*!
**     @brief
**         GPIO method sets registers according routing settings. Call
**         this method code to route desired pins into:
**         PTA, PTB, PTC, PTD, PTE
**         peripherals.
**     @param
**         uint32_t instance - GPIO instance number 0..4
*/
/* ===================================================================*/
void configure_gpio_pins(uint32_t instance);
/*
** ===================================================================
**     Method      :  pin_init_I2C (component PinSettings)
*/
/*!
**     @brief
**         I2C method sets registers according routing settings. Call
**         this method code to route desired pins into:
**         I2C0, I2C1
**         peripherals.
**     @param
**         uint32_t instance - I2C instance number 0..1
*/
/* ===================================================================*/
void configure_i2c_pins(uint32_t instance);
/*
** ===================================================================
**     Method      :  pin_init_JTAG (component PinSettings)
*/
/*!
**     @brief
**         JTAG method sets registers according routing settings. Call
**         this method code to route desired pins into JTAG periphery.
**     @param
**         uint32_t instance - JTAG instance number (0 is expected)
*/
/* ===================================================================*/
void configure_jtag_pins(uint32_t instance);
/*
** ===================================================================
**     Method      :  pin_init_OSC (component PinSettings)
*/
/*!
**     @brief
**         OSC method sets registers according routing settings. Call
**         this method code to route desired pins into OSC periphery.
**     @param
**         uint32_t instance - OSC instance number (0 is expected)
*/
/* ===================================================================*/
void configure_osc_pins(uint32_t instance);
/*
** ===================================================================
**     Method      :  pin_init_SPI (component PinSettings)
*/
/*!
**     @brief
**         SPI method sets registers according routing settings. Call
**         this method code to route desired pins into:
**         SPI0, SPI1
**         peripherals.
**     @param
**         uint32_t instance - SPI instance number 0..1
*/
/* ===================================================================*/
void configure_spi_pins(uint32_t instance);
/*
** ===================================================================
**     Method      :  pin_init_TPIU (component PinSettings)
*/
/*!
**     @brief
**         TPIU method sets registers according routing settings. Call
**         this method code to route desired pins into TPIU periphery.
**     @param
**         uint32_t instance - TPIU instance number (0 is expected)
*/
/* ===================================================================*/
void configure_tpiu_pins(uint32_t instance);
/*
** ===================================================================
**     Method      :  pin_init_UART (component PinSettings)
*/
/*!
**     @brief
**         UART method sets registers according routing settings. Call
**         this method code to route desired pins into:
**         UART0, UART1, UART2
**         peripherals.
**     @param
**         uint32_t instance - UART instance number 0..2
*/
/* ===================================================================*/
void configure_uart_pins(uint32_t instance);

#ifdef __cplusplus
}
#endif

/* END pin_init. */
#endif /* #ifndef __pin_init_H_ */
/*!
** @}
*/
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.4 [05.11]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/