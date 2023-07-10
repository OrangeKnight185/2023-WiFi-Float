# 2023-WiFi-Float
Code for Task 3: MATE Floats! for the 2023 MATE ROV World Championships.

## Task Description
This year, MATE Floats! returns for the second year in a row, this time, with some extra tasks. The float must:
- Complete 2 vertical profiles.
- Wirelessly transmit the time and team number to a reciever (in this case, my laptop) between every profile.
- Communicate with the control station before the first profile.

## Methodology
This float design impliments 2.4 GHz WiFi to transmit the data, as this protocol is simple to impliment with litte regard to potential interference from other teams' devices. The float broadcasts itself as an access point, which hosts a mini web server. The float uses the IP 192.168.4.1. This IP host a tiny HTML web page that can then be loaded via a web browser on the reciever while the float is above water to display the required data.

To complete profiles, the float uses a buoyancy engine. This takes the form of a PVC pipe that has a machined piston with an o-ring travelling up and down under the power of a linear actuator. A Blue Robotics switch is located on top of the float, which is connected to an analog input on the float Arduino to detect when to begin the profile sequence.
