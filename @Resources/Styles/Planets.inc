[Variables]

FontFace="Earth Orbiter Condensed"
TitleFont="Earth Orbiter Halftone Italic"

LargeFont=40
MedFont=16
SmallFont=12

; Sizes
Diameter=1000
PathWidth=0.2
AsteroidWidth=4
MercurySize=5
VenusSize=8
EarthSize=8
MoonSize=4
MarsSize=6
JupiterSize=12
SaturnSize=12
UranusSize=10
NeptuneSize=10
PlutoSize=4

; Colours
PathColor=175, 175, 175
MoonPathColor=#PathColor#
SunColor=220, 200, 100
MercuryColor=260, 220, 180
VenusColor=240, 235, 200
EarthColor=62, 85, 135
MoonColor=211, 217, 220
MarsColor=170, 90, 60
AsteroidColor=#PathColor#, 50
JupiterColor=220, 160, 130
SaturnColor=230, 200, 150
UranusColor=170, 200, 205
NeptuneColor=37, 70, 140
PlutoColor=230, 220, 210

BaseColor=#PathColor#
RightColor=#EarthColor#
LeftColor=#SunColor#
BackColor=#BaseColor#,60
TitleColor=#BaseColor#

@Include=#@#Universal/meters.inc

[TopMeter]
Y=5r

[TempMeter]
FontSize=#SmallFont#