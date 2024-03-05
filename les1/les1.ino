void setup() {
  // put your setup code here, to run once:
  pinMode(D3, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
}

int brightness = 0;
bool brighter = true;

void loop() {
  // digitalWrite(D3, HIGH);
  // delay(500);
  // digitalWrite(D3, LOW);
  // delay(500);

  // digitalWrite(D5, HIGH);
  // delay(500);
  // digitalWrite(D5, LOW);
  // delay(500);

  // digitalWrite(D6, HIGH);
  // delay(500);
  // digitalWrite(D6, LOW);
  // delay(500);

  analogWrite(D3, brightness);
  analogWrite(D5, brightness);
  analogWrite(D6, brightness);
  if(brightness == 255){
    brighter = false;
  }
  if(brightness == 0){
    brighter = true;
  }
  if(brighter){
    brightness++;
    return;
  }
  brightness--;
}
