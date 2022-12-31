# tec-Digital-Clay

"use of software that offers tools to push, pull, smooth, grab, pinch or otherwise manipulate a digital object as if it were made of a real-life substance such as clay."

Digital clay, also known as digital sculpting or 3D modeling, is a technique used to create three-dimensional objects using specialized software. It allows artists and designers to sculpt and manipulate digital objects as if they were made of a real-life substance, such as clay, using tools that simulate the tactile experience of sculpting with physical materials.

Digital clay software typically offers a range of tools for pushing, pulling, smoothing, grabbing, pinching, and otherwise manipulating the shape and form of a digital object. These tools can be used to create highly detailed and complex models for a variety of purposes, including 3D printing, animation, and visual effects.

Examples of digital clay software include ZBrush, Mudbox, and Blender. Haptic technology, which refers to the use of touch or force feedback to control devices, can also be used in conjunction with digital clay software to further enhance the realism and immersive experience of sculpting with digital materials.

To create a machine that allows a user to manipulate digital objects as if they were made of clay, you would need to follow several technical steps:

Design a 3D model of the digital object you want to manipulate. This can be done using a 3D modeling software such as Blender or Autodesk Maya.

Develop a haptic interface that allows the user to interact with the digital object. This can be done using a haptic device such as the PHANToM haptic device or the Novint Falcon, which provide force feedback to the user through a set of motors or actuators.

Write software that controls the haptic device and allows the user to manipulate the digital object. This can be done using a programming language such as C++ or Python, and may involve implementing algorithms to handle haptic rendering and collision detection.

Integrate the haptic device and software with a graphical user interface (GUI) that allows the user to see and interact with the digital object. This can be done using a GUI framework such as Qt or wxWidgets.

Test and debug the machine to ensure that it is functioning correctly and provides a realistic and intuitive experience for the user.

## haptic device
A haptic device is a device that allows a user to touch, feel, and manipulate virtual objects in a computer-generated environment. It typically consists of a handle or joystick that the user holds, and a set of motors or actuators that provide force feedback to the user's hand. When the user moves the handle, the haptic device sends corresponding signals to the computer, which in turn updates the position and orientation of the virtual object. The haptic device also sends signals back to the user's hand to provide force feedback, simulating the sensation of touching, pushing, pulling, or otherwise interacting with a real object.

Haptic devices are used in a variety of applications, including virtual reality, teleoperation, gaming, and medical simulation. They can be classified based on the type of feedback they provide, such as force-feedback, tactile feedback, or thermal feedback. They can also be classified based on their form factor, such as desktop devices, handheld devices, or wearable devices.

There are many different haptic devices available on the market, ranging from low-cost devices for consumer applications to high-end devices for research and industrial use. Some examples of haptic devices include the PHANToM haptic device, the Novint Falcon, the HaptX gloves, and the HaptX exoskeleton.

## example of C code that could be used to control a haptic device that is connected to the user's five fingers: ```hap1.c```

This code assumes that the haptic device has been properly initialized and that there are constants or enumerations defined for the different fingers (THUMB, INDEX, MIDDLE, RING, PINKY). The setForce() function is used to set the force to be applied to each finger, and the update() function is used to update the forces on the device.

Keep in mind that this is just a very basic example, and in practice you would likely want to use more advanced techniques to control the haptic device, such as using haptic rendering algorithms to simulate the properties of different materials, or using touch or gesture input from the user to trigger different haptic effects.

## code to convert thoses forces to ADC ```adc1.c```
This code first initializes the haptic device and sets the forces to be applied to each finger. It then updates the forces on the device using the ```update()``` function. Next, it converts the forces to ADC code using the following formula: ```adc_code = (int)(force * ADC_RANGE / (1 << ADC_RESOLUTION)); ```
This formula scales the force value to the range of the ADC (ADC_RANGE) and maps it to the ADC resolution (ADC_RESOLUTION). The 1 << ADC_RESOLUTION term is used to shift the 1 left by the number of bits in the ADC resolution (e.g. if the ADC has a resolution of 12 bits, the term would be 1 << 12 = 4096). The resulting ADC code is then stored in a separate variable for each finger.

Keep in mind that this is just an example, and in practice you may need to consider other factors such as the specific ADC hardware you are using and the constraints of your haptic device. You may also need to adjust the formula or use additional techniques to ensure that the ADC code accurately reflects the forces applied to the haptic device.

## Ref
- https://github.com/SteveJustin1963/tec-Haptic
- https://en.wikipedia.org/wiki/Digital_sculpting
- https://en.wikipedia.org/wiki/Haptic_technology
- https://imdl.gatech.edu/currentproj/Digital_Clay/Digital_Clay.html
- https://www.sculpteo.com/blog/2019/06/12/what-is-digital-sculpting/
- https://www.3dsystems.com/haptics-devices/touch
- 
