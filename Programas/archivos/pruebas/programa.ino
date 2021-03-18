
int led1=11;
int led2=10;
int led3=9;
int led4=8;
int var1;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(led3,OUTPUT);
  pinMode(led4,OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  if (Serial.available())
  {
    var1=Serial.read();
    if (var1=='a'){digitalWrite(led1,HIGH);}
    else{digitalWrite(led1,LOW);}
    if (var1=='c'){digitalWrite(led2,HIGH);}
    else{digitalWrite(led2,LOW);}
    if (var1=='e'){digitalWrite(led3,HIGH);}
    else{digitalWrite(led3,LOW);}
    if (var1=='g'){digitalWrite(led4,HIGH);}
    else{digitalWrite(led4,LOW);}
  
  }
}
