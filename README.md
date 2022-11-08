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


## Arduino biblioteker
![image](https://user-images.githubusercontent.com/44589560/200571845-7e60d7ff-b958-4db7-8c88-9cf098134d10.png)

![image](https://user-images.githubusercontent.com/44589560/200571927-0f8476b4-6e81-44c9-b525-2a3624d343a6.png)



# Cloud
