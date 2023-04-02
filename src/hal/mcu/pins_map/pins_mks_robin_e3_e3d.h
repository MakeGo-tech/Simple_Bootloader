#ifndef __pins_robin_e3_e3d_h
#define __pins_robin_e3_e3d_h

#define CUSTOM_BOARD_NAME      "Robin E3"

#define BL_NAME             "1:/ROBIN_E3.bin"
#define BL_OLD_NAME         "1:/ROBIN_E3.CUR"


#define SD_USE_SPI   
#define BOARD_SD_SPI                    SPI2
#define BOARD_SD_SCK_PORT               GPIOB
#define BOARD_SD_SCK_PIN                GPIO_PIN_13
#define BOARD_SD_MISO_PORT              GPIOB
#define BOARD_SD_MISO_PIN               GPIO_PIN_14
#define BOARD_SD_MOSI_PORT              GPIOB
#define BOARD_SD_MOSI_PIN               GPIO_PIN_15
#define BOARD_SD_CS_PORT                GPIOA
#define BOARD_SD_CS_PIN                 GPIO_PIN_15
#define BOARD_SD_DET_PORT               GPIOC
#define BOARD_SD_DET_PIN                GPIO_PIN_10

#define DEBUG_UART		                USART1
#define DEBUG_UART_IRQn                 UART_IRQn(USART1)
#define DEBUG_UART_CLK_ENABLE()         __HAL_UART_CLK(USART1)
#define DEBUG_UART_TX_CLK_ENABLE()      __HAL_RCC_GPIOA_CLK_ENABLE();
#define DEBUG_UART_RX_CLK_ENABLE()      __HAL_RCC_GPIOA_CLK_ENABLE();
#define DEBUG_UART_TX_PORT              GPIOA
#define DEBUG_UART_TX_PIN               GPIO_PIN_9
#define DEBUG_UART_RX_PORT              GPIOA
#define DEBUG_UART_RX_PIN               GPIO_PIN_10
#define DEBUG_UART_IRQHANDLER           USART1_IRQHandler



#endif