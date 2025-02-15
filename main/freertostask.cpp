#include "freertostask.h"

FreeRtosTask::FreeRtosTask(const char* taskName, uint32_t stackSize, UBaseType_t priority) {
    // Create the FreeRTOS task
    xTaskCreate(&FreeRtosTask::taskFunction, taskName, stackSize, this, priority, &taskHandle);
}

FreeRtosTask::~FreeRtosTask() {
    // Delete the task if it exists
    if (taskHandle != NULL) {
        vTaskDelete(taskHandle);
        taskHandle = NULL;
    }
}

void FreeRtosTask::taskFunction(void* pvParameters) {
    FreeRtosTask* instance = static_cast<FreeRtosTask*>(pvParameters);
    instance->run();
}

void FreeRtosTask::run() {
    // Default implementation (can be overridden)
    while (true) {
        printf("Base task is running...\n");
        vTaskDelay(1000 / portTICK_PERIOD_MS); // Delay for 1 second
    }
}
