int LED1pin = 43;
int LED2pin = 44;
int LED3pin = 45;
int LED4pin = 46;

int button1pin = 41; 
int button2pin = 40; 

bool systemON = false;
int mode = 1;

int prevButton1 = LOW;
int prevButton2 = LOW;

unsigned long previousTime = 0;

int currentLED = 0;
bool blinkState = LOW;

void setup() {

  pinMode(LED1pin, OUTPUT);
  pinMode(LED2pin, OUTPUT);
  pinMode(LED3pin, OUTPUT);
  pinMode(LED4pin, OUTPUT);

  pinMode(button1pin, INPUT);
  pinMode(button2pin, INPUT);
}

void loop() {

  int button1 = digitalRead(button1pin);
  int button2 = digitalRead(button2pin);

  if (button1 == HIGH && prevButton1 == LOW) {

    systemON = !systemON;

    currentLED = 0;
    previousTime = millis();

    digitalWrite(LED1pin, LOW);
    digitalWrite(LED2pin, LOW);
    digitalWrite(LED3pin, LOW);
    digitalWrite(LED4pin, LOW);

    delay(200);
  }

  if (button2 == HIGH && prevButton2 == LOW) {

    mode++;

    if (mode > 3) {
      mode = 1;
    }

    currentLED = 0;
    previousTime = millis();

    digitalWrite(LED1pin, LOW);
    digitalWrite(LED2pin, LOW);
    digitalWrite(LED3pin, LOW);
    digitalWrite(LED4pin, LOW);

    delay(200);
  }

  prevButton1 = button1;
  prevButton2 = button2;

  if (systemON == false) {

    digitalWrite(LED1pin, LOW);
    digitalWrite(LED2pin, LOW);
    digitalWrite(LED3pin, LOW);
    digitalWrite(LED4pin, LOW);
  }

  else if (mode == 1) {

    if (millis() - previousTime >= 1000) {

      previousTime = millis();

      blinkState = !blinkState;

      digitalWrite(LED1pin, blinkState);
      digitalWrite(LED2pin, blinkState);
      digitalWrite(LED3pin, blinkState);
      digitalWrite(LED4pin, blinkState);
    }
  }

  else if (mode == 2) {

    if (millis() - previousTime >= 1000) {

      previousTime = millis();

      digitalWrite(LED1pin, LOW);
      digitalWrite(LED2pin, LOW);
      digitalWrite(LED3pin, LOW);
      digitalWrite(LED4pin, LOW);

      if (currentLED == 0) {
        digitalWrite(LED4pin, HIGH);
      }
      else if (currentLED == 1) {
        digitalWrite(LED3pin, HIGH);
      }
      else if (currentLED == 2) {
        digitalWrite(LED2pin, HIGH);
      }
      else if (currentLED == 3) {
        digitalWrite(LED1pin, HIGH);
      }

      currentLED++;

      if (currentLED > 3) {
        currentLED = 0;
      }
    }
  }

  else if (mode == 3) {

    if (millis() - previousTime >= 1000) {

      previousTime = millis();

      digitalWrite(LED1pin, LOW);
      digitalWrite(LED2pin, LOW);
      digitalWrite(LED3pin, LOW);
      digitalWrite(LED4pin, LOW);

      if (currentLED == 0) {
        digitalWrite(LED1pin, HIGH);
      }
      else if (currentLED == 1) {
        digitalWrite(LED2pin, HIGH);
      }
      else if (currentLED == 2) {
        digitalWrite(LED3pin, HIGH);
      }
      else if (currentLED == 3) {
        digitalWrite(LED4pin, HIGH);
      }

      currentLED++;

      if (currentLED > 3) {
        currentLED = 0;
      }
    }
  }
}
