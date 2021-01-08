#ifndef __UARTMock_H__
#define __UARTMock_H__

#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "../UartInterface.hpp"


// Uart Mock  to Break Hardware Dependency
class UartMock :public UartInterface
{
    public:
        MOCK_METHOD0(UART_Init,bool());
        MOCK_METHOD2(UART_Transmit,uint32_t(uint8_t*,uint32_t));
        MOCK_METHOD2(UART_Receive,uint32_t(uint8_t*,uint32_t));
};





#endif