#include "stm32l432xx.h"
#include "stm32l4xx_hal_can.h"
#include "FreeRTOS.h"

#include "apps.h"


int main (void)
{
    apps_Init();
    int i = 1;
    if (i == 2 && 0)
    {
        asm("nop");
        HAL_CAN_StateTypeDef type = HAL_CAN_STATE_ERROR;
        HAL_CAN_WakeUp(NULL);
    }

    // Test out link to CMSIS
    RCC->AHB2RSTR &= !RCC_AHB2RSTR_GPIOARST;

    return 0;
}