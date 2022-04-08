int Red=11;
int Green=10;
int Blue=9;

int inPin=A0;
int Val;

void setup() {
  pinMode(inPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  Serial.println(Val);
  Val=analogRead(inPin);
  if (Val<=146) {
  analogWrite(Red, 255);
  analogWrite(Green, 0);
  analogWrite(Blue, 0);
  }
  else if (Val>146 && Val<=292) {
  analogWrite(Red, 235);
  analogWrite(Green, 5);
  analogWrite(Blue, 0);
  }
  else if (Val>292 && Val<=438) {
  analogWrite(Red, 255);
  analogWrite(Green, 35);
  analogWrite(Blue, 0);
  }
  else if (Val>438 && Val<=584) {
  analogWrite(Red, 0);
  analogWrite(Green, 255);
  analogWrite(Blue, 0);
  }
  else if (Val>584 && Val<=730) {
  analogWrite(Red, 0);
  analogWrite(Green, 35);
  analogWrite(Blue, 255);
  }
  else if (Val>730 && Val<=876) {
  analogWrite(Red, 255);
  analogWrite(Green, 0);
  analogWrite(Blue, 255);
  }
  else {
  analogWrite(Red, 80);
  analogWrite(Green, 0);
  analogWrite(Blue, 130);
  }
}
