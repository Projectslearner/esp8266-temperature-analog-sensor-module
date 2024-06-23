# ESP8266 Temperature Analog Sensor Module Project

#### Project Overview
This project demonstrates how to interface an analog temperature sensor with an ESP8266 microcontroller to measure and display temperature readings. Analog temperature sensors, such as the LM35 or TMP36, are widely used in various applications to monitor temperature changes.

#### Components Needed
- **ESP8266 Microcontroller (NodeMCU)**
- **Analog Temperature Sensor (e.g., LM35, TMP36)**
- **Jumper Wires**
- **Breadboard**

#### Block diagram



#### Circuit Setup
1. **Connecting the Temperature Sensor to ESP8266:**
   - Connect the VCC pin of the temperature sensor to the 3.3V pin on the ESP8266.
   - Connect the GND pin of the temperature sensor to a ground (GND) pin on the ESP8266.
   - Connect the analog output pin of the temperature sensor to the analog pin A0 on the ESP8266.

#### Instructions
1. **Setup:**
   - Initialize serial communication at a baud rate of 9600 for debugging purposes.

2. **Operation:**
   - In the `loop()` function:
     - Read the analog value from the temperature sensor using `analogRead()`.
     - Convert the analog value to voltage. Assuming a 10-bit ADC and a 3.3V reference voltage, the conversion formula is:
       ```
       voltage = sensorValue * (3.3 / 1023.0)
       ```
     - Convert the voltage to temperature:
       - For LM35 sensor: Use `temperatureC = voltage * 100.0` (10mV per degree Celsius).
       - For TMP36 sensor: Use `temperatureC = (voltage - 0.5) * 100.0` (500mV offset and 10mV per degree Celsius).
     - Print the temperature in degrees Celsius to the Serial Monitor.
     - Add a delay of 1 second between readings to avoid flooding the Serial Monitor with data.

#### Applications
- **Environmental Monitoring:** Measure and log temperature data for climate control and environmental studies.
- **Home Automation:** Integrate temperature sensors in home automation systems for heating, ventilation, and air conditioning (HVAC) control.
- **Weather Stations:** Use temperature sensors in DIY weather stations to monitor local temperature conditions.

#### Notes
- **Voltage Reference:** Ensure the ESP8266's reference voltage is stable at 3.3V for accurate readings.
- **Temperature Conversion:** Adjust the conversion formula based on the specific temperature sensor being used.
- **Serial Output:** Use the Serial Monitor to observe temperature readings and verify the correct operation of the sensor.

---

#### Useful Links
🌐 [ProjectsLearner - ESP8266 Temperature Analog Sensor Module](https://projectslearner.com/learn/esp8266-temperature-analog-sensor-module)  
📧 [Email](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Created with ❤️ by ProjectsLearner