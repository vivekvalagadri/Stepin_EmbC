# Automobile Seat Heating App

## Components
* Temperature Enable
	* Push Button(PB3): Active Low
* Seat Occupied Enable
	* Push Button(PB4): Active Low
`If Seat Occupied and Temperature enable`
* Turn LED ON--Read ADC Value--Set PWM Value based on ADC Value--Send it to dashboard via UART
	* LED Actuator(PB5)
	* ADC Channel 0 (AC0)
	* PWM PIN (PD6)

|Build|Cppcheck|Codacy|
|:--:|:--:|:--:|
|[![Compile-Linux](https://github.com/vivekvalagadri/Stepin_EmbC/actions/workflows/compile.yml/badge.svg)](https://github.com/vivekvalagadri/Stepin_EmbC/actions/workflows/compile.yml)|[![Cppcheck](https://github.com/vivekvalagadri/Stepin_EmbC/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/vivekvalagadri/Stepin_EmbC/actions/workflows/cppcheck.yml)|[![Codacy Badge](https://app.codacy.com/project/badge/Grade/afc8933f9ff24451a591cdf19fd7e65e)](https://www.codacy.com/gh/vivekvalagadri/Stepin_EmbC/dashboard?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=vivekvalagadri/Stepin_EmbC&amp;utm_campaign=Badge_Grade)|
