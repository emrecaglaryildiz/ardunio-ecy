#include <ESP8266WiFi.h>

const char* ssid = "pms_network";
const char* password = "11221453";
const char* host = "maker.ifttt.com";
int b=1;

void setup() {
  Serial.begin(115200);
  pinMode(16, INPUT);
  Serial.println("Email from Node Mcu");
  delay(100);

  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());





}

void loop() {


  WiFiClient client;
  const int httpPort = 80;
  if (!client.connect(host, httpPort)) {
    Serial.println("connection failed");
    return;
  }
int a =digitalRead(16);
Serial.println(a);

if(a==1 && b==1){



      String url = "*********************";


      Serial.print("Requesting URL: ");
      Serial.println(url);

      client.print(String("GET ") + url + " HTTP/1.1\r\n" +
                   "Host: " + host + "\r\n" +
                   "Connection: close\r\n\r\n");
                   b=0;
}      
else{
  Serial.println("OK");
}
 



  

  delay(1000);


}
