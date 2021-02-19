int left_sensor = A0;
int right_sensor =A1;
int left_motorf = A2;
int left_motorb = A3;
int right_motorf = A4;
int right_motorb = A5;


void setup() {
  pinMode(left_sensor, INPUT);
  pinMode(right_sensor, INPUT);
  pinMode(left_motorf, OUTPUT);
  pinMode(left_motorb, OUTPUT);
  pinMode(right_motorf, OUTPUT);
  pinMode(right_motorb, OUTPUT);
}

void loop() 
{
if(analogRead(left_sensor)<500 && analogRead(right_sensor)<500)
{
  analogWrite(left_motorf, 150);
  analogWrite(right_motorf, 150);
}
else if(analogRead(left_sensor)>=500 && analogRead(right_sensor)<500)
{
  analogWrite(left_motorf, 0);
  analogWrite(right_motorf, 150);
}
else if(analogRead(left_sensor)<500 && analogReadd(right_sensor)>=500)
{
   analogWrite(left_motorf, 150);
  analogWrite(right_motorf, 0);
}
else if(analogRead(left_sensor)<=500 && analogRead(right_sensor)<=500)
{
  analogWrite(left_motorf, 0);
  analogWrite(right_motorf, 0);
}

}
