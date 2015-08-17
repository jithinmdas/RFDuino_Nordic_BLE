/** @file
 * 
 * @author  Jithin M Das
 * 
 * @brief   Application main file
 */

#ifndef TIMER_HANDLER_H__
#define TIMER_HANDLER_H__

#include "bsp.h"
#include "app_timer.h"

#define APP_TIMER_PRESCALER 0
#define APP_TIMER_MAX_TIMERS (2 + BSP_APP_TIMERS_NUMBER)
#define APP_TIMER_OP_QUEUE_SIZE 4

void timer_init(void);

#endif
