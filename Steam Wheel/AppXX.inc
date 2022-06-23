[AppNum{0}]
Measure=String
String=[&MeasureScript:Get({0})]
DynamicVariables=1
UpdateDivider=-1

[Parser{0}]
Measure=WebParser
URL=https://store.steampowered.com/app/[&AppNum{0}]
RegExp=(?siU)apphub_AppIcon"><img src="(.*)"
Download=1
UpdateDivider=-1
StringIndex=1
DynamicVariables=1

[MeterApp{0}]
Meter=Image
MeterStyle=MeterApp
MeasureName=Parser{0}
LeftMouseUpAction=[steam://run/[&AppNum{0}]][PLAY #Sound#]