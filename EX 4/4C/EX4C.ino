#include <SPI.h>
#include <MFRC522.h>

#define SS_PIN 53
#define RST_PIN 9

MFRC522 mfrc522(SS_PIN, RST_PIN);
String authorizedUID = "B1 D4 4A 0A";

void setup() {
  Serial.begin(9600);
  SPI.begin();
  mfrc522.PCD_Init();
  Serial.println("RFID Access Control System");
  Serial.println("Approximate your card to the reader...");
}

void loop() {
  // Check whether a new card is present
  if (!mfrc522.PICC_IsNewCardPresent()) {
    return;
  }

  // Read the card UID
  if (!mfrc522.PICC_ReadCardSerial()) {
    return;
  }

  String readUID = "";
  for (byte i = 0; i < mfrc522.uid.size; i++) {
    if (mfrc522.uid.uidByte[i] < 0x10) {
      readUID += "0";
    }
    readUID += String(mfrc522.uid.uidByte[i], HEX);
    if (i < mfrc522.uid.size - 1) {
      readUID += " ";
    }
  }

  readUID.toUpperCase();
  Serial.print("Card UID: ");
  Serial.println(readUID);

  if (readUID == authorizedUID) {
    Serial.println("Authorized Access");
  } else {
    Serial.println("Access Denied");
  }

  Serial.println();
  delay(1000);
}
