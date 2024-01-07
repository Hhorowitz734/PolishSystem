# Polish System Computational History Visualizer

## Description
The concept known as the "Polish System" was conceived in the 1820s and gained widespread recognition during the 1830s and 1840s, largely due to the efforts of General Józef Bem. Bem, a skilled military engineer with a strong inclination towards mnemonic techniques, was instrumental in promoting this system. This project is a digital recreation, capturing the essence and intricacies of the original Polish System, while leveraging modern technology to reimagine and preserve its historical significance.


---

## Features
- Country Marking: Users can easily identify and mark countries on the digital map. This feature enables the highlighting of specific nations for geopolitical studies.
- [TODO] Conflict and War Annotation: The tool allows users to annotate regions with information about historical or ongoing conflicts and wars. This feature is particularly useful for historians, educators, and students, providing a visual representation of conflict zones across the globe.
- [TODO] Customizable Notes: Users have the ability to add custom notes to any location on the map. This flexibility is ideal for adding context, personal experiences, or detailed information about specific places.
- [TODO] Save and Load Functionality: The project supports saving the current state of the map, including all markings, annotations, and notes, into a .txt file format. This allows for easy sharing and continuation of work. Additionally, users can load previously saved files to resume their work or review past projects.

---

## Installation Instructions

This guide will walk you through the process of setting up and installing the EquationParser project on your system.

### Prerequisites

Before starting, make sure your system has the following installed:

- CMake (version 3.10 or higher)
- A C++ compiler supporting C++17 standard (e.g., GCC, Clang)
- Raylib (version 4.5.0)
- Google Test for unit testing

You can install Raylib and Google Test via a package manager like Homebrew on macOS or the respective package manager for your operating system.

### Step 1: Clone the Repository

First, clone the PolishSystem repository from its source. This step assumes you have `git` installed:

```bash
git clone https://github.com/Hhorowitz734/PolishSystem
cd PolishSystem
```

### Step 2: Install Raylib and CUnit

If you haven't already installed Raylib and Google Test, you can do so using Homebrew on macOS:

```bash
brew install raylib
brew install googletest
```

For other operating systems, please refer to the official documentation for Raylib and CUnit for installation instructions.

### Step 3: Build the Project

Once the prerequisites are installed, you can build the project using CMake:

```bash
mkdir build
cd build
cmake ..
make
```

This will compile the main application along with the necessary libraries.

### Step 4: Run Tests

To ensure everything is set up correctly, run the included tests:

```bash
ctest
```

This command will execute all the tests defined in the CMake configuration.

### Step 5: Running the Application

After successfully building the project and passing the tests, you can run the EquationParser application after updating your equation in the main.c.

```bash
./PolishSystem
```

This command will start the application. Follow any on-screen instructions to interact with the program.

### Troubleshooting

If you encounter any issues during installation or running the application, email me at hhorowitz734@gmail.com.

## Images
![Tree Image](/images/century.png "Polish System Home")
