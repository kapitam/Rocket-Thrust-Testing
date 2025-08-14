# Solid Rocket Motor Thrust Characterization

## Overview
This project investigates how nozzle size and propellant compaction ratio affect the thrust output of a solid rocket motor.  
It was conducted as a Grade 11 science project in Thailand, where commercial rocket motors were unavailable, requiring a fully self-built test setup.

The work includes:
- Custom-built thrust stand with HX711 load cell and ESP32-based data acquisition
- Controlled propellant composition (black powder: 75% KNO₃, 15% C, 10% S)
- Variation of nozzle diameter and compaction interval
- Data analysis for thrust-time profiles and total impulse

## Purpose
Initially inspired by an interest in rocketry, the project aimed to measure the effects of **nozzle size** and **propellant compaction** on thrust output, using a scientific approach under controlled variables.

## Features
- Electronic thrust measurement using HX711 + 1 kg load cell
- ESP32-based data logging with millisecond timestamps
- Variable compaction method: propellant compacted in 25 g intervals, (PLACEHOLDER, MORE DATA WILL BE APENDED)

## Technical Setup
| Component        | Details |
|------------------|---------|
| **Propellant**   | Black powder (75% KNO₃, 15% C, 10% S) |
| **Motor Casing** | 120 mm PVC, 1-inch inner diameter |
| **Nozzle Height**| 30 mm compacted clay |
| **End Cap**      | 20 mm |
| **Load Cell**    | 1 kg with HX711 amplifier |
| **Controller**   | ESP32 (PlatformIO firmware) |
| **Sampling Rate**| Variable, recorded with ms timestamp |
| **Data Format**  | CSV via serial logging |

## Test Parameters
- **Nozzle Diameter**: varied across tests
- **Compaction**: propellant added in 25 g increments, compacted per interval (MORE DATA WILL BE APENDED)
- **Fixed Variables**: casing size, nozzle height, end cap height, propellant ratio

## Data Collection & Analysis
- Real-time data acquisition via PlatformIO serial monitor
- Data saved as CSV
- Plotted thrust-time graphs in Google Sheets
- Calculations: maximum thrust, burn duration, and total impulse

## Results
*PLACE HOLDER*

## Learnings & Challenges & Errors
- Ensuring all variables remained constant during tests was difficult
- One engine was improperly made, becoming a test engine for the stand
- Calibration of the load cell was only performed once after all tests, affecting absolute accuracy
- Learned importance of rigorous calibration and process control in experimental setups

## Repository Structure
