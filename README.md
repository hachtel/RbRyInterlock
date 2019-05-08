# RbRyInterlock
This project is a PCB centered around the ESP8266 board.The board is intended to take an analog signal on the A0 pin (e.g. from a photodiode), discriminate if the signal is above some threshold and toggle a digital output. Since the Moglabs TA interlock references its own +5V and GND we are using this control signal to modulate a mechanical relay to short or open the interlock.
## A few key features:
- A level converter is required as the mechanical relay switches at a voltage larger than the microprocessor supplies, thus we boost the 3.3V signal to 5V. 
- There is a BNC header (updated using JQI BNC connector footprint for better mechanical stability) to bring in the signal from the photodiode. 
- To ensure that the board is a single layer we have inserted a ground plane. 
- The original design used linear voltage regulators to condition +15V down to +5V. These were running too hot, so we have added solder pads 1/2 for +5V/GND. We have found that a standard AC/DC wall adapter works well for this purpose.
