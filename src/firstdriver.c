/*
 * @Author: Maverick m14775611609@163.com
 * @Date: 2025-03-08 21:48:11
 * @LastEditors: Maverick m14775611609@163.com
 * @LastEditTime: 2025-03-08 23:55:03
 * @FilePath: /embeded_driver/firstdriver.c
 * @Description: 乌班图开发linux驱动
 *
 * Copyright (c) 2025 by Maverick, Xiao Bi Software Company ,All Rights Reserved.
 */
#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

static int __init firstdriver_init(void)
{
    printk(KERN_INFO "[1]firstdriver init!!!!!\n");
    return 0;
}

static void __exit firstdriver_exit(void)
{
    printk(KERN_INFO "[1]firstdriver exit!!!!!!!!\n");
}

module_init(firstdriver_init); // 模块初始化和退出函数
module_exit(firstdriver_exit); // 模块初始化和退出函数
MODULE_LICENSE("GPL");         // 许可证