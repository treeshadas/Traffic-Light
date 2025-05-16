**Description**
This project is a graphical simulation of a traffic light system using C++ and the graphics.h (winbgim) library. It visually represents a traffic signal with red, yellow, and green lights and simulates the motion of a car based on the signal state.
When the red or yellow light is on, the car slows down. When the green light is on, the car moves faster. The user can interact with the simulation using keyboard inputs (r for red, y for yellow). The transition from yellow to green happens automatically.

**Features**
1.Interactive control of traffic light with keyboard inputs.
2.Animated car that reacts to the traffic signal.
3.Use of basic shapes (circles, lines, rectangles) to simulate real-world traffic elements.
4.Looping animation with delay and refresh.
**Requirements**
1.C++ Compiler (e.g., Turbo C++, Code::Blocks with graphics support)
2.Windows OS (required for winbgim.h)
3.BGI graphics library (included with older compilers or can be added manually).
** Concepts Used**
1.Procedural Programming in C++
2.Use of graphics.h for 2D graphics
3.Keyboard input handling (getch() and kbhit())
4.Basic game loop with delay and clearing screen (cleardevice())
