# ESP32 MIDI Matrix Controller

This project uses an ESP32-S3 DevKitC board to create a 4x4 MIDI matrix with 4 potentiometers, allowing you to send MIDI messages using the MIDI Fighter 3D note mapping. The project leverages the ESP32-BLE-MIDI library to provide Bluetooth Low Energy MIDI functionality, and is an open source clone of the popular MIDI Fighter 3D controller.

## Table of Contents

- [Installation](#installation)
- [Usage](#usage)
- [Contributing](#contributing)
- [License](#license)

## Installation

To use this project, you will need an ESP32-S3 DevKitC board and a computer with the Arduino IDE installed. Follow these steps to get started:

1. Clone this repository to your local machine or download the ZIP file.
2. Open the Arduino IDE and navigate to File > Open. Select the `esp32-midi-matrix-4x4-pots.ino` file in the `src` folder.
3. Connect your ESP32-S3 DevKitC board to your computer using a USB cable.
4. Select the appropriate board and port in the Arduino IDE.
5. Click the "Upload" button to upload the code to your board.

Note that you may need to install the ESP32-BLE-MIDI library in the Arduino IDE to use this project. You can find instructions for installing libraries in the Arduino IDE in the [official documentation](https://www.arduino.cc/en/guide/libraries).

## Usage

| Component       | ESP32-S3 DevKitC Pin |
|-----------------|----------------------|
| Button 1        | 36                   |
| Button 2        | 37                   |
| Button 3        | 38                   |
| Button 4        | 39                   |
| Button 5        | 40                   |
| Button 6        | 41                   |
| Button 7        | 42                   |
| Button 8        | 43                   |
| Button 9        | 44                   |
| Button 10       | 45                   |
| Button 11       | 46                   |
| Button 12       | 47                   |
| Button 13       | 48                   |
| Button 14       | 49                   |
| Button 15       | 50                   |
| Button 16       | 51                   |
| Potentiometer 1 | Analog pin 0          |
| Potentiometer 2 | Analog pin 1          |
| Potentiometer 3 | Analog pin 2          |
| Potentiometer 4 | Analog pin 3          |

   +---+---+---+---+
   | 36| 37| 38| 39|
   +---+---+---+---+
   | 40| 41| 42| 43|
   +---+---+---+---+
   | 44| 45| 46| 47|
   +---+---+---+---+
   | 48| 49| 50| 51|
   +---+---+---+---+



To use the MIDI matrix controller, follow these steps:

1. Connect the potentiometers and buttons to the appropriate pins on the ESP32-S3 DevKitC board according to the pinout diagram in the code.
2. Connect the ESP32-S3 DevKitC board to your computer using a USB cable.
3. Open a MIDI client software on your computer (e.g. a DAW or MIDI monitoring software).
4. Ensure that the ESP32-S3 DevKitC board is recognized as a MIDI device by your computer.
5. Press the buttons in the matrix and adjust the potentiometers to send MIDI messages according to the MIDI Fighter 3D note mapping.

Note that you can customize the pin assignments and MIDI mappings in the code to fit your specific needs. Refer to the comments in the code for more information.

## Contributing

Contributions to this project are welcome! If you find a bug or have an idea for an improvement, please create a pull request with your changes. Before submitting a pull request, please ensure that your changes are well-documented and do not introduce any breaking changes to the code.

## License

This project is licensed under the [MIT License](LICENSE). Feel free to use, modify, and distribute the code as you see fit.
