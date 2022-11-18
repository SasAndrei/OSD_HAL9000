#pragma once

void
SystemPreinit(
    void
    );

static
STATUS
(__cdecl _HelloIpi)(
    IN_OPT PVOID Context
    );

static
STATUS
(__cdecl _CPUTickIpi)(
    IN_OPT PVOID Context
    );

STATUS
SystemInit(
    IN  ASM_PARAMETERS*     Parameters
    );

void
SystemUninit(
    void
    );