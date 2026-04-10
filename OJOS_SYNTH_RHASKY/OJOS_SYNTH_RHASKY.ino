

//PUEDES USAR ESTE CODIGO PARA TUS PROYECTOS DE SYNTH , SOLO PODRAS USARLO DE MANERA PERSONAL NO SE PERMITE USARLO PARA COMISIONES O VENTA DE ELECTRONICA 

// esta es una version de prueba ya que estoy aprendiendo puede aver mas integrasiones o mejoras 

//PASOS A IMPLEMENTAR 
//1 CONTROLAR 8 MATRICEZ PARA MOSTRAR OJOS ----COMPLETADO----
//2 INTEGARAR BOTON PARA CAMBIO DE EXPRESIONES -----COMPLETADO-----
//3 INTEGRAR ANIMACION DE PARPADEO -----EN PROCESO-----
//4 INTEGRAR PANTALLA OLED SSD1306 PARA MOSTRAR UN HUD BASICO PARA MOSTRAR ESTADO DEL SYNTH -----EN PROCESO-----
//5 INTEGRAR CONTROL DE LEDS WS2812B PARA ILUMINACION DEL SYNTH-----EN PROCESO-----
//6 CONTROLAR VENTILADOR POR PWM E INTEGRAR EN EL HUD -----EN PROCESO-----
//7 ?PENSAR EN UTILIDADES FUTURAS -----EN PROCESO-----

#include <MaxMatrix.h>

//el sentido de las matrices es el siguiente como indica el 1 indica la primera matriz 2 la segunda y la que sigue la primera sera la que este conectada al arduino , siguiendo las consecuentes 
 //como se muestra ,estan los mapas , cada numero representa la matriz 1 ,2 ,3 ,4 etc,estas van de abajo asia arriba 

 //                        4   B00100000, B01111100, B11011111, B11000111, B11111111, B00000001, B00000000, B00000000, 
  //                       3   B00000000, B00000000, B10000000, B11110000, B11111100, B11111111, B00111111, B00001111,
   //                      2   B00000000, B00000000, B00000001, B00000111, B00111111, B11111111, B11111100, B11110000,
  //                       1   B00000000, B00000000, B11100000, B11111000, B11111100, B00111110, B00001111, B00000011
  

//tomaremos como ejemplo la matriz numero 1 
//esta se divide en 8 mapas , estos representan las 8 columnas de la matriz estas son horizontales ,

//                                  1           2         3          4           5         6         7          8
//                          1   B00000000, B00000000, B11100000, B11111000, B11111100, B00111110, B00001111, B00000011

//si acomodas estas como si fuera la matriz fisica quedaria de esta manera
//

//                          8    B00000011
//                          7    B00001111, 
//                          6    B00111110
//                          5    B11111100,
//                          4    B11111000,
//                          3    B11100000,
//                          2    B00000000
//                          1    B00000000

// es importante que solo modifiques los 1 y 0 si borras alguna coma o alguna B EL CODIGO PUEDE FALLAR                           
// cada 1 y 0 representa un led de la matriz para apagar un led solo coloca 0 y para encenderlo un 1 , 
// espero  te sirva esta guia para modificar los mapas y cargar tus expresiones propias , diviertete creando tu proyecto de SYNTH 



//  MATRICEZ LADO IZQUIERDO
const byte eyel0[] = {32, 8,
 B00000000, B00000000, B00000000, B00000000, B11000000, B11111000, B11111100, B11111110,
 B00000000, B00000000, B00000000, B00000000, B00000011, B00001111, B00001111, B00101111,
 B11111111, B11111111, B11111111, B11111111, B11111110, B11100000, B00000000, B00000000,
 B01101111, B01101111, B11101111, B11101111, B01111111, B00000111, B00000000, B00000000
                           };


const byte eyel1[] = {32, 8,
                            B00100000, B01111100, B11011111, B11000111, B11111111, B00000001, B00000000, B00000000,
                            B00000000, B00000000, B10000000, B11110000, B11111100, B11111111, B00111111, B00001111,
                            B00000000, B00000000, B00000001, B00000111, B00111111, B11111111, B11111100, B11110000,
                            B00000000, B11111111, B11100000, B11111000, B11111100, B00111110, B00001111, B00000011
                           };


const byte eyel2[] = {32, 8,
                            B00100000, B01111100, B11011111, B11000111, B11111111, B00000001, B00000000, B00000000,
                            B11111111, B00000000, B10000000, B11110000, B11111100, B11111111, B00111111, B00001111,
                            B11111111, B00000000, B00000001, B00000111, B00111111, B11111111, B11111100, B11110000,
                            B00000000, B00000000, B11100000, B11111000, B11111100, B00111110, B00001111, B00000011
                           };


const byte eyel3[] = {32, 8,
                            B00100000, B01111100, B11011111, B11000111, B11111111, B00000001, B00000000, B00000000,
                            B00000000, B00000000, B10000000, B11110000, B11111100, B11111111, B00111111, B00001111,
                            B00000000, B00000000, B00000001, B00000111, B00111111, B11111111, B11111100, B11110000,
                            B00000000, B00000000, B11111111, B11111000, B11111100, B00111110, B00001111, B00000011
                           };


//matricez lado dereccho
const byte eyer0[] = {32, 8,
                            B00000000, B00000000, B00000000, B00000000, B11000000, B11110000, B11110000, B11110100,
                            B00000000, B00000000, B00000000, B00000000, B00000011, B00011111, B00111111, B01111111,
                            B11110110, B11110110, B11110111, B11110111, B11111110, B11100000, B00000000, B00000000,
                            B11111111, B11111111, B11111111, B11111111, B01111111, B00000111, B00000000, B00000000
                           };


const byte eyer1[] = {32, 8,
                            B00100000, B01111100, B11011111, B11000111, B11111111, B00000001, B00000000, B00000000,
                            B00000000, B00000000, B10000000, B11110000, B11111100, B11111111, B00111111, B00001111,
                            B00000000, B00000000, B00000001, B00000111, B00111111, B11111111, B11111100, B11110000,
                            B00000000, B00000000, B11100000, B11111000, B11111100, B00111110, B00001111, B00000011
                           };


const byte eyer2[] = {32, 8,
                            B00100000, B01111100, B11011111, B11000111, B11111111, B00000001, B00000000, B00000000,
                            B00000000, B00000000, B10000000, B11110000, B11111100, B11111111, B00111111, B00001111,
                            B00000000, B00000000, B00000001, B00000111, B00111111, B11111111, B11111100, B11110000,
                            B00000000, B00000000, B11100000, B11111000, B11111100, B00111110, B00001111, B00000011
                           };


const byte eyer3[] = {32, 8,
                            B00100000, B01111100, B11011111, B11000111, B11111111, B00000001, B00000000, B00000000,
                            B00000000, B00000000, B10000000, B11110000, B11111100, B11111111, B00111111, B00001111,
                            B00000000, B00000000, B00000001, B00000111, B00111111, B11111111, B11111100, B11110000,
                            B00000000, B00000000, B11100000, B11111000, B11111100, B00111110, B00001111, B00000011
                           };                           




int DIN = 11;       // PIN DIN MAX 7219 D11
int CLK = 13;       // PIN CLK MAX 7219 D13
int CS = 10;        // PIN CS MAX 7219 D10

int Boton = 2;      // BOTON PARA CAMBIO DE EXPRESION D2


//configuraciones 
int Brillo = 3;   // brillo 

int maxInUse = 8; 

int estado = 0;

MaxMatrix m(DIN, CS, CLK, maxInUse);
void setup() {  
m.init();
m.setIntensity(Brillo);
m.clear();
pinMode(Boton, INPUT_PULLUP);

}
void loop() { 

 if (digitalRead(Boton) == LOW) {
  estado++;
  if (estado > 3) estado = 0;
  delay(200);
 }


  switch (estado) {
  case 0:
  m.writeSprite(0, 0, eyel0);
  m.writeSprite(32, 0, eyer0); 
  break;
 
  case 1:
  m.writeSprite(0, 0, eyel1);
  m.writeSprite(32, 0, eyer1);
  break;

  case 2:
  m.writeSprite(0, 0, eyel2);
  m.writeSprite(32, 0, eyer2);
  break;

  case 3: 
  m.writeSprite(0, 0, eyel3);
  m.writeSprite(32, 0, eyer3);
  break;
 }
}






  




























































