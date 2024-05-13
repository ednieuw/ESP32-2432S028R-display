# ESP32-2432S028R- cheap yellow display
A word clock with four languages, digital and analog display. Settings can be contrlled with BLE and WIFI<br>

![image](https://github.com/ednieuw/ESP32-2432S028R-display/assets/12166816/fbd90105-656f-4b38-a5d5-b3047d9a4e4c)

Porting the code from an other ESP32 project with storage, WIFI and BLE was easy.<br> 
It took many days to find the GPIO clash between the LDR analog input and the TFT-DC of the diaplay on GPIO2. 
The display frooze every minute.<br> 
At first I tried the TFT_eSPI library instead of the Adafruit_ILI9341 library that worked on other ILI-9314 displays.<br> 
The TFT_eSPI library can be used for many displays but it makes it also difficult to find and use the proper setup.<br>
In the end I opted for the ADAfruit library but code for the eSPI library can also be used.<br>
In the User_Setup.h file stored in this repository TFT_eSPI library folder the settings for the CYD are kept.

![image](https://github.com/ednieuw/ESP32-2432S028R-display/assets/12166816/b3ade2d4-9333-437e-aa29-ee790c251820)

Install the following libraries. The May 2024 versions can be found in the libraries ZIP in this repository
<pre>
NimBLEDevice      // For BLE communication  https://github.com/h2zero/NimBLE-Arduino
ESPNtpClient       // https://github.com/gmag11/ESPNtpClient
AsyncTCP           // Used for webpage   https://github.com/me-no-dev/ESPAsyncWebServer
ESPAsyncWebServer> // Used for webpage   https://github.com/me-no-dev/ESPAsyncWebServer
AsyncElegantOTA    // Used for OTA
TFT_eSPI           // Graphics and font library for ILI9341 driver chip
Adafruit_ILI9341   // https://github.com/adafruit/Adafruit_ILI9341
Adafruit_GFX       // Core graphics library, with extra fonts.
</pre>
Control of the clock et cetera here: https://github.com/ednieuw/Arduino-ESP32-Nano-Wordclock
