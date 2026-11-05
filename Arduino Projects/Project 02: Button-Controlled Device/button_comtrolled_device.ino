int red= 13;
int green= 4;
int btn1=10;
int btn2=6;

int current_btn1;
int current_btn2;
int btn_state;

void setup(){
  pinMode(red, OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(btn1,INPUT_PULLUP);
  pinMode(btn2,INPUT_PULLUP);
  digitalWrite(red,HIGH);
  digitalWrite(green,LOW);
}

void loop(){
  
  current_btn1= digitalRead(btn1);
  current_btn2= digitalRead(btn2);
  
  if(current_btn2 == LOW){
    btn_state= HIGH;
  }
  else if(current_btn1 == LOW){
    btn_state=LOW;
  }
 
  
  if(btn_state == LOW){
    digitalWrite(red,HIGH);
    digitalWrite(green,LOW);
  }else if(btn_state== HIGH){
    digitalWrite(red,LOW);
    digitalWrite(green,HIGH);
  
  }
  
}
