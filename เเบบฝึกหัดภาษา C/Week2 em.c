
#include "ecc.h"
void led()
{
    
    int i;
for(i=0; i<4; i++)
{

Led_Inv(i);

}


}

int main(void)
{

    System_Init();

    //Led0_Inv();  //close-open
    //Led2_Inv();  //close-open
    Timer_Create(250, led);
    System_Start();







}
