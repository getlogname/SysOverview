<!--; You must fill in the HWiNFO infos for each of your components like explained below, other variable names should be self-explanatory -->
<!--; - Launch HWiNFOSharedMemoryViewer.exe located in X:\Users\<UserName>\Documents\Rainmeter\Skins\SysOverview\@Resources-->
<!--; - Select the sensor you want to monitor and replace the values below with the Sensor Details ID and Instance and also the Entry Details ID for your system-->

[Rainmeter]
Update=500
AccurateText=1

[Variables]
; ------------------------ CPU ---------------------------------------
; Max histogram y value.
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
; @TODO: Change names
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
GPULoadSensorId=0xe0001800
GPULoadSensorInstance=0x0
GPULoadEntryId=0x7000000
GPURPMSensorId=0xe0001800
GPURPMSensorInstance=0x0
GPURPMEntryId=0x3000000
GPUTempSensorId=0xe0001800
GPUTempSensorInstance=0x0
GPUTempEntryId=0x100000a

; ------------------------ VRAM ---------------------------------------
VRAMTempSensorId=0xe0001800
VRAMTempSensorInstance=0x0
VRAMTempEntryId=0x1000005

; ------------------------ COLORS -------------------------------------
BackgroundColor=29, 30, 32, 255
NameColor=177, 173, 173, 255
Color1=51, 116, 43, 255
Color2=145, 154, 38, 255
Color3=230, 76, 60, 255

; ------------------------ FONTS --------------------------------------
FontFace=Lato
NameSize=13
TitleSize=17
TitleTypeSize=14
SubtitleSize=10
SubtitleTypeSize=8

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

[TitleStyle]
FontSize=#TitleSize#
FontWeight=100

[SubtitleStyle]
FontSize=#SubtitleSize#
FontWeight=100

[GraphStyle]
LineColor=#Color1#
LineColor2=#Color2#
LineColor3=#Color3#
W=#Width#
H=(#Height# - #SubtitleX# - #Padding#)
X=#Padding#
; This must be adjusted each time a size setting is adjusted.
Y=4R