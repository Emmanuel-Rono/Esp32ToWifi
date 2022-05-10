
#include<WiFi.h>
//declare the variables
const char* ssid="AccessPoint";
const char* password="INTERNET of things";
int delayT=5000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(115200);WiFi.begin(ssid,password);
Serial.println("Connecting to");Serial.print(ssid);
Serial.println("Waiting for successful connection......");
int i=0;
while(WiFi.status() != WL_CONNECTED)
{
delay(delayT);
Serial.println(++i);

}
  Serial.println("Connection successful....");Serial.print("Ïp address=");
  Serial.println(WiFi.localIP());
}
void loop() {
  
  // put your main code here, to run repeatedly
  }
