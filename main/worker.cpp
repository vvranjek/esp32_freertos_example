#include "worker.h"

Worker::Worker(const char* taskName, uint32_t stackSize, UBaseType_t priority)
    : FreeRtosTask(taskName, stackSize, priority) {}

void Worker::run() {
    // Custom implementation for the worker task
    while (true) {
        printf("Worker task is running...\n");
        vTaskDelay(500 / portTICK_PERIOD_MS); // Delay for 0.5 seconds
    }
}
