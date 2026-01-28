# Kiến thức cơ bản về STM32F103C8T6

---
## 1. Kiến trúc & phần cứng MCU

Cortex-M3: CPU core của STM32F103C8T6, thiết kế cho hiệu năng cao và tiêu thụ điện năng thấp.

Pipeline: Cho phép thực thi lệnh nhanh hơn nhờ chồng lệnh.

Harvard architecture: Tách biệt bus dữ liệu và bus lệnh, tăng tốc độ truy cập.

2. NVIC (Nested Vectored Interrupt Controller)

Quản lý ngắt với độ ưu tiên linh hoạt.

Hỗ trợ nested interrupts (ngắt lồng nhau).

Cho phép cấu hình ưu tiên ngắt theo phần mềm.

3. Bản đồ bộ nhớ STM32F103C8T6

Flash: 0x0800 0000 – 0x0800 FFFF (64 KB).

SRAM: 0x2000 0000 – 0x2000 4FFF (20 KB).

Peripheral: 0x4000 0000 – 0x5006 FFFF.

System memory (ROM): 0x1FFF F000 – 0x1FFF F7FF (bootloader).

4. Hệ thống Clock

HSI (High-Speed Internal): Dao động nội 8 MHz.

HSE (High-Speed External): Dao động ngoài, thường 8 MHz hoặc 12 MHz.

PLL (Phase-Locked Loop): Nhân tần số từ HSI/HSE để đạt tốc độ cao hơn.

Bus phân chia

AHB (Advanced High-performance Bus): Kết nối CPU, DMA, Flash, SRAM.

APB1: Clock tối đa 36 MHz, cho các peripheral tốc độ thấp (USART2, I2C, CAN...).

APB2: Clock tối đa 72 MHz, cho peripheral tốc độ cao (USART1, ADC, GPIO...).

Ảnh hưởng clock

Timer: Tần số timer phụ thuộc vào clock bus (APB1/APB2).

UART: Baudrate tính từ clock nguồn (APB1/APB2).

ADC: Clock ảnh hưởng trực tiếp đến tốc độ chuyển đổi.