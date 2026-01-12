# Phần chuẩn bị

## Tổng quan về kit STM32F103C8T6 Blue Pill
- Vi điều khiển chính: STM32F103C8T6 – lõi ARM Cortex-M3, 32-bit, tốc độ tối đa 72 MHz.
- Bộ nhớ:
  - Flash: 64 KB
  - SRAM: 20 KB
- Giao tiếp hỗ trợ: UART, SPI, I2C, USB, ADC, PWM, GPIO
- Cổng kết nối: Micro USB, 2 hàng chân cắm (40 chân), header SWD để nạp/chạy debug

![STM32F103C8T6 Blue Pill](docs/images/stm32f103.png)

## Môi trường lập trình

- Tải về :

### Hướng dẫn cài
- B1: Tìm và chạy MDK531.exe
- B2: Sau khi cài xong sẽ hiện lên 1 giao diện Pack Install

![Pack Install](docs/images/pack_install.png)

- Có 2 cách cài Device Pack trong Keil  
  + Cài trực tiếp trong Keil (Pack Installer):  
    + Mở Keil µVision: Project → Manage → Pack Installer. Hoặc nếu mới cài Keil, Pack Installer sẽ tự hiện lên  
    + Ở khung bên trái (Devices), tìm và nhấn vào STMicroelectronics. Trong danh sách hiện ra, chọn STM32F1 Series → STM32F103 → STM32F103C8.

![STMicroelectronics](docs/images/STMicroelectronics.png)

    + Ở khung bên phải (Packs), tìm dòng có tên: STMicroelectronics.STM32F1xx_DFP

![STM32F1xx_DFP](docs/images/STM32F1xx_DFP.png)