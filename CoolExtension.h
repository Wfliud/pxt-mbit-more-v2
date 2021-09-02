#ifndef SCRATCH_MORE_SERVICE_H
#define SCRATCH_MORE_SERVICE_H

#include "MicroBit.h"

#define SCRATCH_MORE_ID 2000

#define SCRATCH_MORE_EVT_NOTIFY 1

// UUIDs for our service and characteristics
extern const uint16_t CoolServiceUUID;
extern const uint8_t CoolServiceTxUUID[];
extern const uint8_t CoolServiceRxUUID[];

/**
  * Class definition for a MicroBitMore Service.
  * Provides a BLE service to remotely read the state of sensors from Scratch3.
  */
class CoolService {
public:
  /**
    * Constructor.
    * Create a representation of the CoolService
    * @param _uBit The instance of a MicroBit runtime.
    */
  CoolService(MicroBit &_uBit);

  /**
    * Notify data to Scratch3.
    */
  void notify(MicroBitEvent);

  /**
   * Set value to Slots.
   */
  void setSlot(int slot, int value);

  /**
    * Callback. Invoked when any of our attributes are written via BLE.
    */

  void updateDigitalValues();
  void updateAnalogValues();

  int MicrobitFuncState;

  ManagedString WIFI_ID;    // ID
  ManagedString WIFI_PD;    // PASSWORD
  ManagedString WIFIString; // send and recieve a string.
  ManagedString WIFIMAC;    // WIFI MAC
  int WIFIAddr;             // WIFI adress
  bool StringIndeof(ManagedString str1, ManagedString str2);
  ManagedString ReadString();
  void iCloudMemory_Serial_Init(int exterpin);
  void iCloudMemory_WiFi_SSIDPWD_Config(ManagedString SSID, ManagedString PASSWORD);
  ManagedString iCloudMemory_iCloud_Read_String(ManagedString MACaddr, int addr);
  void iCloudMemory_iCloud_Write_str(ManagedString data, int addr);
  void iCloudMemory_iCloudShare_Write_str(ManagedString data, int addr);

  int SS_statei = 0;
  int SS_statej = 0;
  bool SS_valid;
  ManagedString asr_result;
  ManagedString SS_ID;
  ManagedString SS_PD;
  ManagedString TtsString;
  int SS_MODE;
  int BTN_STA;
  void SoundSensor_Search();
  void SoundSensor_SetPort(int exterpin);
  void SoundSensor_WaitInit();
  void SoundSensor_Start_conversation();
  void SoundSensor_End_conversation();
  void SoundSensor_Vocice_conversation(int num);
  void SoundSensor_SetWiFi(ManagedString SSID, ManagedString PASSWORD);
  void SoundSensor_SetMode(int mode);
  void SoundSensor_TtsContent(ManagedString str);

  int VS_MODE, VS_PORT;
  int VS_DETMODE, VS_DETMODE1;
  void VisionSensor_Init(int exterpin);
  bool VisionSensor_Search();
  void VisionSensor_Begin(int exterpin, int Y);
  bool VisionSensor_Detected(int x);
  bool VisionSensor_Detected1(int x);

  /**
   * Sending data buffer B.
   */
  uint8_t txBuffer02[20];

  // Sending data to Scratch3.
  uint8_t txData[20];

  /**
   * Sending data buffer A.
   */
  uint8_t txBuffer01[20];

  // Recieving buffer from Scratch3.
  uint8_t rxBuffer[20];

  /**
   * Button state.
   */
  int buttonAState;
  int buttonBState;

  /**
   * Hold gesture state until next nofification.
   */
  int gesture;

  /**
   * Save the last accelerometer values to conpaire current for detecting moving.
   */
  int lastAcc[3];

  /**
   * Heading angle of compass.
   */
  int compassHeading;

  uint32_t digitalValues;

  uint16_t analogValues;

  void setInputMode(int pinIndex);
  void setDigitalValue(int pinIndex, int value);
  void setAnalogValue(int pinIndex, int value);
  void setServoValue(int pinIndex, int angle, int range, int center);

  void onButtonChanged(MicroBitEvent);
  void onAccelerometerChanged(MicroBitEvent);

  void updateGesture(void);
  void resetGesture(void);

  int normalizeCompassHeading(int heading);
  int convertToTilt(float radians);

  void composeDefaultData(uint8_t *buff);
  void composeTxBuffer01(void);
  void composeTxBuffer02(void);

  void Cool_motor_drive(int exterpin, int speed, int dir);
  void Cool_motor_go(int speed);
  void Cool_motor_back(int speed);
  void Cool_motor_stop();
  void Cool_motor_left(int speed);
  void Cool_motor_right(int speed);

  void digitalPinWrite(int pinIndex, int value);
  int digitalPinRead(int pinIndex);
  int Segment_SCL;
  int Segment_SDA;
  void Cool_Segment_Init(int port);
  void Cool_Segment_Start();
  void Cool_Segment_Send_Byte(int dat);
  int Cool_Segment_Read_Byte();
  void Cool_Set_Segment(int num);
  void Cool_Set_Segment2(int num1, int num2);

  void Cool_ultrasonic_Init(int exterpin);
  uint64_t Cool_pulseIn(int pinIn);
  int Cool_ultrasonic_read();

  void wtr050_sendbyte(int val);
  void wtr050_Init(int exterpin);
  void wtr050_recordstart(int chan);
  void wtr050_recordstop();
  void wtr050_playvoice(int chan);
  void wtr050_stopvoice();

  // microbit runtime instance
  MicroBit &uBit;
};

#endif
