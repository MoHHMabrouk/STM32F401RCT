################################################################################
# Automatically-generated file. Do not edit!
# Toolchain: GNU Tools for STM32 (12.3.rel1)
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
S_SRCS += \
../Startup/startup_stm32f401rctx.s 

OBJS += \
./Startup/startup_stm32f401rctx.o 

S_DEPS += \
./Startup/startup_stm32f401rctx.d 


# Each subdirectory must supply rules for building sources it contributes
Startup/%.o: ../Startup/%.s Startup/subdir.mk
	arm-none-eabi-gcc -mcpu=cortex-m4 -g3 -DDEBUG -c -I"/media/mohamed/Data/STM/STM32F401RCT/MCAL" -I"/media/mohamed/Data/STM/STM32F401RCT/Configs" -I"/media/mohamed/Data/STM/STM32F401RCT/LIB" -I"/media/mohamed/Data/STM/STM32F401RCT/MCAL/GPIO" -I"/media/mohamed/Data/STM/STM32F401RCT/MCAL/RCC" -I"/media/mohamed/Data/STM/STM32F401RCT/MCAL/NVIC" -x assembler-with-cpp -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" --specs=nano.specs -mfpu=fpv4-sp-d16 -mfloat-abi=hard -mthumb -o "$@" "$<"

clean: clean-Startup

clean-Startup:
	-$(RM) ./Startup/startup_stm32f401rctx.d ./Startup/startup_stm32f401rctx.o

.PHONY: clean-Startup

