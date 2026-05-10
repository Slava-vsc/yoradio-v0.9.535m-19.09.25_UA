#ifndef myoptions_h
#define myoptions_h

//#ifndef ARDUINO_ESP32S3_DEV
//#define ARDUINO_ESP32S3_DEV
//#endif

/****************************************************************************************************
ESP32-S3 + ST7789 + I2S + Encoder1 + Encoder2 + IR + RTC + Mute.
****************************************************************************************************/

/* !!! Attention !!! */
/* This configuration depends on some additional libraries. Please install them using the library manager: */
/* Adafruit GFX Library, Adafruit ST7735 and ST7789, OneButton, RTCLib, IRremoteESP8266  Library */

/******************************************/

#define L10N_LANGUAGE RU

/******************************************/

/* Дисплей */
#define DSP_MODEL			DSP_ST7789  /* Display VSPI mode */ 
//#define TFT_MISO			13		/* 13 Display Pin "MISO" */
#define TFT_SCK				12		/* 12 Display Pin "SCL" */
#define TFT_MOSI			11		/* 11 Display Pin "SDA" */
#define TFT_RST				10		/* 14 Display Pin "RESET" */
#define TFT_DC				8		/*  9 Display Pin "DC" */
#define TFT_CS				17		/* 10 Display Pin "CS" */
#define BRIGHTNESS_PIN		15		/*  BL	 */
#define DEF_SPI_FREQ        80000000UL    /* Частота SPI для дисплея (80 МГц) */

/******************************************/

/*  I2S DAC    */
#define VS1053_CS		255
#define I2S_DOUT		38		// DIN connection. Should be set to 255 if the board is not used
#define I2S_BCLK		40		// BCLK Bit clock
#define I2S_LRC			39		// WSEL Left Right Clock
//#define I2S_MCLK		41		// MCLK - Master Clock

/* **************************************** */

//  ENCODERs 1
#define ENC_BTNR             48      //  Правое вращение энкодера-1 (S2, CLK)
#define ENC_BTNL             47      //  Левое вращение энкодера-2 (S1, DT)
#define ENC_BTNB             0       //  Кнопка энкодера-2 (Key, SW)
#define ENC_INTERNALPULLUP   false   //  Включение програмной подтяжки. По умолчанию "true"

//  ENCODERs 2
#define ENC2_BTNR            16      //  Правое вращение энкодера-2 (S2, CLK)
#define ENC2_BTNL            7      //  Левое вращение энкодера-2 (S1, DT)
#define ENC2_BTNB            6       //  Кнопка энкодера-2 (Key, SW)
#define ENC2_INTERNALPULLUP  false    //  Включение програмной подтяжки. По умолчанию "true"

// **************************************************************************

//  SDCARD
//#define SDC_CS		6		//  SDCARD CS pin
//#define SD_MOSI		11		//  SDCARD MOSI pin
//#define SD_MISO		13		//  SDCARD MISO pin
//#define SD_SCK		12		//  SDCARD SCK pin
//#define SDSPISPEED  4000000 //  4MHz - Slower speed to prevent display flicker on shared SPI bus

// **************************************************************************

#define RTC_MODULE			DS3231
#define RTC_SDA			4
#define RTC_SCL			5

// **************************************************************************

/*  IR control  */
#define IR_PIN                1
#define IR_TIMEOUT     80    //  see kTimeout description in IRremoteESP8266 example
                               //  https://github.com/crankyoldgit/IRremoteESP8266/blob/master/examples/IRrecvDumpV2/IRrecvDumpV2.ino
// **************************************************************************

/*  Режим MUTE  */
#define MUTE_PIN     42     /*  Вывод XSMT (снять перемычку у XSMT)  */
#define MUTE_VAL     LOW    /*	Значение уровня на ноге mute_pin, когда плеер остановлен. HIGH-высокий уровень (3,3В); LOW-низкий уровень (0В). */
//#ifndef MUTE_LOCK
//#define MUTE_LOCK      false  // for vs1053 Shield rev2 - lock MUTE_PIN to !MUTE_VAL
//#endif

// **************************************************************************

//#define WAKE_PIN             2     //  Кнопка энкодера-1

// **************************************************************************

/* Погода */
//#define HIDE_WEATHER
#define GRND_HEIGHT      130     // Высота местности над уровнем моря в метрах для поправки в давление

// **************************************************************************

/*  Аккумулятор */
#define BATTERY_OFF				// Отключить показатель уровня заряда и напряжения аккумулятора
//#define HIDE_VOLT                   /* Скрыть только показатель напряжения аккумулятора */
//#define ADC_PIN          1      /* (или GPIO2) для считывания с делителя напряжения аккумулятора.  По умолчанию GPIO1. */
//#define R1                  38.5     /* Номинал резистора, подключенного к плюсу батареи, в КОм или Ом. По умолчанию 50. */
//#define R2                  99.2     /* Номинал резистора, подключенного к минусу, в КОм  или Ом. По умолчанию 100. */
//#define DELTA_BAT    0.056    /* Величина коррекции показаний напряжения батареи в вольтах */

// **************************************************************************

#define DOWN_LEVEL       70     /* lowest level brightness (from 0 to 255) По умолчанию "2". (МОД Maleksm) */
#define DOWN_INTERVAL    30     /* interval for BacklightDown in sec (60 sec = 1 min) По умолчанию "60". (МОД Maleksm) */

// **************************************************************************

/*  Other settings.  */
//#define BITRATE_FULL		true	// true - Включение "картинки" с битрейтом
//#define BOOMBOX_STYLE				// Волюметр в BOOMBOX стиле
//#define CLOCKFONT_MONO	true	// Откл/Вкл моношрифтов для часов TFT дисплеев. По умолчанию "true"
//#define CLOCKFONT  VT_DIGI_OLD	// Włącz oryginalną czcionkę zegara siedmiosegmentowego
//#define DIRECT_CHANNEL_CHANGE		// При выборе из списка станций вам не нужно нажимать на ручку, канал автоматически изменится при выходе. (Autor: Zsigmond Becskehazi)
//#define DOWN_LEVEL		2		// lowest level brightness (from 0 to 255) По умолчанию "2". (МОД Maleksm)
//#define DOWN_INTERVAL		60		// interval for BacklightDown in sec (60 sec = 1 min) По умолчанию "60". (МОД Maleksm)
//#define DSP_INVERT_TITLE	false	// Инверсные цвета названия станции (заголовок дисплея). По умолчанию "true"
//#define HIDE_DATE					// Скрыть дату. (МОД nva_lw)
//#define HIDE_HEAPBAR				// Скрыть отображение полоски буффера
//#define HIDE_IP					// Скрыть IP
//#define HIDE_RSSI					// Скрыть RSSI	
//#define HIDE_SECONDS				// Скрыть отображение секунд
//#define HIDE_VOL_CONTROL			// Убрать полностью управление громкостью с энкодера, только пульт и вэб
#define HIDE_VOLBAR						// Убрать полоску громкости
//#define HIDE_VOLPAGE					// Скрыть страницу "Громкость", ориентируемся по прогрессбару громкости.
//#define LED_BUILTIN  2            	//  Onboard LED Pin
//#define LED_BUILTIN_S3    48      	// S3-onboard RGB led pin
#define USE_BUILTIN_LED   false   	// Use S3-onboard RGB led
//#define LED_INVERT      false     	//  Invert Onboard LED?
#define NAME_STRIM					// Показывать имя станции из стрима. (МОД Maleksm)
//#define PLAYER_FORCE_MONO false   	//  mono option on boot - false stereo, true mono. По умолчанию "false"
//#define ROTATE_90   false				//  Optional 90 degree rotation for square displays. По умолчанию "false"
//#define RSSI_DIGIT        true   		// Графический/цифровой значок Wi-Fi. (false - лесенка (по умолчанию), true - цифирьки)
//#define STATIONS_LIST_RETURN_TIME 2	// Время возврата на главный экран из списка станций (секунды)
//#define TFT_ROTATE      0				//  Display rotation. 0 - 0, 1 - 90, 2 - 180, 3 - 270 degrees
#define VU_PEAK						// Отображать пиковые значения волюметра.

// **************************************************************************

/* Arduino OTA Support */
// #define USE_OTA true                    /* Enable OTA updates from Arduino IDE */
// #define OTA_PASS "myotapassword12345"   /* OTA password for secure updates */

// **************************************************************************

/* HTTP Authentication */
// #define HTTP_USER ""               /* HTTP basic authentication username */
// #define HTTP_PASS ""           /* HTTP basic authentication password */

// **************************************************************************

#endif
