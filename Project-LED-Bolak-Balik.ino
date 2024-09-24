// Jumlah LED yang digunakan
const int jumlahLED = 3;

// Array pin LED
int ledPin[jumlahLED] = {8, 9, 10};

void setup() {
  // Set semua pin LED sebagai output
  for (int i = 0; i < jumlahLED; i++) {
    pinMode(ledPin[i], OUTPUT);
  }
}

void loop() {
  // LED berjalan ke kanan
  for (int i = 0; i < jumlahLED; i++) {
    digitalWrite(ledPin[i], HIGH); // Nyalakan LED
    delay(500);                    // Tunggu 500 ms
    digitalWrite(ledPin[i], LOW);  // Matikan LED
  }

  // LED berjalan ke kiri
  for (int i = jumlahLED - 1; i >= 0; i--) {
    digitalWrite(ledPin[i], HIGH); // Nyalakan LED
    delay(500);                    // Tunggu 500 ms
    digitalWrite(ledPin[i], LOW);  // Matikan LED
  }
}
