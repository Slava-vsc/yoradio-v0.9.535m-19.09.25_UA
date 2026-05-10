#ifndef _my_theme_h
#define _my_theme_h

/*
    Theming of color displays
    DSP_ST7735, DSP_ST7789, DSP_ILI9341, DSP_GC9106, DSP_ILI9225, DSP_ST7789_240
    ***********************************************************************
    *    !!! This file must be in the root directory of the sketch !!!    *
    ***********************************************************************
    Uncomment (remove double slash //) from desired line to apply color
*/
#define ENABLE_THEME
#ifdef  ENABLE_THEME

/*---------------------------------------------------------------------------------------------*/
/*      | COLORS             |   values (0-255)  |                                             */
/*      | color name         |    R    G    B    |                                             */
/*---------------------------------------------------------------------------------------------*/
#define COLOR_BACKGROUND		  0,   0,   0	 /*  загальний фон                             */
#define COLOR_STATION_NAME		255, 220,   0    /*  колір шрифту назви станції                */
#define COLOR_STATION_BG          0,   0,  40    /*  фон рядка з назвою станції                */
#define COLOR_STATION_FILL      255, 255,   0
#define COLOR_SNG_TITLE_1       150, 255, 150    /*  колір шрифту з ім'ям виконавця            */
#define COLOR_SNG_TITLE_2       240, 240, 150    /*  колір шрифту з назвою пісні               */
#define COLOR_WEATHER			  0, 255,   0	 /*  колір шрифту погоди				       */
#define COLOR_VU_MAX			255,  14,  14	 /*  колір максимуму VU-метра "вогняна цегла"  */
#define COLOR_VU_MID            255, 255,   0	 /*  колір середини VU-метра "жовтаий"		   */
#define COLOR_VU_MIN             44, 212,  32	 /*  колір початку VU-метра "Зелений"          */
#define COLOR_CLOCK             210, 210, 100    /*  колір шрифту годинника                    */
#define COLOR_CLOCK_BG            5,   5,   5    /*  колір фону годинника                      */
#define COLOR_SECONDS			240, 240, 150    /*  колір шрифту секунд                       */
#define COLOR_NAMEDAY           231, 211,  90	 /*  колір шрифту імен для іменин              */
#define COLOR_DAY_OF_W          180, 180, 180    /*  колір шрифту дня тижня                    */
#define COLOR_DATE              200, 200, 200    /*  колір шрифту дати                         */
#define COLOR_BUFFER			 20,  20, 255    /*  колір буферна лінія                       */
#define COLOR_IP			    180, 180, 180    /*  колір шрифту IP-адреси                    */
#define COLOR_RSSI                0, 255,   0    /*  колір шрифту rssi                         */
#define COLOR_CH                  0, 255,   0    /*  колір шрифту CH                           */
#define COLOR_VOLUME_VALUE		  0, 250,   0    /*  колір піктограми рівня гучності           */
#define COLOR_VOLBAR_OUT		 50, 200,  50	 /*  колір рамки смуги рівня гучності          */
#define COLOR_VOLBAR_IN			200,  50,  50	 /*  колір смуги рівня гучності                */
#define COLOR_DIGITS			100, 100, 255	 /*  колір шрифту рівня гучності у вікні       */
#define COLOR_DIVIDER			200, 200,   0	 /*  колір смужкі назви станції                */
#define COLOR_BITRATE           255, 200,   0    /*  колір бітрейту                            */
#define COLOR_HEAP              255,   0,   0    /*  колір смуги заповненості буфера           */
#define COLOR_CPU               255, 220,   0

#define COLOR_PL_CURRENT        255, 255, 150    /*  playlist current item      "Yellow"       */
#define COLOR_PL_CURRENT_BG      30,  30,  50    /*  playlist current item background          */
#define COLOR_PL_CURRENT_FILL    60,  60,  60    /*  playlist current item fill background     */
#define COLOR_PLAYLIST_0        200, 200, 200    /*  playlist string 0                         */
#define COLOR_PLAYLIST_1        175, 175, 175    /*  playlist string 1                         */
#define COLOR_PLAYLIST_2        150, 150, 150    /*  playlist string 2                         */
#define COLOR_PLAYLIST_3        120, 120, 120    /*  playlist string 3                         */
#define COLOR_PLAYLIST_4         70,  70,  70    /*  playlist string 4                         */

#endif  /* #ifdef  ENABLE_THEME */
#endif  /* #define _my_theme_h  */
