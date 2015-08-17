/** @file
 * 
 * @author  Jithin M Das
 * 
 * @brief   Application main file
 */

#include "timer_handler.h"

void timer_init(void)
{
    APP_TIMER_INIT(APP_TIMER_PRESCALER, APP_TIMER_MAX_TIMERS, APP_TIMER_OP_QUEUE_SIZE, false);
}
