#include "stdio.h"
#include "sim_init.h"

void sim_init( void )
{
    printf("I'm %s\n", __func__  );
    sim_led_init();

}