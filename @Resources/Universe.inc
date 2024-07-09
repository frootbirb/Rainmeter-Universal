[Variables]
@include=#@#Universal/sensors.inc

;Misc
Sound=#@#Universal/iii-I9.wav

;API key for OpenWeather
OpenWeatherKey=5b859569f0e33c805343dcc21073bb43

;Latitude and longitude of weather location
Latitude=43.92422691838882
Longitude=-69.9625289649043

;Buttons
SteamButton="steam://open/main"

;Style
Style=Planets
; Vaporwave C&H Planets
; Set by EverythingButton

[Style]
@include=#@#styles/#Style#.inc

[MeasureScript]
Measure=Script
ScriptFile=#@#Universal/launcher.lua
