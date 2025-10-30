#include <Servo.h>

Servo jemuran;
int rainSensor = A0;
int nilaiHujan;
int ambang = 500;

void setup() {
  jemuran.attach(9);   // servo di pin 9
  Serial.begin(9600);
  jemuran.write(0);
  Serial.println("Sistem Jemuran Otomatis Siap!");
}

void loop() {
  nilaiHujan = analogRead(rainSensor);
  Serial.print("Nilai Sensor: ");
  Serial.println(nilaiHujan);

  if (nilaiHujan < ambang) {
    Serial.println("Hujan terdeteksi! Menutup jemuran...");
    jemuran.write(90);
  } else {
    Serial.println("Cuaca cerah. Membuka jemuran...");
    jemuran.write(0);
  }

  delay(1000);
}
