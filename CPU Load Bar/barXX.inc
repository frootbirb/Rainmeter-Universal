[CPULoad{0}]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#CPULoadSensorID#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=#CPULoadEID{0}#
HWiNFOType=CurrentValue
MaxValue=100
MinValue=0

[CPULoad{0}-1]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#CPULoadSensorID#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=#CPULoadEID{0}-1#
HWiNFOType=CurrentValue
MaxValue=100
MinValue=0

[BarBackground{0}]
Meter=Image
MeterStyle=Bar

[CPULoadBar{0}]
Meter=BAR
MeasureName=CPULoad{0}
MeterStyle=BarMeter | Right

[CPULoadBar{0}-1]
Meter=BAR
MeasureName=CPULoad{0}-1
MeterStyle=BarMeter | Left

[CPUCoreLabel{0}]
Meter=STRING
Text="CPU Core {0}"
MeterStyle=Label

[CPULoadText{0}]
Meter=STRING
MeasureName=CPULoad{0}
MeterStyle=Value | Right
Postfix="%"
Percentual=1

[CPULoadText{0}-1]
Meter=STRING
MeasureName=CPULoad{0}-1
MeterStyle=Value | Left
Postfix="%"
Percentual=1