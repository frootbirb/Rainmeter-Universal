[Variables]
BarLength=150
WheelRad=(#BarLength#/5)
OuterRingRatio=0.9

[MouseOver]
Shape=Ellipse (#Rad#+#IconSize#/2),(#Rad#+#IconSize#/2),(#Rad#+#IconSize#/2) | Fill Color 0,0,0,1 | StrokeWidth 0
MouseLeaveAction=[!HideMeterGroup Apps]

[MeterApp]
Meter=Image
Group=Apps
W=#IconSize#
H=#IconSize#
ImageTint=200,200,200
MouseOverAction=[!SetOption #CURRENTSECTION# ImageTint "255,255,255"]#I#
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageTint "200,200,200"]#I#
Hidden=1

;Big Meters

[MainMeter]
X=#BarLength#
Y=r
FontFace=#TitleFont#
FontColor=#TitleColor#
FontSize=#LargeFont#
AntiAlias=1
StringAlign=Right

[WeatherMeter]
X=(2*#BarLength#)
Y=r
FontFace=#TitleFont#
FontColor=#TitleColor#
FontSize=#MedFont#
AntiAlias=1
StringAlign=Right

[TempMeter]
X=(2*#BarLength#)
Y=r
FontFace=#FontFace#
FontColor=#RightColor#
FontSize=#MedFont#
AntiAlias=1
StringAlign=Right

[TopMeter]
X=r
Y=13r
FontFace=#FontFace#
FontColor=#LeftColor#
FontSize=#MedFont#
AntiAlias=1
StringAlign=Left

[BottomMeter]
X=r
Y=23r
FontFace=#FontFace#
FontColor=#RightColor#
FontSize=#MedFont#
AntiAlias=1
StringAlign=Left

[Pie]
X=#WheelRad#r
Y=r
W=(2*#WheelRad#)
H=(2*#WheelRad#)
StartAngle=4.712
RotationAngle=6.283
LineLength=#WheelRad#
LineColor=#BackColor#
Solid=1
AntiAlias=1

[OuterRingMeter]
X=r
Y=r
W=(2*#WheelRad#)
H=(2*#WheelRad#)
StartAngle=4.712
RotationAngle=6.283
LineLength=#WheelRad#
LineStart=(#WheelRad#*#OuterRingRatio#)
LineColor=#RightColor#
Solid=1
AntiAlias=1

[PieMeter]
X=r
Y=r
W=(2*#WheelRad#)
H=(2*#WheelRad#)
StartAngle=4.712
RotationAngle=6.283
LineLength=(#WheelRad#*#OuterRingRatio#)
LineColor=#BaseColor#
Solid=1
AntiAlias=1

;Bottom Bar Meters

[Label]
X=#BarLength#
Y=5R
FontFace=#FontFace#
FontColor=#BaseColor#
FontSize=#MedFont#
AntiAlias=1
StringAlign=center

[Bar]
X=0
Y=10R
H=3
W=(2*#BarLength#)
SolidColor=#BackColor#

[BarMeter]
X=#BarLength#
Y=r
H=3
W=#BarLength#
BarOrientation=Horizontal

[Value]
X=(2*#BarLength#)
Y=r
FontFace=#FontFace#
FontSize=#SmallFont#
AntiAlias=1
StringAlign=right

[Left]
X=0
Flip=1
StringAlign=left
BarColor=#LeftColor#
FontColor=#LeftColor#

[Right]
Flip=0
StringAlign=right
BarColor=#RightColor#
FontColor=#RightColor#