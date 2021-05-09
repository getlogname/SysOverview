; You must fill in the HWiNFO infos for each of your components like explained below, other variable names should be self-explanatory.
; - Launch HWiNFOSharedMemoryViewer.exe located in X:\Users\<UserName>\Documents\Rainmeter\Skins\SysOverview\@Resource
; - Select the sensor you want to monitor and replace the values below with: Sensor Details ID, Instance and the Entry Details ID for your system.

[Rainmeter]
Update=500
AccurateText=1
DynamicWindowSize=1

[Variables]
; ------------------------ CPU ---------------------------------------
; Max histogram value.
CPUMaxGraphRPM=2000
CPUMaxGraphTemp=100
; HWiNFO
CPULoadSensorId=0xf0000300
CPULoadSensorInstance=0x0
CPULoadEntryId=0x700000d
CPURPMSensorId=0xf7067970
CPURPMSensorInstance=0x0
CPURPMEntryId=0x3000001
CPUTempSensorId=0xf0000501
CPUTempSensorInstance=0x0
CPUTempEntryId=0x1000000

; ------------------------ RAM & SWAP --------------------------------
RAMLoadSensorId=0xf0000301
RAMLoadSensorInstance=0x0
RAMLoadEntryId=0x8000005
RAMClockSensorId=0xf0000301
RAMClockSensorInstance=0x1
RAMClockEntryId=0x6000000
SWAPUsageSensorId=0xf0000301
SWAPUsageSensorInstance=0x0
SWAPUsageEntryId=0x8000000

; ------------------------ GPU ---------------------------------------
GPUMaxGraphRPM=4000
GPUMaxGraphTemp=100
GPULoadSensorId=0xe0002000
GPULoadSensorInstance=0x0
GPULoadEntryId=0x7000000
GPURPMSensorId=0xe0002000
GPURPMSensorInstance=0x0
GPURPMEntryId=0x3000000
GPUTempSensorId=0xe0002000
GPUTempSensorInstance=0x0
GPUTempEntryId=0x1000000

; ------------------------ VRAM ---------------------------------------
VRAMTempSensorId=0xe0001800
VRAMTempSensorInstance=0x0
VRAMTempEntryId=0x1000005

; ------------------------ NETWORK ------------------------------------
NetDownSensorId=0xf000ea00
NetDownSensorInstance=0x1
NetDownEntryId=0x8000002
NetUpSensorId=0xf000ea00
NetUpSensorInstance=0x1
NetUpEntryId=0x8000003

; ------------------------ DRIVES -------------------------------------
D1=C:
D1SensorId=0xf0000101
D1SensorInstance=0x2
D1EntryId=0x7000002
D2=D:
D2SensorId=0xf0000101
D2SensorInstance=0x0
D2EntryId=0x7000002
D3=E:
D3SensorId=0xf0000101
D3SensorInstance=0x1
D3EntryId=0x7000002
D4=T:

; ------------------------ COLORS -------------------------------------
BackgroundColor=29, 30, 32, 255
NameColor=106, 106, 106, 255
ShadowColor=101, 101, 101, 153
Color1=51, 116, 43, 255
Color2=145, 154, 38, 255
Color3=230, 76, 60, 255
DrivesColor=45, 45, 48, 255
DrivesLightColor=61, 61, 64, 255

; ------------------------ FONTS --------------------------------------
FontFace=Lato
NameSize=13
TitleSize=17
TitleTypeSize=14
SubtitleSize=10
SubtitleTypeSize=8
DriveLetterSize=12

; ------------------------ GRID & SIZES -------------------------------
Width=300
Padding=10
InternalPadding=15
WindowsTaskBarHeight=40
; Meters height is equal to (screen height / rows)
Rows=6
; Value of AverageSize in histograms, higher value will make the graph smoother but less reactive to quick changes.
SmoothGraph=4

; Used by skins.
Height=((#SCREENAREAHEIGHT# - #WindowsTaskBarHeight# - #Padding# - (#Padding# * #Rows#)) / #Rows#)
TotalWidth=(#Width# + #Padding#)
Center=((#Width# + #Padding# * 2) / 2)
TitleX=(#Padding# + #InternalPadding# + #NameSize# + #InternalPadding#)
SubtitleX=(#TitleX# + #TitleSize# + #InternalPadding#)

; ------------------------ STYLES -------------------------------------
[Color1Style]
FontColor=#Color1#

[Color2Style]
FontColor=#Color2#

[Color3Style]
FontColor=#Color3#

[GeneralStyle]
AntiAlias=1

[FontStyle]
FontFace=#FontFace#
StringAlign=center

[NameStyle]
FontColor=#NameColor#
FontSize=#NameSize#
StringAlign=center
Shadow= 0 | 0 | 2 | #ShadowColor#

[TitleStyle]
FontSize=#TitleSize#
FontWeight=100

[SubtitleStyle]
FontSize=#SubtitleSize#
FontWeight=100

[DriveLetterStyle]
FontSize=#DriveLetterSize#
FontColor=#NameColor#
StringAlign=left

[GraphStyle]
LineColor=#Color1#
LineColor2=#Color2#
LineColor3=#Color3#
W=#Width#
H=(#Height# - #SubtitleX# - #Padding#)
X=#Padding#
; This must be adjusted each time a size setting is adjusted.
Y=4R