#include <stdio.h>
#include "pico/stdlib.h"

/**
 * @brief Programa principal
*/
int main(void) {
  // Inicializo el USB
  stdio_init_all();
  // Demora para esperar la conexion
  sleep_ms(1000);
  
  // prender led 

  gpio_init(15);

  gpio_init(16);

  // led P y A

  gpio_set_dir(15, GPIO_IN);

  gpio_set_dir(16, GPIO_OUT);

  
  

  while (true) {
    git_put(pico_default_led_pin, 15);

  }
  return 0;
}