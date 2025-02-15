#ifndef FREERTOS_TASK_H
#define FREERTOS_TASK_H

#include <stdio.h>
#include <inttypes.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"

class FreeRtosTask {
public:
    FreeRtosTask(const char* taskName, uint32_t stackSize, UBaseType_t priority);
    virtual ~FreeRtosTask();

protected:
    virtual void run();

private:
    TaskHandle_t taskHandle = NULL;
    static void taskFunction(void* pvParameters);
};

#endif // FREERTOS_TASK_H
