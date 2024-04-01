################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/RedInalambrica.c \
../src/entradas.c \
../src/procesamiento.c \
../src/salida.c 

C_DEPS += \
./src/RedInalambrica.d \
./src/entradas.d \
./src/procesamiento.d \
./src/salida.d 

OBJS += \
./src/RedInalambrica.o \
./src/entradas.o \
./src/procesamiento.o \
./src/salida.o 


# Each subdirectory must supply rules for building sources it contributes
src/%.o: ../src/%.c src/subdir.mk
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"$(@:%.o=%.d)" -MT"$@" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


clean: clean-src

clean-src:
	-$(RM) ./src/RedInalambrica.d ./src/RedInalambrica.o ./src/entradas.d ./src/entradas.o ./src/procesamiento.d ./src/procesamiento.o ./src/salida.d ./src/salida.o

.PHONY: clean-src

