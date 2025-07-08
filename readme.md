# 🌱 SmartPlant-Watering-System using Arduino

> Automatically waters your plant when the soil is dry!  
> Perfect for beginners, kids, students, and plant lovers. No coding experience required.

---

## 📦 Components Needed

| Component                        | Quantity | Buy Link (India) |
|----------------------------------|----------|------------------|
| Arduino UNO                      | 1        | [Buy on Robu](https://robu.in/product/arduino-uno-r3-ch340g-atmega328p-cable-arduino-uno-transparent-acrylic-case-arduino-uno-r3/) |
| Soil Moisture Sensor             | 1        | [Buy on Robu](https://robu.in/product/soil-moisture-meter-soil-humidity-sensor-water-sensor-soil-hygrometer-ardunio/) |
| 5V Relay Module                  | 1        | [Buy on Robu](https://robu.in/product/1-channel-relay-module-5v-high-and-low-level-trigger-relay-module/) |
| DC 6V-12V Mini Water Pump (R385)    | 1        | [Buy on Robu](https://robu.in/product/dc6-12v-mini-aquarium-water-pump-r365/) |
| 12V DC Adapter (1A or 2A)        | 1        | [Buy on Robu](https://robu.in/product/orange-12v-1a-power-adapter-with-dc-plug-bis-approved/) |
| Jumper Wires (M2M,M2F,F2F)       | 1    | [Buy on Robu](https://robu.in/product/10-cm-40-pin-dupont-male-male-male-female-female-female-cable-combo/) |
| Breadboard (Optional)            | 1        | [Buy on Robu](https://robu.in/product/mb102-830-points-solderless-prototype-pcb-breadboard-high-quality/) |

---

## 🧠 How It Works

- The **Soil Moisture Sensor** checks the soil moisture level.
- If the soil is dry, the **Arduino** activates the **Relay**, which turns on the **12V Water Pump**.
- The pump waters the plant.
- Once the soil becomes moist again, the pump automatically turns off.

---
## 🧰 Wiring Instructions

### 🪴 Soil Moisture Sensor

| Sensor Pin | Arduino Pin |
|------------|-------------|
| VCC        | 5V          |
| GND        | GND         |
| A0         | A0          |

---

### ⚡ Relay Module

| Relay Pin | Arduino Pin |
|-----------|-------------|
| VCC       | 5V          |
| GND       | GND         |
| IN        | D8          |

---

### 💧 Water Pump via Relay (NO–COM)

- **COM** → +12V from Adapter  
- **NO** → One wire of Pump  
- **Other Pump Wire** → -12V (GND) of Adapter  

> ⚠️ **Important:** Make sure Arduino `GND` and 12V Adapter `GND` are connected together (common ground).

---

## 🔧 How to Use

1. Upload the code to Arduino using **Arduino IDE**.
2. Connect all components as shown in the wiring section.
3. Open **Serial Monitor** (set to `9600 baud`).
4. Place the soil moisture sensor into **dry soil** – the pump will **turn ON**.
5. Water the soil – the pump will **turn OFF** automatically.

---

## 🧪 Adjusting the Sensitivity

- If the soil is **too wet** and it **keeps watering**, increase the threshold value (e.g., `650`).
- If the pump **doesn’t run even when the soil is dry**, lower the threshold (e.g., `550`).

💡 **Tip:** Use the Serial Monitor to see live moisture values.  
Compare values for dry vs wet soil and adjust accordingly.

---

## 💡 Pro Tips

- Use a **plastic tube or IV drip pipe** to guide water to the plant.
- Keep the pump submerged in a **clean water container** (e.g., bottle or tank).
- **Always double-check connections** before powering the system.
- Use **zip ties or hot glue** to organize your setup and make it safe.

---

## 🙋‍♂️ Who Can Build This?

- 👶 **Ages 10+**  
- 🌿 **No prior electronics or coding skills needed**  
- 🔌 **Plug & Play Style – Easy & Safe**  
- ⏱️ **Build Time:** 30 minutes or less

---
## ❤️ Credits

This project was developed with the intention of making automation accessible to beginners, students, educators, and hobbyists.

We encourage open collaboration and continuous improvement. You are welcome to fork, adapt, and contribute to the project to suit your needs.

**Created by [Aditya Sharma](https://github.com/shadow-leaked) with a focus on learning, sustainability, and hands-on innovation.**
