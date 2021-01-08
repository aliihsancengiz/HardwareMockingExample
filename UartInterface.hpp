#ifndef __UART_INTERFACE__
#define __UART_INTERFACE__

#include <cstdint>


// Uart Interface 
class UartInterface
{
    public:
        virtual bool UART_Init()=0;
        virtual uint32_t UART_Transmit(uint8_t* txbuffer,uint32_t txlen)=0;
        virtual uint32_t UART_Receive(uint8_t* rxbuffer,uint32_t rxlen)=0;
};




#endif
