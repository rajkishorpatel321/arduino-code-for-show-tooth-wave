int x,y;
int a;
void setup() {
pinMode(A4,OUTPUT);
pinMode(A1,INPUT);
pinMode(A0,INPUT);
Serial.begin(9600);
}

void loop() {
x=analogRead(A0);
Serial.print("amplitude is: ");
Serial.println(x);
y=analogRead(A1);
Serial.print("frequncy is: ");
Serial.println(y);
for(int i=0;i<=x;i++)
{
  analogWrite(A4,i);
  a=(y/10);
  Serial.print("delay is");
  Serial.println(a);
  i=i+10;
  Serial.print("value of amlitude is");
  Serial.print(i);
  delay(a);
}
analogWrite(A4,0);
}
