#!/bin/bash
TARGET=ARMv7-A

source ../../env/ARMv7-A/env.bash

athrill2 -i -c1 -m ${STARTUP_DIR}/memory.txt -d ${STARTUP_DIR}/device_config.txt ${TARGET_TEST_PG}
