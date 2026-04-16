# SYNTH_OS

ME DI CUENTA QUE HAY MUCHOS PROYECTOS PARA PROTOGEN , PERO CASI NADA PARA SYNTH , ESTA ESPECIE ME ENCANTA 
ASI QUE ME PUSE A CREAR ESTE PROYECTO , CON EL PODRAS FABRICAR LA ELECTRONICA PARA UN CABEZAL DE SYNTH

ESPERO AGREGAR NUEVAS FUNCIONES , POR EL MOMENTO ESTE ES UN PROYECTO BASICO 

PARA ESTE PROYECTO NESESITARAS 

UN ARDUINO NANO NORMAL O EVERY SE RECOMIENDA EVERY 

8 MATRICES LED 8X8 CON MAX 7219

UN BOTON PULSADOR NORMALMENTE ABIERTO 

PANTALLA OLED SSD1306 

ANILLLOS O TIRAS LED WS2812B

ENLACE DE PROYECTO WOKWI, 
AQUI PODRAS VER UNA SIMULACION DEL PROYECTO

https://wokwi.com/projects/460885221439343617

CONEXION 

SE RECOMIENDA SOLDAR LOS CABLES PARA EVITAR FALSOS CONTACTOS Y LA ELECTRONICA PUEDA FALLAR

SE  RECOMIENDA ALIMENTAR EL ARDUINO EXTERNAMENTE , PARA ELLO SOLDA UN CABLE A GND Y OTRO A 5V Y ESTOS A 
UNA ENTRADA USB TIPO C HEMBRA 

CONEXION BOTON PULSADOR UN PIN A GND , PIN DE OTRO EXTREMO A D2

PARA CONECTAR LAS MATRICES CONECTA D13 A CLK , D11 A DIN , D10 A CS

ES IMPORRTANTE TENER CUIDADO AL SOLDAR , EVITAR QUE LAS CONEXIONES DE LAS MATRICES SE  TOQUEN 
YA QUE ESTO CAUSARA COMPORTAMIENTOS ERRATICOS EN ESTAS 
EN CASO QUE ESTO SUCEDA VERIFIQUE LAS SOLDADURAS 

CONEXION PANTALLA OLED SSD1306 -VCC A 3.3V , GND A GND , SCL A A5 , SDA A A4

CONEXION LEDS WS2812B D6 A DIN O IN DE LA TIRA O ANILLO IMPORTANTE USAR UNA RESITENCIA DE 470 OMS ENTRE D6 Y DIN O IN

!!!!!ATENCION LEDS WS2812B !!!!!!!

ES IMPORTANTE ALIMENTAR LOS LEDS DE MANERA EXTERNA YA QUE ESTOS TIENEN UN CONSUMO ELEVADO AL USAR VARIOS 
NO LOS ALIMENTE DIRECTO DEL ARDUINO , YA QUE ESTO CAUSARA DAÑOS A ESTE

PODRA ENCONTAR CONFIGURACIONES EN EL CODIGO PARA LOS LEDS , PANTALLA OLED ETC 

ENGLISH

I realized there are many projects for Protogen, but almost nothing for Synth. I love this species, so I started creating this project. With it, you can build the electronics for a Synth head.

I hope to add new features; for now, this is a basic project.

For this project, you will need:

A standard Arduino Nano or an Everyy (Everyy is recommended).

Eight 8x8 LED matrices with Max 7219 LEDs.

A normally open push button.

An SSD1306 OLED display.


Wokwi project link: Here you can see a simulation of the project. PROJECT

https://wokwi.com/projects/461348039039587329

CONNECTION

It is recommended to solder the wires to avoid false contacts and potential electronic failure.

It is recommended to power the Arduino externally. To do this, solder one wire to GND and another to 5V, and then connect these to a female USB Type-C input.

Pushbutton Connection: Connect one pin to GND, the other pin to D2.

To connect the matrices, connect D13 to CLK, D11 to DIN, and D10 to CS.

It is important to be careful when soldering and avoid touching the matrix connections, as this will cause malfunctions. Erratic behavior may occur. If this happens, check the solder joints.

OLED SSD1306 Screen Connection: VCC to 3.3V, GND to GND, SCL to A5, SDA to A4

Connecting WS2812B LEDs: D6 to DIN or IN of the Strip or Ring. IMPORTANT: Use a 470 ohm resistor between D6 and DIN or IN.

!!!!!WARNING: WS2812B LEDs!!!!!!!

It is important to power the LEDs externally, as they have high power consumption when used in multiples. Do not power them directly from the Arduino, as this will damage it.

You can find configurations in the code for the LEDs, OLED display, etc.


![1776008136343](https://github.com/user-attachments/assets/c38520f2-21c0-4c68-9fd4-6406ecd13721)
![1776008136289](https://github.com/user-attachments/assets/22ea1043-1174-44b4-816a-8f68e8435f0b)
![1776008136234](https://github.com/user-attachments/assets/5055cddf-44a9-4777-ba70-59c54967e8b4)
