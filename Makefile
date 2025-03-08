# /*
#  * @Author: Maverick m14775611609@163.com
#  * @Date: 2025-03-09 00:03:10
#  * @LastEditors: Maverick m14775611609@163.com
#  * @LastEditTime: 2025-03-09 00:03:30
#  * @FilePath: /embeded_driver/Makefile
#  * @Description: 
#  * 
#  * Copyright (c) 2025 by Maverick, Xiao Bi Software Company ,All Rights Reserved. 
#  */
SRCFILE := src

.PHONY : all
all:
	@echo ----------[MAIN]正在编译内核模块 $(shell date)
	cd $(SRCFILE) && make all
	@echo ----------[MAIN]编译完成 $(shell date)			
.PHONY : clean
clean:
	cd $(SRCFILE) && make clean