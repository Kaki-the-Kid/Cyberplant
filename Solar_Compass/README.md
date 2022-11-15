# Solar Compass

# Arduino Nano
## Specs 
https://docs.arduino.cc/hardware/nano

## Pinout
![image](https://user-images.githubusercontent.com/44589560/201916338-a2d3ea0d-214c-4934-bbfb-d390d78bbc98.png)

## Analog channel
The four directions in the compass is connected to a analog channel on the arduno, with a pull down resistor, show below.
![image](https://user-images.githubusercontent.com/44589560/201906951-660a846c-a439-447e-9d2b-d1806e7c79a7.png)

## Board setup
![image](https://user-images.githubusercontent.com/44589560/201929221-8204589a-25f3-4151-a52f-d69fde7f68bc.png)


## SPI communication from Raspberri Pi
### Documentation: https://docs.arduino.cc/learn/communication/spi

The board contains one SPI communication protocol. SPI stands for a serial peripheral interface that supports master-slave communication. It is used to develop communication between the controller and other peripheral devices like sensors and shift registers. It comes with two Pins… MISO (master input slave output) and MOSI (master output slave input) for the SPI communication. Synchronization of data is carried out by using a clock (SCLK at GPIO11) from the master (RPi) and the information is delivered to the SPI component from the module using the MOSI pin. If the component requires to reply to our module, then it sends back data using the MISO pin.

![image](https://user-images.githubusercontent.com/44589560/201907420-d5ee2ecc-91aa-476a-975c-fa7107289e4e.png)
 
