#pragma once

#include "quantum.h"

#ifdef KEYBOARD_cannonkeys_satisfaction75_prototype
    #include "prototype.h"
#else
    #include "rev1.h"
#endif

/* screen off after this many milliseconds */
#define ScreenOffInterval 60000 /* milliseconds */

typedef union {
    uint8_t raw;
    struct {
        bool    enable :1;
        bool    breathing : 1;
        uint8_t level  :6;
    };
} backlight_config_t;

// Start these at the USER code range in VIA
enum my_keycodes {
  ENC_PRESS = 0x5F80,
  CLOCK_SET,
  OLED_TOGG
};

enum s75_keyboard_value_id {
  id_encoder_modes = 0x80,
  id_oled_default_mode,
  id_encoder_custom,
  id_oled_mode
};

enum encoder_modes {
  ENC_MODE_VOLUME,
  ENC_MODE_MEDIA,
  ENC_MODE_SCROLL,
  ENC_MODE_BRIGHTNESS,
  ENC_MODE_BACKLIGHT,
  ENC_MODE_CUSTOM0,
  ENC_MODE_CUSTOM1,
  ENC_MODE_CUSTOM2,
  _NUM_ENCODER_MODES,
  ENC_MODE_CLOCK_SET // This shouldn't be included in the default modes, so we put it after NUM_ENCODER_MODES
};

enum oled_modes {
  OLED_DEFAULT,
  OLED_TIME,
  OLED_OFF,
  _NUM_OLED_MODES
};


// Keyboard Information
extern volatile uint8_t led_numlock;
extern volatile uint8_t led_capslock;
extern volatile uint8_t led_scrolllock;
extern uint8_t layer;

// OLED Behavior
extern uint16_t last_flush;
extern bool queue_for_send;
extern uint8_t oled_mode;
extern bool oled_sleeping;

// Encoder Behavior
extern uint8_t encoder_value;
extern uint8_t encoder_mode;
extern uint8_t enabled_encoder_modes;

// RTC
extern RTCDateTime last_timespec;
extern uint16_t last_minute;

// RTC Configuration
extern bool clock_set_mode;
extern uint8_t time_config_idx;
extern int8_t hour_config;
extern int16_t minute_config;
extern int8_t year_config;
extern int8_t month_config;
extern int8_t day_config;
extern uint8_t previous_encoder_mode;

// Backlighting
extern backlight_config_t kb_backlight_config;
extern bool kb_backlight_breathing;

void pre_encoder_mode_change(void);
void post_encoder_mode_change(void);
void change_encoder_mode(bool negative);
uint16_t handle_encoder_clockwise(void);
uint16_t handle_encoder_ccw(void);
uint16_t handle_encoder_press(void);

void update_time_config(int8_t increment);

__attribute__ ((weak))
void draw_ui(void);
void draw_default(void);
void draw_clock(void);

void backlight_init_ports(void);
void backlight_set(uint8_t level);
bool is_breathing(void);
void breathing_enable(void);
void breathing_disable(void);
void load_custom_config(void);
void save_backlight_config_to_eeprom(void);
