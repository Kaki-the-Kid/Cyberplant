# Cyberplant

## Formål
Idéen bag projektet er at lave en Cyperplante, altså en plante som bliver udvidet i muligheden for at videregive information og mulighed for at reagere adaptivt på omgivelser og aktivt ændre omgivelserne til mere "ønsket" tilstand.

Det undersøges i hvilket omfang man kan udvidde planten indflydelse på omgivelserne.

### Ønskeliste til projektet i tilfældig rækkefølge
* Cloud forbindelse
* Planter agerer langsomt med omgivelserne, kan kommunikationen speedes op og i hvilket omfang.
* Kan en plante selv styre omgivelser og kan den styre sig
* Kan man måle plantens følelser/humør/tilstand
* Kan planten kommuninikere med omgivelser via online/remote bruger interaktion
* Hvordan kan give planten mere bevægelsesfrihed
* Kan man udvidde plantens sanseapparat, intelligens og kommunikation med kunstig intelligens
* Undersøge om planter reagerer på lyd
* Miljø målinger

![image](https://user-images.githubusercontent.com/44589560/200331914-e9e358de-bee5-4d37-8097-b0f0e45fc8b9.png)

Sæt købt ved Arduino Tech

# Miljø målinger
![image](https://user-images.githubusercontent.com/44589560/200537674-326a1ffe-a5b2-4fe5-9cb8-610e46ef8117.png)

## Jordfugtighed
![image](https://user-images.githubusercontent.com/44589560/200332295-60ffcc1e-b3e0-44a1-9745-a2285323bc2b.png)

### Referencer - jordfugtighed
* https://www.youtube.com/watch?v=pgGpuws7f9o


## Lysmåler
[TODO] Simpel LDR -> Flere styk -> Retningsbestemmelse

Beskrivelse
CdS-celler er små lyssensorer. Efterhånden som det snoede ansigt udsættes for mere lys, falder modstanden. Når det er lyst, er modstanden omkring ~1KΩ, når det er mørkt, går det op til ~10KΩ.

For at bruge, skal du tilslutte den ene side af fotocellen (enten eller den er symmetrisk) til spændomg (for eksempel 5V) og den anden side til din mikrocontrollers analoge inputpin. Tilslut derefter en 10K pull-down modstand fra den analoge ben til jord. Spændingen på pinden vil være 2,5V eller højere, når den er lys ude og nær jorden, når det er mørkt.

![image](https://user-images.githubusercontent.com/44589560/200553497-223deff9-4369-4d50-ab43-994e0d011bae.png)

Reference:
https://learn.adafruit.com/photocells
## PH
[TODO]

## Iltindhold
[TODO]

# Bevægelse platform
## Motor styring
![image](https://user-images.githubusercontent.com/44589560/200569812-3a481e91-7a62-4b0c-b3c1-e902881bf287.png)

## Motor
![image](https://user-images.githubusercontent.com/44589560/200572280-a37de2d5-c9ac-422d-91d8-33649d36948a.png)
This NEMA17 stepper motor is widely used in the 3D printing community for many 3D printer models.

### Specifications:

* Model: Kysan 1124090
* Rated voltage: 4.2 V
* Holding torque: 5.5 Kg-cm (54 N-cm, 76.4 Oz/in)
* Number of phase: 2
* Current / phase: 1.5 A
* Resistance / phase: 2.8 Ohms +/- 10%
* Inductance / phase: 4.8 Mh +/- 20%
* Insulation resistance: 100 Mega-ohms (500 VDC)
* Operation temperature: -20 deg C to 40 deg C
* Shaft diameter: 5 mm (0.2 in) flatted
* Holding torque: 5.5 Kg-cm (54 N-cm, 76.4 Oz/in)
* Step angle: 1.8 deg
* Widely used in the 3D printing community

## Connection and code
How to Use Arduino L293D Motor Driver Shield?
While using this shield 6 analog Pins (which can be used as digital pins too), pin 2 and pin 13 of arduino are free.

In the case of using Servo motor, pins 9, 10, 2 are in use.

In the case of using DC motor, pin11 for #1, pin3 for #2, pin5 for #3, pin6 for #4 and pins 4, 7, 8 and 12 for all of them are in use.

In the case of using Stepper motor, pins 11 and 3 for #1, pins 5 and 6 for #2 and pins 4, 7, 8 and 12 for all of them are in use.

You can use free pins by wired connections.

If you are applying separate power supply to Arduino and shield, make sure you have disconnected the jumper on the shield.

I'm swapping out my motors and picked up a set of Kysan Nema 17 1124090. The wire colors don't match "Type A” or "Type B" like my other motors. They're blue, yellow, green, red (D, B, C, A respectively according to the data sheet)

Forget the color of "the connector with wire", follow type B, make sure the wire of motor is connected as picture.

R -> A1<br />
G -> A2<br />
Y -> B1<br />
B -> B2

## Motor referencer
* https://github.com/CuriosityGym/motordriver
* https://learn.adafruit.com/adafruit-motor-shield?view=all
* https://dronebotworkshop.com/stepper-motors-with-arduino/
* https://learn.adafruit.com/adafruit-motor-shield/downloads
* https://create.arduino.cc/projecthub/electropeak/arduino-l293d-motor-driver-shield-tutorial-c1ac9b

## Arduino biblioteker
![image](https://user-images.githubusercontent.com/44589560/200571845-7e60d7ff-b958-4db7-8c88-9cf098134d10.png)

![image](https://user-images.githubusercontent.com/44589560/200571927-0f8476b4-6e81-44c9-b525-2a3624d343a6.png)

Hvis du har det gamle (version af Adafrui Shield)
Se mere på: https://github.com/CuriosityGym/motordriver<br />
og du kan implementere det igennem Arduino Library Manager
![image](https://user-images.githubusercontent.com/44589560/200578076-ff5cf16a-4972-4715-a208-dfc08436f4ab.png)


# Cloud
