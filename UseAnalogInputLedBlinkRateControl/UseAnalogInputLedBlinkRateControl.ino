// 光センサをアナログ入力に使った場合には、かざした時間で点滅速度が変わる

const int LED = 13;
int val = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = analogRead(0);
  
  digitalWrite(13, HIGH);
  delay(val);
  
  digitalWrite(13, LOW);
  delay(val);
}
