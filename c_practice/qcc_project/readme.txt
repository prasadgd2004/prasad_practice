i have completed gpio
reference link:https://docs.qualcomm.com/doc/80-58740-1/topic/gpio.html#ariaid-title6



29-01-2026
today i was  completed the dht11 sensor

30-01-2026
I interfaced the DHT11 with the QCC74x board and tried to display temperature and humidity data on the minicom and lcd.But, i didn't get proper outcome on lcd.


31-01-26
I am currently analyzing the RTC code at a core level, understanding what happens internally at the hardware and register level, and verifying the implementation using the QCC74x Programming Guide and RTC datasheet. This activity is ongoing.


3-02-2026
I analyzed the datasheets of DHT11, MQ135, RTC (DS1307), and the QCC74x board and interfaced all sensors successfully. The temperature, humidity, air quality, and RTC data were transmitted via UART-TTL and displayed correctly on Minicom.

4-02-2026
Today, I focused entirely on board-to-board communication via SPI, but I couldn’t get the expected results.
 
