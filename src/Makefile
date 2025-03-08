# /*
#  * @Author: Maverick m14775611609@163.com
#  * @Date: 2025-03-08 21:42:23
#  * @LastEditors: Maverick m14775611609@163.com
#  * @LastEditTime: 2025-03-08 22:04:17
#  * @FilePath: /embeded_driver/Makefile
#  * @Description: 
#  * 
#  * Copyright (c) 2025 by Maverick, Xiao Bi Software Company ,All Rights Reserved. 
#  */

CC := gcc-12
obj-m := firstdriver.o
CURRENT_PATH := $(shell pwd)
LINUX_KERNEL := $(shell uname -r)
LINUX_KERNEL_PATH := /usr/src/linux-headers-$(LINUX_KERNEL)

.PHONY:all
all:
	@echo [1]$(CURRENT_PATH)
	@echo [1]$(LINUX_KERNEL)
	@echo [1]$(LINUX_KERNEL_PATH)
	@echo 正在编译内核模块 $(shell date)
	make -C $(LINUX_KERNEL_PATH) M=$(CURRENT_PATH) modules

.PHONY:clean

clean:
	make -C $(LINUX_KERNEL_PATH) M=$(CURRENT_PATH) clean
