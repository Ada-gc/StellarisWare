#******************************************************************************
#
# Makefile - Rules for building the BLDC control application.
#
# Copyright (c) 2008-2013 Texas Instruments Incorporated.  All rights reserved.
# Software License Agreement
# 
# Texas Instruments (TI) is supplying this software for use solely and
# exclusively on TI's microcontroller products. The software is owned by
# TI and/or its suppliers, and is protected under applicable copyright
# laws. You may not combine this software with "viral" open-source
# software in order to form a larger program.
# 
# THIS SOFTWARE IS PROVIDED "AS IS" AND WITH ALL FAULTS.
# NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, INCLUDING, BUT
# NOT LIMITED TO, IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
# A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE. TI SHALL NOT, UNDER ANY
# CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR CONSEQUENTIAL
# DAMAGES, FOR ANY REASON WHATSOEVER.
# 
# This is part of revision 10636 of the RDK-IDM Firmware Package.
#
#******************************************************************************

#
# Defines the part type that this project uses.
#
PART=LM3S6918

#
# The base directory for StellarisWare.
#
ROOT=../../..

#
# Include the common make definitions.
#
include ${ROOT}/makedefs

#
# Where to find source files that do not live in this directory.
#
VPATH=../drivers
VPATH+=../../../utils

#
# Where to find header files that do not live in the source directory.
#
IPATH=.
IPATH+=..
IPATH+=../../..
IPATH+=../../../third_party/lwip-1.3.2/ports/stellaris/include
IPATH+=../../../third_party/lwip-1.3.2/src/include
IPATH+=../../../third_party/lwip-1.3.2/src/include/ipv4

#
# The default rule, which causes the BLDC control application to be built.
#
all: ${COMPILER}
all: ${COMPILER}/bldc_ctrl.axf

#
# The rule to clean out all the build products.
#
clean:
	@rm -rf ${COMPILER} ${wildcard *~}

#
# The rule to create the target directory.
#
${COMPILER}:
	@mkdir -p ${COMPILER}

#
# Rules for building the BLDC control application.
#
${COMPILER}/bldc_ctrl.axf: ${COMPILER}/bldc_ctrl.o
${COMPILER}/bldc_ctrl.axf: ${COMPILER}/formike240x320x16_ili9320.o
${COMPILER}/bldc_ctrl.axf: ${COMPILER}/images.o
${COMPILER}/bldc_ctrl.axf: ${COMPILER}/locator.o
${COMPILER}/bldc_ctrl.axf: ${COMPILER}/lwiplib.o
${COMPILER}/bldc_ctrl.axf: ${COMPILER}/motor.o
${COMPILER}/bldc_ctrl.axf: ${COMPILER}/sound.o
${COMPILER}/bldc_ctrl.axf: ${COMPILER}/startup_${COMPILER}.o
${COMPILER}/bldc_ctrl.axf: ${COMPILER}/swupdate.o
${COMPILER}/bldc_ctrl.axf: ${COMPILER}/touch.o
${COMPILER}/bldc_ctrl.axf: ${COMPILER}/ustdlib.o
${COMPILER}/bldc_ctrl.axf: ${ROOT}/grlib/${COMPILER}-cm3/libgr-cm3.a
${COMPILER}/bldc_ctrl.axf: ${ROOT}/driverlib/${COMPILER}-cm3/libdriver-cm3.a
${COMPILER}/bldc_ctrl.axf: bldc_ctrl.ld
SCATTERgcc_bldc_ctrl=bldc_ctrl.ld
ENTRY_bldc_ctrl=ResetISR

#
# Include the automatically generated dependency files.
#
ifneq (${MAKECMDGOALS},clean)
-include ${wildcard ${COMPILER}/*.d} __dummy__
endif
