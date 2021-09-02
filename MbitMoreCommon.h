#ifndef MBIT_MORE_COMMON_H
#define MBIT_MORE_COMMON_H

#include "pxt.h"

#if MICROBIT_CODAL
#define MBIT_MORE_USE_SERIAL 1
#else                          // MICROBIT_CODAL
#define MBIT_MORE_USE_SERIAL 0 // v1 has not enough memory space
#endif                         // MICROBIT_CODAL

#define MBIT_MORE_DATA_RECEIVED 8000

/**
 * Data type of content.
 */
enum MbitMoreDataContentType
{
  //% block="number"
  MM_DATA_NUMBER = 1,
  //% block="text"
  MM_DATA_TEXT = 2,
};

#define MM_CH_BUFFER_SIZE_COMMAND 20
#define MM_CH_BUFFER_SIZE_NOTIFY 20
#define MM_CH_BUFFER_SIZE_STATE 7
#define MM_CH_BUFFER_SIZE_MOTION 18
#define MM_CH_BUFFER_SIZE_ANALOG_IN 2

enum MbitMoreCommand // 3 bits (0x00..0x07)
{
  CMD_CONFIG = 0x00,
  CMD_PIN = 0x01,
  CMD_DISPLAY = 0x02,
  CMD_AUDIO = 0x03,
  CMD_DATA = 0x04,
  CMD_MOTION = 0x05,
  CMD_VISION = 0x06,
  CMD_WIFI = 0x07,
};

enum MbitMorePinCommand
{
  SET_OUTPUT = 0x01,
  SET_PWM = 0x02,
  SET_SERVO = 0x03,
  SET_PULL = 0x04,
  SET_EVENT = 0x05,
};

enum MbitMoreDisplayCommand
{
  CLEAR = 0x00,
  TEXT = 0x01,
  PIXELS_0 = 0x02,
  PIXELS_1 = 0x03,
  CMD_SS_STOP_CON = 0x04,
  CMD_SS_VOICE_CON = 0x05,
  CMD_SS_SENDTTS = 0x06,
  CMD_SS_SERACH = 0x07,
};

/**
 * Enum for commannd about wifi
 * @readonly
 * @enum{number}
 */
enum MbitMoreWIFICommand
{
  CMD_SEGMENT_INIT = 0x00,
  CMD_SEGMENT_SHOW = 0x01,
  CMD_SEGMENT_SHOW2 = 0x02,
  CMD_WIFI_INIT = 0x03,
  CMD_WIFI_SETID = 0x04,
  CMD_WIFI_GET = 0x05,
  CMD_WIFI_SEND_I = 0x06,
  CMD_WIFI_SEND_S = 0x07,
};

/**
 * Enum for command about vision and sound
 * @readonly
 * @enum {number}
 */
enum MbitmoreVisionCommand
{
  CMD_WTR050_INIT = 0x00,
  CMD_WTR050_RECORDSTART = 0x01,
  CMD_WTR050_RECORDSTOP = 0x02,
  CMD_WTR050_VOICEPLAY = 0x03,
  CMD_WTR050_VOICESTOP = 0x04,
  CMD_VS_INIT = 0x05,
  CMD_VS_DET = 0x06,
  CMD_VS_DET1 = 0x07,
};

/**
 * Enum for command about motion
 * @readonly
 * @enum{number}
 */
enum MbitMoreMotionCommand
{
  CMD_MOTOR_SET = 0x00,
  CMD_CAR_SET = 0x01,
  CMD_ULTRASONIC_INIT = 0x02,
  CMD_ULTRASONIC_READ = 0x03,
};

/**
 * Enum for sub-command about configurations.
 * @readonly
 * @enum {number}
 */
enum MbitMoreConfig
{
  MIC = 0x01,
  TOUCH = 0x02,
  SS_INIT = 0x03,
  SS_ACC = 0x04,
  SS_WAIT = 0x05,
  SS_MODE = 0x06,
  SS_START_CON = 0x07,
};

/**
 * Enum for sub-command about audio.
 * @readonly
 * @enum {number}
 */
enum MbitMoreAudioCommand
{
  STOP_TONE = 0x00,
  PLAY_TONE = 0x01
};

/**
 * Enum for index of CoolExtension pins
 * @readonly
 * @enum {number}
 */
enum MbitMoreCoolPinIndex
{
  IO1 = 0,
  IO2 = 1,
  IO16 = 3,
  IO13_14 = 4,
  IO15_16 = 5,
};

/**
 * @brief Enum for write mode of display pixels.
 */
enum MbitMoreDisplayWriteMode
{
  LAYER = 0,
  OVER_WRITE = 1
};

enum MbitMorePullMode
{
  None = 0,
  Down = 1,
  Up = 2,
};

enum MbitMoreDataFormat
{
  CONFIG = 0x10, // not used at this version
  PIN_EVENT = 0x11,
  ACTION_EVENT = 0x12,
  DATA_NUMBER = 0x13,
  DATA_TEXT = 0x14
};

enum MbitMoreActionEvent
{
  BUTTON = 0x01,
  GESTURE = 0x02
};

enum MbitMoreButtonEvent
{
  DOWN = 1,
  UP = 2,
  CLICK = 3,
  LONG_CLICK = 4,
  HOLD = 5,
  DOUBLE_CLICK = 6
};

enum MbitMoreGestureEvent
{
  TILT_UP = 1,
  TILT_DOWN = 2,
  TILT_LEFT = 3,
  TILT_RIGHT = 4,
  FACE_UP = 5,
  FACE_DOWN = 6,
  FREEFALL = 7,
  G3 = 8,
  G6 = 9,
  G8 = 10,
  SHAKE = 11
};

enum MbitMorePinEventType
{
  NONE = 0,
  ON_EDGE = 1,
  ON_PULSE = 2,
  ON_TOUCH = 3
};

enum MbitMorePinEvent
{
  RISE = 2,
  FALL = 3,
  PULSE_HIGH = 4,
  PULSE_LOW = 5
};

#endif // MBIT_MORE_COMMON_H
