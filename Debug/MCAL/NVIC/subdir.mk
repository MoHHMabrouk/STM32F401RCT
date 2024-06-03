################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../MCAL/NVIC/NVIC_Prog.c 

OBJS += \
./MCAL/NVIC/NVIC_Prog.o 

C_DEPS += \
./MCAL/NVIC/NVIC_Prog.d 


# Each subdirectory must supply rules for building sources it contributes
MCAL/NVIC/%.o MCAL/NVIC/%.su MCAL/NVIC/%.cyclo: ../MCAL/NVIC/%.c MCAL/NVIC/subdir.mk
	arm-none-eabi-gcc "$<" -mcpu=cortex-m4 -std=gnu11 -g3 -DDEBUG -DSTM32 -DSTM32F4 -DSTM32F401RCTx -c -I../Inc -I"/media/mohamed/Data/STM/STM32F401RCT/MCAL" -I"/media/mohamed/Data/STM/STM32F401RCT/Configs" -I"/media/mohamed/Data/STM/STM32F401RCT/LIB" -I"/media/mohamed/Data/STM/STM32F401RCT/MCAL/GPIO" -I"/media/mohamed/Data/STM/STM32F401RCT/MCAL/RCC" -O0 -ffunction-sections -fdata-sections -Wall -fstack-usage -fcyclomatic-complexity -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@"

clean: clean-MCAL-2f-NVIC

clean-MCAL-2f-NVIC:
	-$(RM) ./MCAL/NVIC/NVIC_Prog.cyclo ./MCAL/NVIC/NVIC_Prog.d ./MCAL/NVIC/NVIC_Prog.o ./MCAL/NVIC/NVIC_Prog.su

.PHONY: clean-MCAL-2f-NVIC

