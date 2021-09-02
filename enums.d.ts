// Auto-generated. Do not edit.


    /**
     * Data type of content.
     */

    declare const enum MbitMoreDataContentType
    {
    //% block="number"
    MM_DATA_NUMBER = 1,
    //% block="text"
    MM_DATA_TEXT = 2,
    }


    declare const enum MbitMoreCommand
    {
    CMD_CONFIG = 0x00,
    CMD_PIN = 0x01,
    CMD_DISPLAY = 0x02,
    CMD_AUDIO = 0x03,
    CMD_DATA = 0x04,
    CMD_MOTION = 0x05,
    CMD_VISION = 0x06,
    CMD_WIFI = 0x07,
    }


    declare const enum MbitMorePinCommand
    {
    SET_OUTPUT = 0x01,
    SET_PWM = 0x02,
    SET_SERVO = 0x03,
    SET_PULL = 0x04,
    SET_EVENT = 0x05,
    }


    declare const enum MbitMoreDisplayCommand
    {
    CLEAR = 0x00,
    TEXT = 0x01,
    PIXELS_0 = 0x02,
    PIXELS_1 = 0x03,
    CMD_SS_STOP_CON = 0x04,
    CMD_SS_VOICE_CON = 0x05,
    CMD_SS_SENDTTS = 0x06,
    CMD_SS_SERACH = 0x07,
    }


    /**
     * Enum for commannd about wifi
     * @readonly
     * @enum{number}
     */

    declare const enum MbitMoreWIFICommand
    {
    CMD_SEGMENT_INIT = 0x00,
    CMD_SEGMENT_SHOW = 0x01,
    CMD_SEGMENT_SHOW2 = 0x02,
    CMD_WIFI_INIT = 0x03,
    CMD_WIFI_SETID = 0x04,
    CMD_WIFI_GET = 0x05,
    CMD_WIFI_SEND_I = 0x06,
    CMD_WIFI_SEND_S = 0x07,
    }


    /**
     * Enum for command about vision and sound
     * @readonly
     * @enum {number}
     */

    declare const enum MbitmoreVisionCommand
    {
    CMD_WTR050_INIT = 0x00,
    CMD_WTR050_RECORDSTART = 0x01,
    CMD_WTR050_RECORDSTOP = 0x02,
    CMD_WTR050_VOICEPLAY = 0x03,
    CMD_WTR050_VOICESTOP = 0x04,
    CMD_VS_INIT = 0x05,
    CMD_VS_DET = 0x06,
    CMD_VS_DET1 = 0x07,
    }


    /**
     * Enum for command about motion
     * @readonly
     * @enum{number}
     */

    declare const enum MbitMoreMotionCommand
    {
    CMD_MOTOR_SET = 0x00,
    CMD_CAR_SET = 0x01,
    CMD_ULTRASONIC_INIT = 0x02,
    CMD_ULTRASONIC_READ = 0x03,
    }


    /**
     * Enum for sub-command about configurations.
     * @readonly
     * @enum {number}
     */

    declare const enum MbitMoreConfig
    {
    MIC = 0x01,
    TOUCH = 0x02,
    SS_INIT = 0x03,
    SS_ACC = 0x04,
    SS_WAIT = 0x05,
    SS_MODE = 0x06,
    SS_START_CON = 0x07,
    }


    /**
     * Enum for sub-command about audio.
     * @readonly
     * @enum {number}
     */

    declare const enum MbitMoreAudioCommand
    {
    STOP_TONE = 0x00,
    PLAY_TONE = 0x01,
    }


    /**
     * Enum for index of CoolExtension pins
     * @readonly
     * @enum {number}
     */

    declare const enum MbitMoreCoolPinIndex
    {
    IO1 = 0,
    IO2 = 1,
    IO16 = 3,
    IO13_14 = 4,
    IO15_16 = 5,
    }


    /**
     * @brief Enum for write mode of display pixels.
     */

    declare const enum MbitMoreDisplayWriteMode
    {
    LAYER = 0,
    OVER_WRITE = 1,
    }


    declare const enum MbitMorePullMode
    {
    None = 0,
    Down = 1,
    Up = 2,
    }


    declare const enum MbitMoreDataFormat
    {
    CONFIG = 0x10,
    PIN_EVENT = 0x11,
    ACTION_EVENT = 0x12,
    DATA_NUMBER = 0x13,
    DATA_TEXT = 0x14,
    }


    declare const enum MbitMoreActionEvent
    {
    BUTTON = 0x01,
    GESTURE = 0x02,
    }


    declare const enum MbitMoreButtonEvent
    {
    DOWN = 1,
    UP = 2,
    CLICK = 3,
    LONG_CLICK = 4,
    HOLD = 5,
    DOUBLE_CLICK = 6,
    }


    declare const enum MbitMoreGestureEvent
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
    SHAKE = 11,
    }


    declare const enum MbitMorePinEventType
    {
    NONE = 0,
    ON_EDGE = 1,
    ON_PULSE = 2,
    ON_TOUCH = 3,
    }


    declare const enum MbitMorePinEvent
    {
    RISE = 2,
    FALL = 3,
    PULSE_HIGH = 4,
    PULSE_LOW = 5,
    }


    /**
     * @brief Button ID in MicrobitMore
     * This number is used to memory offset in state data.
     */

    declare const enum MbitMoreButtonStateIndex
    {
    // GPIO array using [0..20]
    P0 = 24,
    P1 = 25,
    P2 = 26,
    A = 27,
    B = 28,
    LOGO = 29,
    }


    /**
     * @brief Version of this micro:bit
     * 
     */

    declare const enum MbitMoreHardwareVersion
    {
    MICROBIT_V1 = 1,
    MICROBIT_V2 = 2,
    }


    /**
     * @brief Version of protocol to use
     * 
     */

    declare const enum MbitMoreProtocol
    {
    MBIT_MORE_V2 = 2,
    }


    /**
     * @brief Communication route between Scratch and micro:bit
     * 
     */

    declare const enum MbitMoreCommunicationRoute
    {
    BLE = 0,
    SERIAL = 1,
    }


    /**
     * @brief Request type from Scratch
     * 
     */

    declare const enum ChRequest
    {
    REQ_READ = 0x01,
    REQ_WRITE = 0x10,
    REQ_WRITE_RESPONSE = 0x11,
    REQ_NOTIFY_STOP = 0x20,
    REQ_NOTIFY_START = 0x21,
    }


    /**
     * @brief Response type to Scratch
     * 
     */

    declare const enum ChResponse
    {
    RES_READ = 0x01,
    RES_WRITE = 0x11,
    RES_NOTIFY = 0x21,
    }
declare namespace MbitMore {
}

// Auto-generated. Do not edit. Really.
