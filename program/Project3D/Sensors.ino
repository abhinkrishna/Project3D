void S1Distance() {
  digitalWrite(S1TrigPin, LOW); //turn off the Trig pin incase it was on before
  delayMicroseconds(2); //a very short break

  digitalWrite(S1TrigPin, HIGH); //turn on the Trig pin to send a sound wave
  delayMicroseconds(10); //a short break to let the operation happen
  digitalWrite(S1TrigPin, LOW); //turn off the Trig pin to end the sound wave output

  double dur = pulseIn(S1EchoPin, HIGH); //sensor the sound wave reflection time
  topDistance = (dur * 0.034 / 2);
  Serial.print("Top : ");
  Serial.println(String(topDistance));
}

void S2Distance() {
  digitalWrite(S2TrigPin, LOW); //turn off the Trig pin incase it was on before
  delayMicroseconds(2); //a very short break

  digitalWrite(S2TrigPin, HIGH); //turn on the Trig pin to send a sound wave
  delayMicroseconds(10); //a short break to let the operation happen
  digitalWrite(S2TrigPin, LOW); //turn off the Trig pin to end the sound wave output

  double dur = pulseIn(S2EchoPin, HIGH); //sensor the sound wave reflection time
  sideDistance = (dur * 0.034 / 2);
  Serial.print("side : ");
  Serial.println(String(sideDistance));
}
