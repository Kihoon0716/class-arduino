int  led = 13;
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);   
}

void loop() {
  // put your main code here, to run repeatedly:
  // LED를 ON 합니다.
  digitalWrite(led, HIGH);
  // 1초간 대기합니다.
  delay(1000);        
  // LED를 OFF 합니다.
  digitalWrite(led,LOW);
  // 1초간 대기합니다.
  delay(1000);    
}
