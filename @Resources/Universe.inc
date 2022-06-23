[Variables]
@include=#@#Universal/sensors.inc

;Misc
Sound=#@#Universal/iii-I9.wav

;Weather in Sherborn
WeatherCode=USMA0373
WeatherUnit=F

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
