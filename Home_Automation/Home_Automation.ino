//Home Automation
int relay1 = 8;
int relay2 = 9;
int relay3 = 10;
int relay4 = 11;
int incommingByte;

void setup()
{
  pinMode(relay1, OUTPUT);
  pinMode(relay2, OUTPUT);
  pinMode(relay3, OUTPUT);
  pinMode(relay4, OUTPUT);
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
  Serial.begin(9600);
  Serial.println("Home Automation System");
  Serial.println("Group 11");
}

void loop()
{
  if (Serial.available() > 0)
    incommingByte = Serial.read();

  switch (incommingByte)
  {
    case 'A': relay1_on();
      break;
    case 'B': relay2_on();
      break;
    case 'C': relay3_on();
      break;
    case 'D': relay4_on();
      break;
    case 'E': all_relay_on();
      break;
    case 'a': relay1_off();
      break;
    case 'b': relay2_off();
      break;
    case 'c': relay3_off();
      break;
    case 'd': relay4_off();
      break;
    case 'e': all_relay_off();
      break;
  }
}

void relay1_on()
{
  digitalWrite(relay1, LOW);
  Serial.println("RELAY 1 ON");
}
void relay2_on()
{
  digitalWrite(relay2, LOW);
  Serial.println("RELAY 2 ON");
}
void relay3_on()
{
  digitalWrite(relay3, LOW);
  Serial.println("RELAY 3 ON");
}
void relay4_on()
{
  digitalWrite(relay4, LOW);
  Serial.println("RELAY 4 ON");
}

void all_relay_on()
{
  digitalWrite(relay1, LOW);
  digitalWrite(relay2, LOW);
  digitalWrite(relay3, LOW);
  digitalWrite(relay4, LOW);
  Serial.println("ALL RELAY ON");
}
void relay1_off()
{
  digitalWrite(relay1, HIGH);
  Serial.println("RELAY 1 OFF");
}
void relay2_off()
{
  digitalWrite(relay2, HIGH);
  Serial.println("RELAY 2 OFF");
}
void relay3_off()
{
  digitalWrite(relay3, HIGH);
  Serial.println("RELAY 3 OFF");
}
void relay4_off()
{
  digitalWrite(relay4, HIGH);
  Serial.println("RELAY 4 OFF");
}
void all_relay_off()
{
  digitalWrite(relay1, HIGH);
  digitalWrite(relay2, HIGH);
  digitalWrite(relay3, HIGH);
  digitalWrite(relay4, HIGH);
  Serial.println("ALL RELAY OFF");
}
