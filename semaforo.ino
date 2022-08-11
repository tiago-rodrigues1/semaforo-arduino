#define RED 11
#define YELLOW 9
#define GREEN 6

void setup()
{
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);
}

void turnRedOn() {
  digitalWrite(RED, 1);
  digitalWrite(YELLOW, 0);
  digitalWrite(GREEN, 0);
  
  delay(4000);
}

void turnYellowOn() {
  digitalWrite(RED, 0);
  digitalWrite(YELLOW, 1);
  digitalWrite(GREEN, 0);
  
  delay(1000);
}

void turnGreenOn() {
  digitalWrite(RED, 0);
  digitalWrite(YELLOW, 0);
  digitalWrite(GREEN, 1);
 
  delay(3000);
}

void loop()
{ 
  turnRedOn();
  turnGreenOn();
  turnYellowOn();
}
