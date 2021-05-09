# SysOverview Widgets

A Rainmeter skin to monitor PC system resources usage.

Actually very poorly written, maybe I'll update when I have some time.

Meters:

- CPU: load, fan RPM, temp.
- RAM: load, clock, SWAP usage.
- GPU: load, fan RPM, temp.
- VRAM: junction temp.
- NETWORK: download and upload.
- DRIVES: usage + real time usage & also uptime in the bottom right.



Screenshot:

![](%40Resources/img/SysOverview.png)



Requirements:

- Rainmeter 4.3.1+
- HWiNFO 6.42+, make sure Shared Memory Support & Auto Start are enabled.
- HWiNFO plugin



Usage:

Use the included HWiNFOSharedMemoryViewer.exe to get sensors for your system and edit \@Resources\Setting.inc to your preferences:

1. Launch HWiNFOSHaredMemoryViewer.exe (located somewhere like X:\Users\<UserName>\Documents\Rainmeter\Skins\SysOverview\@Resource) and open Settings.inc with a text editor.
Now you need to edit the values in Settings.inc to adjust them to your system as every configuration will have different ones. I'll show you how I setup mine but you will need to adjust the names and components for your PC.
![](%40Resources/img/1-ressource-folder.png)
2. For the CPU (a 3600 for me) I'll expand "CPU [#0]: AMD Ryzen 5 3600" and scroll down to select Total CPU Usage. The addresses we want will now be displayed under the Sensor Details and Entry Details.
![](%40Resources/img/2-HWiNFO-expand.png)
![](%40Resources/img/2-HWiNFO-select.png)
3. Simply copy and paste the values in Settings.inc, we need ID and Instance under Sensor Details and ID under Entry Details. You can also double click on the HWiNFO icon in your taskbar and search for the names in the Sensor Status list.
![](%40Resources/img/3-paste-values.png)
4. Repeat the same process for your other sensors.