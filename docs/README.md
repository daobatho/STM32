# Phần chuẩn bị 
## Tổng quan về kit STM32F103C8T6 Blue Pil
- Vi điều khiển chính: STM32F103C8T6 – lõi ARM Cortex-M3, 32-bit, tốc độ tối đa 72 MHz.
- Bộ nhớ: 
	- Flash: 64 KB
	- SRAM: 20 KB
- Giao tiếp hỗ trợ: UART, SPI, I2C, USB, ADC, PWM, GPIO
- Cổng kết nối: Micro USB, 2 hàng chân cắm (40 chân), header SWD để nạp/chạy debug
<p align="center">
  <img src="images/stm32f103.jpg" alt="STM32F103C8T6 Blue Pill" width="1000"/>
</p>

## Môi trường lập trình

- Tải về : 

### Hướng dẫn cài 
- B1 : Tìm và chạy MDK531.exe
- B2 : Sau khi cài xong sẽ hiện lên 1 giao diện Pack Install

<p align="center">
  <img src="images/pack_install.png" alt="Mô tả ảnh" width="1000"/>
</p>

- Có 2 cách cài Device Pack trong Keil
	+ Cài trực tiếp trong Keil (Pack Installer) :
		+ Mở Keil µVision : Project → Manage → Pack Installer. Hoặc nếu mới cài Keil, Pack Installer sẽ tự hiện lên
		+ Ở khung bên trái (Devices), tìm và nhấn vào STMicroelectronics. Trong danh sách hiện ra, chọn STM32F1 Series → STM32F103 → STM32F103C8.
		
		<p align="center">
		  <img src="images/STMicroelectronics.png" width="500"/>
		</p>
		
		+ Ở khung bên phải (Packs), tìm dòng có tên: STMicroelectronics.STM32F1xx_DFP. cài xong Keil nhận diện đúng chip STM32F103C8T6
		
		<p align="center">
		  <img src="images/STM32F1xx_DFP.png" width="500"/>
		</p>
		-> Không bị lỗi “missing device support” hay “no startup file”
		-> Có đầy đủ file khởi động (startup), CMSIS, linker scrip. Keil tự động thêm các file cần thiết khi tạo project.
		-> Sẵn sàng build và debug, có thể biên dịch, nạp firmware qua ST-Link, và debug trực tiếp
	+ Cài Device Pack thủ công từ website Keil
		+ Tải về : https://www.keil.arm.com/devices/stmicroelectronics-stm32f103c8/features/
		<p align="center">
		  <img src="images/pack_wed.png" width="500"/>
		</p>
- B3 : Sau khi cài xong pack device, chạy phần mềm Keil C với quyền admin -> chọn file -> License Management -> copy CID ví dụ "CF706-LHSSD"
- B4 : vào virus & threat protion -> tắt Real-time protection. Sau đó tìm thư mục "Active2032" chạy file "keygen2032.exe", nhập CID -> chọn ARM -> nhấn Generate để lấy LIC 
như ảnh sau 
<p align="center">
	<img src="images/keygen2032.png" width="500"/>
</p>
- B5 : Quay lại Keil C copy mã LIC vào rồi add_LIC
<p align="center">
	<img src="images/add_LIC.png" width="500"/>
</p>

### Tạo project mới
- Vào menu: Project → New µVision Project
- Chọn thư mục lưu project → đặt tên file .uvprojx (ví dụ: BlinkLED.uvprojx)
- Hiển thị ra 1 giao diện select_device -> nhập "stm32f103c8" -> click vào chọn thiết bị -> ok
<p align="center">
	<img src="images/select_device.png" width="500"/>
</p>
- Tiếp theo Cấu hình project ( giao diện Management Run - time Enviroment ) hiện ra 
<p align="center">
	<img src="images/config_project.png" width="500"/>
</p>