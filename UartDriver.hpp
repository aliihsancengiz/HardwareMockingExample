#ifndef __UART_Driver_H__
#define __UART_Driver_H__

#include "UartInterface.hpp"


// A facade for Uart Abstract Class

class UartDriver
{
    public:
        UartDriver(UartInterface *uinterface)
        {
            pUartInterfaceHandler=uinterface;
        }
        bool Init()
        {
            return pUartInterfaceHandler->UART_Init();
        }

        uint32_t transmit(uint8_t *pBuffer,uint32_t len)
        {
           return pUartInterfaceHandler->UART_Transmit(pBuffer,len);
        }
        uint32_t receive(uint8_t *pBuffer,uint32_t len)
        {
            return pUartInterfaceHandler->UART_Receive(pBuffer,len);
        }


    private:
        UartInterface* pUartInterfaceHandler;
};



#endif