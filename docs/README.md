# Phần chuẩn bị 
## Tổng quan về kit STM32F103C8T6 Blue Pil
- Vi điều khiển chính: STM32F103C8T6 – lõi ARM Cortex-M3, 32-bit, tốc độ tối đa 72 MHz.
- Bộ nhớ: 
	- Flash: 64 KB
	- SRAM: 20 KB
- Giao tiếp hỗ trợ: UART, SPI, I2C, USB, ADC, PWM, GPIO
- Cổng kết nối: Micro USB, 2 hàng chân cắm (40 chân), header SWD để nạp/chạy debug
<p align="center">
  <img src="images/stm32f103.jpg" alt="STM32F103C8T6 Blue Pill" width="500"/>
</p>
## Môi trường lập trình

- Tải về : 

### Hướng dẫn cài 
- B1 : Tìm và chạy MDK531.exe
- B2 : Sau khi cài xong sẽ hiện lên 1 giao diện Pack Install

<p align="center">
  <img src="images/pack_install.png" alt="Mô tả ảnh" width="500"/>
</p>

- có 2 cách cài Device Pack trong Keil
	+ Cài trực tiếp trong Keil (Pack Installer) :
		+ Mở Keil µVision : Project → Manage → Pack Installer. Hoặc nếu mới cài Keil, Pack Installer sẽ tự hiện lên
		+ Ở khung bên trái (Devices), tìm và nhấn vào STMicroelectronics. Trong danh sách hiện ra, chọn STM32F1 Series → STM32F103 → STM32F103C8.
		
		<p align="center">
		  <img src="images/STMicroelectronics.png" width="500"/>
		</p>
		
		+ Ở khung bên phải (Packs), tìm dòng có tên: STMicroelectronics.STM32F1xx_DFP
		
		<p align="center">
		  <img src="images/STM32F1xx_DFP.png" width="500"/>
		</p>

