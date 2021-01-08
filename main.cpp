#include "FakeUartImp.hpp"
#include "UartDriver.hpp"

#include<cstring>

int main()
{
    // Defining Fake implementation
    FakeUartImplementation toStdOut;

    // Link it with Driver
    UartDriver mDriver(&toStdOut);


    // use Driver object to init,send,receive message 
    mDriver.Init();
    uint8_t msg1[]="Hello There";
    uint8_t msg2[]="I am using Fake uart Implementation to print standart output";
 
    mDriver.transmit(msg1,0);
    mDriver.transmit(msg2,0);



    return 0;
}