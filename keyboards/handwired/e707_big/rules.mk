# This file intentionally left blank
MCU = STM32F411

BOOTMAGIC_ENABLE = no       # Enable Bootmagic Lite
MOUSEKEY_ENABLE = no	# Mouse keys
EXTRAKEY_ENABLE = no	# Audio control and System control
CONSOLE_ENABLE = no	# Console for debug
COMMAND_ENABLE = no    # Commands for debug and configuration
NKRO_ENABLE = no            # Enable N-Key Rollover

RGB_MATRIX_ENABLE = yes
RGB_MATRIX_DRIVER = IS31FL3737

BOOTLOADER = stm32-dfu
