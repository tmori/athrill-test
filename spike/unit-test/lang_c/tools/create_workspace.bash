#!/bin/bash

if [ $# -ne 2 ]
then
    echo "USAGE: $0 <target> <workspace>"
    echo "<target>: ARMv7-A"
    exit 1
fi

TARGET=${1}
if [ -d env/${TARGET} ]
then
    :
else
    echo "ERROR: not found TARGET:${TARGET}"
    exit 1
fi

WORKSPACE=${2}
if [ -d ${WORKSPACE} ]
then
    :
else
    echo "ERROR: not found WORKSPACE:${WORKSPACE}"
    exit 1
fi

source env/env.bash

if [ -d ${WORKSPACE}/test ]
then
    :
else
    mkdir ${WORKSPACE}/test
fi

if [ -d ${WORKSPACE}/build ]
then
    :
else
    mkdir ${WORKSPACE}/build
fi

if [ -d ${WORKSPACE}/test-case ]
then
    :
else
    mkdir ${WORKSPACE}/test-case
fi

TEMPLATE_WORKDIR=template/workspace

#rm -rf  ${WORKSPACE}/build/*

cp -f ${TEMPLATE_WORKDIR}/build/* ${WORKSPACE}/build/
cp -rf test-case/* ${WORKSPACE}/test-case/

exit 0