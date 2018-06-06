
char* FLORA_ADDR[]={"C4:7C:8D:EE:EE:EE", "C4:7C:8D:FF:FF:FF"}; //array of different xiaomi flora MAC addresses

String outTopic = "flora/"; //MQTT base topic - data gets published to "basetopic/MAC_address/property", where MAC_address is one of the values from FLORA_ADDR array, property is either temperature, moisture, conductivity, light or battery

#define SLEEP_DURATION 10ll // duration of sleep between flora connection attempts in seconds (must be constant with "ll" suffix)
#define SLEEP_WAIT 30         // time until esp32 is put into deep sleep mode. must be sufficient to connect to wlan, connect to xiaomi flora device & push measurement data to MQTT

#define BATTERY_INTERVAL 12   // Retrieve battery level every n wakeups

const char* wifi_ssid     = "your_SSID";
const char* wifi_password = "your_wifi_password";

const char* MQTT_SERVER = "192.168.1.1";
const char* MQTT_CLIENTID = "miflora-client";
const char* MQTT_USERNAME = "mqtt_username";
const char* MQTT_PASSWORD = "mqtt_password";
