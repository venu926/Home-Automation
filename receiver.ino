int fan=8, bulb1=9;
char data;

void setup() {
  Serial.begin(9600);
  pinMode(fan,OUTPUT);
  pinMode(bulb1,OUTPUT);
}

void loop() {
  data=Serial.read();
  if(data=='a')
  {
    digitalWrite(fan,HIGH);
    digitalWrite(bulb1,LOW);
    delay(10);
  }
  if(data=='b')
  {
    digitalWrite(fan,LOW);
    digitalWrite(bulb1,HIGH);
    delay(10);
  }
  if(data=='c')
  {
    digitalWrite(fan,HIGH);
    digitalWrite(bulb1,HIGH);
    delay(10);
  }
  if(data=='d')
  {
    digitalWrite(fan,LOW);
    digitalWrite(bulb1,LOW);
    delay(10);
  }
}
