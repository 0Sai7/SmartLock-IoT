
#include <sd_defines.h>
#include <sd_diskio.h>
#define FIREBASE_HOST "b-18-iot-default-rtdb.firebaseio.com" //Do not include https:// in FIREBASE_HOST
#define FIREBASE_AUTH "cxoF6XTPUV1t4UPeKmdf2btCaF2ZsMMD2tO6HVrR"
#define WIFI_SSID "007"
#define WIFI_PASSWORD "8522003303"
#include <Wire.h>
#include <FirebaseESP32.h>
#include <SSD1306.h> 
FirebaseData firebaseData;
SSD1306  display(0x3c, 21, 22);
