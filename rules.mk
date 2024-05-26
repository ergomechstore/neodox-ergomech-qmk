# MCU name
MCU = RP2040

# Bootloader selection
BOOTLOADER = rp2040
BOARD = GENERIC_RP_RP2040


# Build Options
#   change yes to no to disable
#
BOOTMAGIC_ENABLE = yes       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = yes       # Mouse keys
EXTRAKEY_ENABLE = yes       # Audio control and System control
CONSOLE_ENABLE = no         # Console for debug
COMMAND_ENABLE = yes        # Commands for debug and configuration
NKRO_ENABLE = yes            # Enable N-Key Rollover
BACKLIGHT_ENABLE = no       # Enable keyboard backlight functionality
AUDIO_ENABLE = no           # Audio output
RGBLIGHT_ENABLE = yes       # Enable WS2812 RGB underlight.

SPLIT_KEYBOARD = yes


# Disable unsupported hardware
AUDIO_SUPPORTED = no

# Build Options
#   change yes to no to disable
#

VIA_ENABLE = yes
SERIAL_DRIVER = vendor
WS2812_DRIVER = vendor

OLED_ENABLE = yes
