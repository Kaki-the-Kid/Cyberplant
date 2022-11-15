# Solar Compass

# Arduino Nano
## Pinout
![image](https://user-images.githubusercontent.com/44589560/201891401-abd1b91a-9786-4545-97c3-6881f9129e98.png)

## Analog channel
The four directions in the compass is connected to a analog channel on the arduno, with the following resistor.
![image](https://user-images.githubusercontent.com/44589560/201906951-660a846c-a439-447e-9d2b-d1806e7c79a7.png)

## SPI communication from Raspberri Pi

The board contains one SPI communication protocol. SPI stands for a serial peripheral interface that supports master-slave communication. It is used to develop communication between the controller and other peripheral devices like sensors and shift registers. It comes with two Pins… MISO (master input slave output) and MOSI (master output slave input) for the SPI communication. Synchronization of data is carried out by using a clock (SCLK at GPIO11) from the master (RPi) and the information is delivered to the SPI component from the module using the MOSI pin. If the component requires to reply to our module, then it sends back data using the MISO pin.

![image](https://user-images.githubusercontent.com/44589560/201907420-d5ee2ecc-91aa-476a-975c-fa7107289e4e.png)
 
