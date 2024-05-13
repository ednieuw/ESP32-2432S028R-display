# ESP32-2432S028R- cheap yellow display

Porting the code from an other ESP32 project with storage, WIFI and BLE was easy.<br> 
It took many days to find the GPIO clash between the LDR analog input and the TFT-DC of the diaplay on GPIO2. 
The display frooze every minute.<br> 
At first I tried the TFT_eSPI library instead of the Adafruit_ILI9341 library that worked on other ILI-9314 displays.<br> 
The TFT_eSPI library can be used for many displays but it makes it also difficult to find and use the proper setup.<br>
In the end I opted for the ADAfruit library but code for the eSPI library can also be used.<br>
In the User_Setup.h file stored in this repository TFT_eSPI library folder the settings for the CYD are kept.

![image](https://github.com/ednieuw/ESP32-2432S028R-display/assets/12166816/b3ade2d4-9333-437e-aa29-ee790c251820)

Install the following libraries. The May 2024 versions can be found in the libraries ZIP in this repository

NimBLEDevice      // For BLE communication  https://github.com/h2zero/NimBLE-Arduino
ESPNtpClient       // https://github.com/gmag11/ESPNtpClient
AsyncTCP           // Used for webpage   https://github.com/me-no-dev/ESPAsyncWebServer
ESPAsyncWebServer> // Used for webpage   https://github.com/me-no-dev/ESPAsyncWebServer
AsyncElegantOTA    // Used for OTA
TFT_eSPI           // Graphics and font library for ILI9341 driver chip
Adafruit_ILI9341   // https://github.com/adafruit/Adafruit_ILI9341
Adafruit_GFX       // Core graphics library, with extra fonts.



This LCD module uses ESP32-WROOM-32 module as the main control, the main
control is a dual-core MCU, integrated WI-FI and Bluetooth functions, the main
frequency can reach 240MHz, 520KB SRAM, 448KB ROM, Flash size is 4MB, The
display resolution is 240x320, resistive touch. The module includes LCD display
screen, backlight control circuit, touch screen control circuit, speaker drive circuit,
photosensitive circuit and RGB-LED control circuit. TF card interface, serial interface,
temperature and humidity sensor interface (DHT11 interface) and reserved IO port
interface, this module supports development in arduino IDE, ESP IDE, Micropython
and Mixly.
![image](https://github.com/ednieuw/ESP32-2432S028R-display/assets/12166816/63aeeeb3-5563-4dcc-a6a9-111cfbe1b709)

![image](https://github.com/ednieuw/ESP32-2432S028R-display/assets/12166816/44b8648a-e5db-4035-96a7-fa402f1cd625)
