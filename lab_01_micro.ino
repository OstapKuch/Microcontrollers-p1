int button = 49;
int leds[8] = {A0, A7, A1, A6, A2, A5, A3, A4};
int timeout = 110;

void setup(){
  pinMode (button, INPUT);
  digitalWrite(button, HIGH);
  int i;
  for (i = 0; i < 8; i++) {
    pinMode (leds[i], OUTPUT);
  }
}

void loop(){
  if (digitalRead (button)== LOW) {
    led_blink();
  }
}

void led_blink() {
  int i;
  for (i = 0; i < 8; i++) {
  digitalWrite (leds[i], HIGH);
  delay (20);
  digitalWrite (leds[i], LOW);
  delay (timeout);

  }
}
