#include "UartMock.hpp"
#include "../UartDriver.hpp"

#include <iostream>
using ::testing::Return;



TEST(UartDriverTest,InitFunctionMockTest)
{
    UartMock mUart;
    UartDriver mDriver(&mUart);
    EXPECT_CALL(mUart,UART_Init).WillOnce(Return(true));
    EXPECT_TRUE(mDriver.Init());
}
TEST(UartDriverTest,TransmitFunctionMockTest)
{
    UartMock mUart;
    UartDriver mDriver(&mUart);
    uint8_t msg[]="Hello";
    EXPECT_CALL(mUart,UART_Transmit).WillOnce(Return(6));
    EXPECT_EQ(mDriver.transmit(msg,6),6);
}

TEST(UartDriverTest,ReceiveFunctionMockTest)
{
    UartMock mUart;
    UartDriver mDriver(&mUart);
    uint8_t msg[10];
    EXPECT_CALL(mUart,UART_Receive).WillOnce(Return(10));
    EXPECT_EQ(mDriver.receive(msg,10),10);
}






int main(int argc,char **argv)
{    
    testing::InitGoogleTest(&argc,argv);
    return RUN_ALL_TESTS();   
}