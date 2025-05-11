# Preventive-Maintenance-System

A simulation-based **preventive maintenance system** designed to detect potential faults in DC motors using real-time temperature and current sensor data. 

## 🚀 Project Overview -

This project is a simulation-based preventive maintenance system for a DC motor using Arduino. It detects two common fault conditions — overheating and overload — using temperature and current sensors. Faults are displayed on an LCD screen and automatically shut off the motor to prevent damage. This project reflects an industry-relevant integration of electronics and mechanical maintenance concepts.

## 📌 Key Features -

- 🔥 Overheat detection using a temperature sensor
  
- ⚡ Overload detection using a simulated current sensor
  
- 🧠 Real-time motor health status on a 16x2 LCD
  
- 🛑 Automatic motor shutdown on fault detection
  
- ✅ Restores operation when normal conditions return
  
## 🎓 Why This Project?

As a mechanical engineering student, this project bridges the gap between mechanical systems and electronics-based monitoring, which is crucial for modern Industry 4.0 systems. It demonstrates skills in:
- **Preventive maintenance**
  
- **Sensor integration**
  
- **Embedded systems**
  
- **Arduino programming**
  
- **Circuit simulation**
  
## 🛠️ Components Used

| Component                  | Description              |
|---------------------------|--------------------------|
| Arduino Uno               | Main controller          |
| 16x2 LCD Display          | Shows system status      |
| LM35 Temperature Sensor   | Monitors motor heat      |
| Potentiometer             | Simulates current load   |
| NPN Transistor            | Acts as motor switch     |
| DC Motor                  | Load device              |
| 9V Battery                | Power supply             |
| Breadboard & Jumper Wires| Circuit prototyping      |
| Diode & Resistors         | Safety components        |

  
## ⚙️ How It Works

This system continuously monitors a DC motor's temperature and load. When a fault is detected:

- 🟢 Normal: LCD shows only system status

- 🔴 Fault Detected: LCD shows fault type and corresponding sensor value
  
- 🔌 The motor is automatically turned OFF using a transistor switch during any fault
  
- ✅ Motor resumes operation when all readings return to safe range

This approach reflects real-world preventive maintenance principles.

## 🧪 Simulation
The project was simulated to visualize the circuit and test functionality.

- 🧪 **Circuit Diagram**: ![Circuit Diagram](./Circuit%20Connection.png)


- 📽️ **Watch Simulation Demo**:  
[▶️ Click here to view on Google Drive](https://drive.google.com/file/d/1ShL_hT2nRcSkBPQuks0rKucoKyMFffN2/view?usp=sharing)


## 📈 Real-World Relevance

This project models how predictive maintenance is used in **Industry 4.0** to reduce unexpected machine failures, save costs, and improve safety. It’s a great introduction to **condition-based monitoring (CBM)** in mechanical systems.

 ## 🔐 License
This project is for educational and portfolio use only.  
📎 Please do not reuse or distribute without permission.  
© Rahul Bhoyar, All Rights Reserved.
