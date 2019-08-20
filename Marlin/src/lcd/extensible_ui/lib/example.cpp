/***************
 * example.cpp *
 ***************/

/****************************************************************************
 *   Written By Marcio Teixeira 2018 - Aleph Objects, Inc.                  *
 *                                                                          *
 *   This program is free software: you can redistribute it and/or modify   *
 *   it under the terms of the GNU General Public License as published by   *
 *   the Free Software Foundation, either version 3 of the License, or      *
 *   (at your option) any later version.                                    *
 *                                                                          *
 *   This program is distributed in the hope that it will be useful,        *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of         *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the          *
 *   GNU General Public License for more details.                           *
 *                                                                          *
 *   To view a copy of the GNU General Public License, go to the following  *
 *   location: <http://www.gnu.org/licenses/>.                              *
 ****************************************************************************/

#include "../../../inc/MarlinConfigPre.h"

#if BOTH(EXTUI_EXAMPLE, EXTENSIBLE_UI)

#include "../ui_api.h"

#include <lvgl.h>


// To implement a new UI, complete the functions below and
// read or update Marlin's state using the methods in the
// ExtUI methods in "../ui_api.h"
//
// Although it may be possible to access other state
// variables from Marlin, using the API here possibly
// helps ensure future compatibility.

namespace ExtUI {
  void onStartup() {
    // Initialize or re-initialize the LCD
    #if PIN_EXISTS(LCD_BACKLIGHT) // Avoid White flash on init
        OUT_WRITE(LCD_BACKLIGHT_PIN, LOW);
    #endif

    #if PIN_EXISTS(LCD_RESET)
        OUT_WRITE(LCD_RESET_PIN, LOW); // perform a clean hardware reset
        _delay_ms(5);
        OUT_WRITE(LCD_RESET_PIN, HIGH);
        _delay_ms(5); // delay to allow the display to initialize
    #endif

    #if PIN_EXISTS(LCD_BACKLIGHT) // Enable LCD backlight, late for TFT
        OUT_WRITE(LCD_BACKLIGHT_PIN, HIGH);
    #endif

    // TODO: CONFIGURER LE CONSTRAST SI BESOIN

    lv_init();

//    /******** 1ER TEST => HELLO WORLD *********/
//    /* Get the current screen */
//    lv_obj_t * scr = lv_disp_get_scr_act(NULL);
//    /* Create a Label on the currently active screen */
//    lv_obj_t * label1 =  lv_label_create(scr, NULL);
//    /* Modify the Label's text */
//    lv_label_set_text(label1, "Hello world!");
//    /* Align the Label to the center
//     * NULL means align on parent (which is the screen now)
//     * 0, 0 at the end means an x, y offset after alignment */
//    lv_obj_align(label1, NULL, LV_ALIGN_CENTER, 0, 0);
  }

  void onIdle() {
      millis_t ms = millis();
      lv_task_handler();
  }

  void onPrinterKilled(PGM_P const msg) {}
  void onMediaInserted() {};
  void onMediaError() {};
  void onMediaRemoved() {};
  void onPlayTone(const uint16_t frequency, const uint16_t duration) {}
  void onPrintTimerStarted() {}
  void onPrintTimerPaused() {}
  void onPrintTimerStopped() {}
  void onFilamentRunout(const extruder_t extruder) {}
  void onUserConfirmRequired(const char * const msg) {}
  void onStatusChanged(const char * const msg) {}
  void onFactoryReset() {}
  void onMeshUpdate(const uint8_t xpos, const uint8_t ypos, const float zval) {}

  void onStoreSettings(char *buff) {
    // This is called when saving to EEPROM (i.e. M500). If the ExtUI needs
    // permanent data to be stored, it can write up to eeprom_data_size bytes
    // into buff.

    // Example:
    //  static_assert(sizeof(myDataStruct) <= ExtUI::eeprom_data_size);
    //  memcpy(buff, &myDataStruct, sizeof(myDataStruct));
  }

  void onLoadSettings(const char *buff) {
    // This is called while loading settings from EEPROM. If the ExtUI
    // needs to retrieve data, it should copy up to eeprom_data_size bytes
    // from buff

    // Example:
    //  static_assert(sizeof(myDataStruct) <= ExtUI::eeprom_data_size);
    //  memcpy(&myDataStruct, buff, sizeof(myDataStruct));
  }

  void onConfigurationStoreWritten(bool success) {
    // This is called after the entire EEPROM has been written,
    // whether successful or not.
  }

  void onConfigurationStoreRead(bool success) {
    // This is called after the entire EEPROM has been read,
    // whether successful or not.
  }
}

#endif // EXTUI_EXAMPLE && EXTENSIBLE_UI
