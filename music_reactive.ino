int x = A0;
int sound;
int led1 = 2;
int led2 = 3;
int led3 = 4;
int led4 = 5;
int led5 = 6;
int led6 = 7;
int led7 = 8;
int led8 = 9;
int led9 = 10;
int led10 = 11;
int led11= 12;
int led12= 13;
void setup() {
  // put your setup code here, to run once:
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
pinMode(led3, OUTPUT);
pinMode(led4, OUTPUT);
pinMode(led5, OUTPUT);
pinMode(led6, OUTPUT);
pinMode(led7, OUTPUT);
pinMode(led8, OUTPUT);
pinMode(led9, OUTPUT);
pinMode(led10, OUTPUT);
pinMode(led11, OUTPUT);
pinMode(led12, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
sound = analogRead(x);
Serial.println(sound);
if (sound > 10)
{
digitalWrite(led1, HIGH);
delay(10);
}
if (sound < 10)
{
digitalWrite(led1, LOW);
}
if (sound > 20)
{
digitalWrite(led2, HIGH);
delay(10);
}
if (sound < 20)
{
digitalWrite(led2, LOW);
}
if (sound > 30)
{
digitalWrite(led3, HIGH);
delay(10);
}
if (sound < 30)
{
digitalWrite(led3, LOW);
}
if (sound > 40)
{
digitalWrite(led4, HIGH);
delay(10);
}
if (sound < 40)
{
digitalWrite(led4, LOW);
}
if (sound > 50)
{
digitalWrite(led5, HIGH);
delay(10);
}
if (sound < 50)
{
digitalWrite(led5, LOW);
}
if (sound > 60)
{
digitalWrite(led6, HIGH);
delay(10);
}
if (sound < 60)
{
digitalWrite(led6, LOW);
}
if (sound > 70)
{
digitalWrite(led7, HIGH);
delay(10);
}
if (sound < 70)
{
digitalWrite(led7, LOW);
}
if (sound > 80)
{
digitalWrite(led8, HIGH);
delay(10);
}
if (sound < 80)
{
digitalWrite(led8, LOW);
}
if (sound > 90)
{
digitalWrite(led9, HIGH);
delay(10);
}
if (sound < 90)
{
digitalWrite(led9, LOW);
}
if (sound > 100)
{
digitalWrite(led10, HIGH);
delay(10);
}
if (sound < 100)
{
digitalWrite(led10, LOW);
}
if (sound > 110)
{
digitalWrite(led11, HIGH);
delay(10);
}
if (sound < 110)
{
digitalWrite(led11, LOW);
}
if (sound > 120)
{
digitalWrite(led12, HIGH);
delay(10);
}
if (sound < 120)
{
digitalWrite(led12, LOW);
}
delay(0);
}
