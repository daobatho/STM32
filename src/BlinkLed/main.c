#include "stm32f10x.h"

volatile uint32_t msTicks = 0; // Bi?n d?m mili giây

// Hàm x? lý ng?t SysTick
void SysTick_Handler(void) {
    msTicks++; // Tang m?i 1ms
}

// Hàm delay chính xác theo mili giây
void delay_ms(uint32_t ms) {
    uint32_t start = msTicks;
    while ((msTicks - start) < ms);
}

// C?u hình chân PC13
void GPIO_Config(void) {
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);

    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_13;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_2MHz;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_Init(GPIOC, &GPIO_InitStructure);
}

int main(void) {
    // C?u hình SysTick: 72MHz / 1000 = 1ms
    SysTick_Config(SystemCoreClock / 1000);

    GPIO_Config();

    while (1) {
        GPIO_ResetBits(GPIOC, GPIO_Pin_13); // LED ON
        delay_ms(500);                      // Delay 500 ms

        GPIO_SetBits(GPIOC, GPIO_Pin_13);   // LED OFF
        delay_ms(500);                      // Delay 500 ms
    }
}
