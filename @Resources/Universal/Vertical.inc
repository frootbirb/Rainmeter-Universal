[SmallText]
Meter=STRING
MeasureName=#OuterRingMeasure#
MeterStyle=TempMeter
PostFix="°C"
Percentual=1

[PieText]
Meter=STRING
MeasureName=#PieMeasure#
MeterStyle=MainMeter
PostFix="%"
Percentual=1

[BGR]
Meter=Roundline
MeterStyle=Pie

[PieMeasure]
Meter=Roundline
MeasureName=#PieMeasure#
MeterStyle=PieMeter

[OuterRing]
Meter=Roundline
MeasureName=#OuterRingMeasure#
MeterStyle=OuterRingMeter

[BGB]
Meter=Image
MeterStyle=Bar

[RightBar]
Meter=BAR
MeasureName=#RBarMeasure#
MeterStyle=BarMeter | Right

[LeftBar]
Meter=BAR
MeasureName=#LBarMeasure#
MeterStyle=BarMeter | Left

[MeterLabel]
Meter=STRING
Text=#Label#
MeterStyle=Label

[RightText]
Meter=STRING
MeasureName=#RBarMeasure#
MeterStyle=Value | Right

[LeftText]
MeasureName=#LBarMeasure#
Meter=STRING
MeterStyle=Value | Left