#include "semaphore.h"
#include "HAL9000.h"

void
SemaphoreInit(
    OUT     PSEMAPHORE      Semaphore,
    IN      DWORD           InitialValue
)
{
    ASSERT(NULL != Semaphore);

    memzero(Semaphore, sizeof(Semaphore));

    Semaphore->Value = InitialValue;

    LockInit(&Semaphore->SemaphoreLock);

    InitializeListHead(&Semaphore->WaitingList);
}

void
SemaphoreDown(
    INOUT   PSEMAPHORE      Semaphore,
    IN      DWORD           Value
)
{
    ASSERT(NULL != Semaphore);
}

void
SemaphoreUp(
    INOUT   PSEMAPHORE      Semaphore,
    IN      DWORD           Value
)
{
    ASSERT(NULL != Semaphore);
}