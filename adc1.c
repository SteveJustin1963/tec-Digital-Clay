#include <adc.h>

// Constants for ADC resolution and range
const int ADC_RESOLUTION = 12;
const int ADC_RANGE = 4096;

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

  // Convert the forces to ADC code
  int thumb_adc = (int)(thumb_force * ADC_RANGE / (1 << ADC_RESOLUTION));
  int index_adc = (int)(index_force * ADC_RANGE / (1 << ADC_RESOLUTION));
  int middle_adc = (int)(middle_force * ADC_RANGE / (1 << ADC_RESOLUTION));
  int ring_adc = (int)(ring_force * ADC_RANGE / (1 << ADC_RESOLUTION));
  int pinky_adc = (int)(pinky_force * ADC_RANGE / (1 << ADC_RESOLUTION));

  return 0;
}
