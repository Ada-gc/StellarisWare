#******************************************************************************
#
# Makefile - Rules for building the ek-lm3s3748 examples.
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
# This is part of revision 10636 of the EK-LM3S3748 Firmware Package.
#
#******************************************************************************

#
# A list of the directories containing the examples.
#
DIRS=audio             \
     bitband           \
     blinky            \
     boot_demo1        \
     boot_demo2        \
     boot_demo_usb     \
     boot_usb          \
     gpio_jtag         \
     grlib_demo        \
     hello             \
     interrupts        \
     mpu_fault         \
     pwmgen            \
     qs-scope          \
     sd_card           \
     timers            \
     uart_echo         \
     udma_demo         \
     usb_boot_demo1    \
     usb_boot_demo2    \
     usb_dev_bulk      \
     usb_dev_cserial   \
     usb_dev_keyboard  \
     usb_dev_mouse     \
     usb_dev_msc       \
     usb_dev_serial    \
     usb_host_msc      \
     usb_host_keyboard \
     usb_host_mouse    \
     usb_stick_demo    \
     usb_stick_update  \
     watchdog         

#
# The default rule, which causes the examples to be built.
#
all:
	@for i in ${DIRS};              \
	 do                             \
	     make -C $${i} || exit $$?; \
	 done

#
# The rule to clean out all the build products.
#
clean:
	@rm -rf ${wildcard *~} __dummy__
	@-for i in ${DIRS};        \
	  do                       \
	      make -C $${i} clean; \
	  done
