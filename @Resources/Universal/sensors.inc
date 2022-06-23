[Variables]
@include=HWiNFO.inc

CPULoadSensorID=0xf0000300
CPULoadEID1=0x7000000
CPULoadEID1-1=0x7000001
CPULoadEID2=0x7000002
CPULoadEID2-1=0x7000003
CPULoadEID3=0x7000004
CPULoadEID3-1=0x7000005
CPULoadEID4=0x7000006
CPULoadEID4-1=0x7000007
CPULoadEID5=0x7000008
CPULoadEID5-1=0x7000009
CPULoadEID6=0x700000a
CPULoadEID6-1=0x700000b
CPULoadEID7=0x700000c
CPULoadEID7-1=0x700000d
CPULoadEID8=0x700000e
CPULoadEID8-1=0x700000f

;Drives
driveSSD=C:

;Max Bandwidth
NetMax=130000000

; ------- Time ------- ;

[Time]
Measure=Time
Format=%H:%M

[DayOfWeek]
Measure=Time
Format=%A

[Date]
Measure=Time
Format=%d/%m/%Y

; ------- CPU ------- ;

[CPULoad]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#CPULoadSensorID#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x7000011
HWiNFOType=CurrentValue
MaxValue=100
MinValue=0

[CPUTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=0xf0000501
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x1000000
HWiNFOType=CurrentValue
MaxValue=100
MinValue=0

[CPUFanSpeed]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=0xf0008665
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x3000000
HWiNFOType=CurrentValue
MaxValue=3250
MinValue=0

[CPUThread]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=#CPULoadSensorID#
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x7000010
HWiNFOType=CurrentValue
MaxValue=100
MinValue=0

; ------- GPU ------- ;

[GPULoad]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=0xe0002000
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x7000000
HWiNFOType=CurrentValue
MaxValue=100
MinValue=0

[GPUTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=0xe0002000
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x1000000
HWiNFOType=CurrentValue
MaxValue=100
MinValue=0

[GPUFanSpeed]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=0xe0002000
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x3000000
HWiNFOType=CurrentValue
MaxValue=3000
MinValue=0

[GPUFanSpeed%]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=0xe0002000
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x8000000
HWiNFOType=CurrentValue
MaxValue=100
MinValue=0

[GPUMemoryUsage]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=0xe0002000
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x7000008
HWiNFOType=CurrentValue
MaxValue=100
MinValue=0

; ------- Network ------- ;

[NetTotal]
Measure=NetTotal
Substitute="0.0":"0"
UseBits=1
MaxValue=#NetMax#
MinValue=0

[NetDownload]
Measure=NetIn
Substitute="0.0":"0"
UseBits=1
MaxValue=#NetMax#
MinValue=0

[NetUpload]
Measure=NetOut
Substitute="0.0":"0"
UseBits=1
MaxValue=#NetMax#
MinValue=0

[NetTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=0xf0ec0502
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x1000002
HWiNFOType=CurrentValue
MaxValue=100
MinValue=0

; ------- Memory ------- ;

[Memory]
Measure=Memory

[RAMTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=0xf3000002
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x1000000
HWiNFOType=CurrentValue
MaxValue=100
MinValue=0

[RAM]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=0xf0000301
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x8000005
HWiNFOType=CurrentValue
MaxValue=100
MinValue=0

[SWAP]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=0xf0000301
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x8000002
HWiNFOType=CurrentValue
MaxValue=100
MinValue=0

; ------- SSD ------- ;

[SSD]
Measure=FreeDiskSpace
Drive=#driveSSD#
InvertMeasure=1

[SSDTemp]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=0xf0000100
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x1000000
HWiNFOType=CurrentValue
MaxValue=100
MinValue=0

[SSDRead]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=0xf0000101
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x7000000
HWiNFOType=CurrentValue
MaxValue=100
MinValue=0

[SSDWrite]
Measure=Plugin
Plugin=HWiNFO.dll
HWiNFOSensorId=0xf0000101
HWiNFOSensorInstance=0x0
HWiNFOEntryId=0x7000001
HWiNFOType=CurrentValue
MaxValue=100
MinValue=0