/************************************************
	柔微智能科技（苏州）有限公司
	描述：STM32f103C8T6配置文件
	作者：付佳伟
************************************************/


/************************************************
	头文件
************************************************/
#include "system_configure.h"





/************************************************
	函数
************************************************/
void system_configuer(void)
{
	delay_init();	    	 															//延时函数初始化	 
	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);	 	//设置NVIC中断分组2:2位抢占优先级，2位响应优先级
}

