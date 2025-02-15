#ifndef WORKER_H
#define WORKER_H

#include "freertostask.h"

class Worker : public FreeRtosTask {
public:
    Worker(const char* taskName, uint32_t stackSize, UBaseType_t priority);

protected:
    void run() override;
};

#endif // WORKER_H
