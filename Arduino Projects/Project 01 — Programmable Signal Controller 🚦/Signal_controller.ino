int red= 10;
int green= 9;
int yellow= 8;

void setup(){
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  digitalWrite(red,LOW);
  digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
}

void loop(){
  digitalWrite(red,HIGH);
  delay(3000);
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  delay(3000);
  digitalWrite(green, LOW);
  digitalWrite(yellow,HIGH);
  delay(1000);
  digitalWrite(yellow, LOW);
  
}
