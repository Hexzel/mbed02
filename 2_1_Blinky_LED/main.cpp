#include "mbed.h"

DigitalOut led1(LED1);

int main()
{
	if (led1.is_connected()) {
		printf("myled is initialized and connected!\n\r");
	}

	while (1) {
		led1 = 1;
		printf("myled = %d \n\r", (uint8_t)led1);
		ThisThread::sleep_for(500ms);

		led1 = 0;
		printf("myled = %d \n\r", led1.read());
		ThisThread::sleep_for(500ms);
	}
}
