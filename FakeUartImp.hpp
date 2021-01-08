#ifndef __UARTImp_H__
#define __UARTImp_H__

#include "UartInterface.hpp"
#include<iostream>


// You can add actual implementation of UART Module

class FakeUartImplementation: public UartInterface
{
    public:
        bool UART_Init() override 
        {
            std::cout<<"Uart Intialized\n";
            // HAL_Uart_Init
        }
        uint32_t UART_Transmit(uint8_t txbuffer[],uint32_t txlen) override
        {
            std::cout<<txbuffer<<"\n";
            // HAL_Uart_Transmit
        }
        uint32_t UART_Receive(uint8_t rxbuffer[],uint32_t rxlen) override
        {
            std::cout<<"Uart Receive is called\n";
            // HAL_Uart_Receive
        }
};


#endif