# NodeMCU-esp8266_vcc
NodeMCU esp8266 VCC measurements w/ correction for on-board voltage divider


ESP8266 has ADC which can measure internal voltage reference (TODO: Find specs for this and schematic).

ADC is also attached to A0 pin, and this in turn is attached to a voltage dividor circuit on the board which interferes when using ESP8266 in `ADC_VCC` mode, so we must compensate with magic numbers based on resistor network that is in place.

Your numbers may vary, calibrate known regulated voltage to match by changing magic numbers.
