/*
 Fundacion Kinal
 Centro Educativo Tecnico Laborla Kinal
 Electronica
 Grado: Quinto
 Seccion: A
 Curso: Taller de eleectronica digital y reparacion de computadoras I
 Nombre: Juan Manuel Sebastian Ixen Coy
 Carne: 2019519
 Fecha: 20/04
 */
#include <Key.h>
#include <Keypad.h>


#define Filas 4   
#define Columnas 4 
#define F1 9
#define F2 8
#define F3 7
#define F4 6
#define C1 5
#define C2 4
#define C3 3
#define C4 2

// Defino las leds del display
#define A 10
#define B 11
#define C 12
#define D 14
#define E 15
#define F 16
#define G 17

// Defino la distribución de teclas
char keys[Filas][Columnas] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

byte PinesFilas[Filas] = {F1,F2,F3,F4};
byte PinesColumnas[Columnas] = {C1,C2,C3,C4};

Keypad Teclado = Keypad(makeKeymap(keys),PinesFilas,PinesColumnas,Filas,Columnas);

void setup() { 
  pinMode(A,OUTPUT);
  pinMode(B,OUTPUT);
  pinMode(C,OUTPUT);
  pinMode(D,OUTPUT);
  pinMode(E,OUTPUT);
  pinMode(F,OUTPUT);
  pinMode(G,OUTPUT);
}

void loop() {
  char tecla = Teclado.getKey();

     
  // Tecla A
  if (tecla == 'A') {
digitalWrite(10,HIGH);
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(14,LOW);
digitalWrite(15,HIGH);
digitalWrite(16,HIGH);
digitalWrite(17,HIGH);
delay(1000);
  
  }
  // Tecla B
   if (tecla == 'B') {
digitalWrite(10,LOW);
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(14,HIGH);
digitalWrite(15,HIGH);
digitalWrite(16,HIGH);
digitalWrite(17,HIGH);
delay(1000);
    
  }
  // Tecla C
   if (tecla == 'C') {
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(14,HIGH);
digitalWrite(15,HIGH);
digitalWrite(16,HIGH);
digitalWrite(17,LOW);
delay(1000);
}
// Tecla D
   if (tecla == 'D') {
digitalWrite(10,LOW);
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(14,HIGH);
digitalWrite(15,HIGH);
digitalWrite(16,LOW);
digitalWrite(17,HIGH);
delay(1000);
    
    }

   if(tecla == '0'){

digitalWrite(10,HIGH);// 0
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(14,HIGH);
digitalWrite(15,HIGH);
digitalWrite(16,HIGH);
digitalWrite(17,LOW);
delay(100);
}
  if(tecla == '1'){

digitalWrite(10,LOW);//1
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(14,LOW);
digitalWrite(15,LOW);
digitalWrite(16,LOW);
digitalWrite(17,LOW);
delay(1000);
}
  if(tecla == '2'){


digitalWrite(10,HIGH);//2
digitalWrite(11,HIGH);
digitalWrite(12,LOW);
digitalWrite(14,HIGH);
digitalWrite(15,HIGH);
digitalWrite(16,LOW);
digitalWrite(17,HIGH);
delay(1000);
}
  if(tecla == '3'){


digitalWrite(10,HIGH);//3
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(14,HIGH);
digitalWrite(15,LOW);
digitalWrite(16,LOW);
digitalWrite(17,HIGH);
delay(1000);
}
  if(tecla == '4'){

digitalWrite(10,LOW);//4
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(14,LOW);
digitalWrite(15,LOW);
digitalWrite(16,HIGH);
digitalWrite(17,HIGH);
delay(1000);
}
  if(tecla == '5'){

digitalWrite(10,HIGH);//5
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(14,HIGH);
digitalWrite(15,LOW);
digitalWrite(16,HIGH);
digitalWrite(17,HIGH);
delay(1000);
}
  if(tecla == '6'){

digitalWrite(10,HIGH);//6
digitalWrite(11,LOW);
digitalWrite(12,HIGH);
digitalWrite(14,HIGH);
digitalWrite(15,HIGH);
digitalWrite(16,HIGH);
digitalWrite(17,HIGH);
delay(1000);
}
  if(tecla == '7'){

digitalWrite(10,HIGH);//7
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(14,LOW);
digitalWrite(15,LOW);
digitalWrite(16,LOW);
digitalWrite(17,LOW);
delay(1000);
}
  if(tecla == '8'){

digitalWrite(10,HIGH);//8
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(14,HIGH);
digitalWrite(15,HIGH);
digitalWrite(16,HIGH);
digitalWrite(17,HIGH);
delay(1000);
}
  if(tecla == '9'){

digitalWrite(10,HIGH);//9
digitalWrite(11,HIGH);
digitalWrite(12,HIGH);
digitalWrite(14,HIGH);
digitalWrite(15,LOW);
digitalWrite(16,HIGH);
digitalWrite(17,HIGH);
delay(1000);
}

// Tecla *
   if (tecla == '*') {
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(14,HIGH);
digitalWrite(15,HIGH);
digitalWrite(16,HIGH);
digitalWrite(17,HIGH);
delay(1000);
}

// Tecla #
   if (tecla == '#') {
digitalWrite(10,HIGH);
digitalWrite(11,LOW);
digitalWrite(12,LOW);
digitalWrite(14,LOW);
digitalWrite(15,HIGH);
digitalWrite(16,HIGH);
digitalWrite(17,HIGH);
delay(1000);
    
    }
else
   digitalWrite(10,HIGH);
   digitalWrite(11,HIGH);
   digitalWrite(12,HIGH);
   digitalWrite(14,HIGH);
   digitalWrite(15,HIGH);
   digitalWrite(16,HIGH);
   digitalWrite(17,LOW);
   
   
   }
   
