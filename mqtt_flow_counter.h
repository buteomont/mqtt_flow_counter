#define VALID_SETTINGS_FLAG 0xDAB0
#define SSID_SIZE 100
#define PASSWORD_SIZE 50
#define ADDRESS_SIZE 30
#define USERNAME_SIZE 50
#define MQTT_TOPIC_SIZE 150
#define MQTT_TOPIC_RAW "raw"
#define MQTT_TOPIC_LITERS "liters"
#define MQTT_TOPIC_PERIOD "period"
#define SENSOR_PIN 4     // the input pin for the sensor


// Error codes copied from the MQTT library
#define MQTT_CONNECTION_REFUSED            -2
#define MQTT_CONNECTION_TIMEOUT            -1
#define MQTT_SUCCESS                        0
#define MQTT_UNACCEPTABLE_PROTOCOL_VERSION  1
#define MQTT_IDENTIFIER_REJECTED            2
#define MQTT_SERVER_UNAVAILABLE             3
#define MQTT_BAD_USER_NAME_OR_PASSWORD      4
#define MQTT_NOT_AUTHORIZED                 5
