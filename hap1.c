#include <haptics.h>

int main()
{
  // Initialize haptic device
  HapticDevice device;
  device.init();

  // Set the forces to be applied to each finger
  double thumb_force = 1.0;
  double index_force = 0.5;
  double middle_force = 0.7;
  double ring_force = 0.3;
  double pinky_force = 0.9;

  // Set the forces on the haptic device
  device.setForce(THUMB, thumb_force);
  device.setForce(INDEX, index_force);
  device.setForce(MIDDLE, middle_force);
  device.setForce(RING, ring_force);
  device.setForce(PINKY, pinky_force);

  // Update the forces on the haptic device
  device.update();

  return 0;
}
