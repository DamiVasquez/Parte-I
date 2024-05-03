//Damasco Oxcal Vasquez 2023442
//Primera parte de la practica numero cuatro.

int a=5;
int b=6;
int c=7;
int d=8;

void setup(){ 
Serial.begin(9600);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
}
void loop(){
  int l=digitalRead(2);
  int m=digitalRead(3);
  int n=digitalRead(4);

   if (l && !m && !n) {
       digitalWrite(a, LOW);//numero 0
       digitalWrite(b, LOW);
       digitalWrite(c, LOW);
       digitalWrite(d, LOW);
       delay(1000); // 1 segundo
       digitalWrite(a, HIGH);//numero 1
       digitalWrite(b, LOW);
       digitalWrite(c, LOW);
       digitalWrite(d, LOW);
       delay(1000); // 1 segundo
       digitalWrite(a, LOW);//numero 2
       digitalWrite(b, HIGH);
       digitalWrite(c, LOW);
       digitalWrite(d, LOW);
       delay(1000); // 1 segundo
       digitalWrite(a, HIGH);//numero 3
       digitalWrite(b, HIGH);
       digitalWrite(c, LOW);
       digitalWrite(d, LOW);
       delay(1000); // 1 segundo
       digitalWrite(a, LOW);//numero 4
       digitalWrite(b, LOW);
       digitalWrite(c, HIGH);
       digitalWrite(d, LOW);
       delay(1000); // 1 segundo
       digitalWrite(a, HIGH);//numero 5
       digitalWrite(b, LOW);
       digitalWrite(c, HIGH);
       digitalWrite(d, LOW);
       delay(1000); // 1 segundo
       digitalWrite(a, LOW);//numero 6
       digitalWrite(b, HIGH);
       digitalWrite(c, HIGH);
       digitalWrite(d, LOW);
       delay(1000); // 1 segundo
       digitalWrite(a, HIGH);//numero 7
       digitalWrite(b, HIGH);
       digitalWrite(c, HIGH);
       digitalWrite(d, LOW);
       delay(1000); // 1 segundo
       digitalWrite(a, LOW);//numero 8
       digitalWrite(b, LOW);
       digitalWrite(c, LOW);
       digitalWrite(d, HIGH);
       delay(1000); // 1 segundo
       digitalWrite(a, HIGH);//numero 9
       digitalWrite(b, LOW);
       digitalWrite(c, LOW);
       digitalWrite(d, HIGH);
       delay(1000); // 1 segundo
     } 
else if (!l && m && !n) {
       digitalWrite(a, LOW);//numero 0
       digitalWrite(b, LOW);
       digitalWrite(c, LOW);
       digitalWrite(d, LOW);
       delay(2000); // 2 segundos
       digitalWrite(a, HIGH);//numero 1
       digitalWrite(b, LOW);
       digitalWrite(c, LOW);
       digitalWrite(d, LOW);
       delay(2000); // 2 segundos
       digitalWrite(a, LOW);//numero 2
       digitalWrite(b, HIGH);
       digitalWrite(c, LOW);
       digitalWrite(d, LOW);
       delay(2000); // 2 segundos
       digitalWrite(a, HIGH);//numero 3
       digitalWrite(b, HIGH);
       digitalWrite(c, LOW);
       digitalWrite(d, LOW);
       delay(2000); // 2 segundos
       digitalWrite(a, LOW);//numero 4
       digitalWrite(b, LOW);
       digitalWrite(c, HIGH);
       digitalWrite(d, LOW);
       delay(2000); // 2 segundos
       digitalWrite(a, HIGH);//numero 5
       digitalWrite(b, LOW);
       digitalWrite(c, HIGH);
       digitalWrite(d, LOW);
       delay(2000); // 2 segundos
       digitalWrite(a, LOW);//numero 6
       digitalWrite(b, HIGH);
       digitalWrite(c, HIGH);
       digitalWrite(d, LOW);
       delay(2000); // 2 segundos
       digitalWrite(a, HIGH);//numero 7
       digitalWrite(b, HIGH);
       digitalWrite(c, HIGH);
       digitalWrite(d, LOW);
       delay(2000); // 2 segundos
       digitalWrite(a, LOW);//numero 8
       digitalWrite(b, LOW);
       digitalWrite(c, LOW);
       digitalWrite(d, HIGH);
       delay(2000); // 2 segundos
       digitalWrite(a, HIGH);//numero 9
       digitalWrite(b, LOW);
       digitalWrite(c, LOW);
       digitalWrite(d, HIGH);
       delay(2000); // 2 segundos
     }
   else if (!l && !m && n) {
      digitalWrite(a, LOW);//numero 0
       digitalWrite(b, LOW);
       digitalWrite(c, LOW);
       digitalWrite(d, LOW);
       delay(3000); // 3 segundos
       digitalWrite(a, HIGH);//numero 1
       digitalWrite(b, LOW);
       digitalWrite(c, LOW);
       digitalWrite(d, LOW);
       delay(3000); // 3 segundos
       digitalWrite(a, LOW);//numero 2
       digitalWrite(b, HIGH);
       digitalWrite(c, LOW);
       digitalWrite(d, LOW);
       delay(3000); // 3 segundos
       digitalWrite(a, HIGH);//numero 3
       digitalWrite(b, HIGH);
       digitalWrite(c, LOW);
       digitalWrite(d, LOW);
       delay(3000); // 3 segundos
       digitalWrite(a, LOW);//numero 4
       digitalWrite(b, LOW);
       digitalWrite(c, HIGH);
       digitalWrite(d, LOW);
       delay(3000); // 3 segundos
       digitalWrite(a, HIGH);//numero 5
       digitalWrite(b, LOW);
       digitalWrite(c, HIGH);
       digitalWrite(d, LOW);
       delay(3000); // 3 segundos
       digitalWrite(a, LOW);//numero 6
       digitalWrite(b, HIGH);
       digitalWrite(c, HIGH);
       digitalWrite(d, LOW);
       delay(3000); // 3 segundos
       digitalWrite(a, HIGH);//numero 7
       digitalWrite(b, HIGH);
       digitalWrite(c, HIGH);
       digitalWrite(d, LOW);
       delay(3000); // 3 segundos
       digitalWrite(a, LOW);//numero 8
       digitalWrite(b, LOW);
       digitalWrite(c, LOW);
       digitalWrite(d, HIGH);
       delay(3000); // 3 segundos
       digitalWrite(a, HIGH);//numero 9
       digitalWrite(b, LOW);
       digitalWrite(c, LOW);
       digitalWrite(d, HIGH);
       delay(3000); // 3 segundos
     }
   else {
       digitalWrite(a, LOW);//numero 0
       digitalWrite(b, LOW);
       digitalWrite(c, LOW);
       digitalWrite(d, LOW);
       delay(500); // 500 milisegundos
       digitalWrite(a, HIGH);//numero 1
       digitalWrite(b, LOW);
       digitalWrite(c, LOW);
       digitalWrite(d, LOW);
       delay(500); // 500 milisegundos
       digitalWrite(a, LOW);//numero 2
       digitalWrite(b, HIGH);
       digitalWrite(c, LOW);
       digitalWrite(d, LOW);
       delay(500); // 500 milisegundos
       digitalWrite(a, HIGH);//numero 3
       digitalWrite(b, HIGH);
       digitalWrite(c, LOW);
       digitalWrite(d, LOW);
       delay(500); // 500 milisegundos
       digitalWrite(a, LOW);//numero 4
       digitalWrite(b, LOW);
       digitalWrite(c, HIGH);
       digitalWrite(d, LOW);
       delay(500); // 500 milisegundos
       digitalWrite(a, HIGH);//numero 5
       digitalWrite(b, LOW);
       digitalWrite(c, HIGH);
       digitalWrite(d, LOW);
       delay(500); // 500 milisegundos
       digitalWrite(a, LOW);//numero 6
       digitalWrite(b, HIGH);
       digitalWrite(c, HIGH);
       digitalWrite(d, LOW);
       delay(500); //  500 milisegundos
       digitalWrite(a, HIGH);//numero 7
       digitalWrite(b, HIGH);
       digitalWrite(c, HIGH);
       digitalWrite(d, LOW);
       delay(500); // 500 milisegundos
       digitalWrite(a, LOW);//numero 8
       digitalWrite(b, LOW);
       digitalWrite(c, LOW);
       digitalWrite(d, HIGH);
       delay(500); // 500 milisegundos
       digitalWrite(a, HIGH);//numero 9
       digitalWrite(b, LOW);
       digitalWrite(c, LOW);
       digitalWrite(d, HIGH);
       delay(500); // 500 milisegundos     
  } 
}
  
