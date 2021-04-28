PROJ_NAME = Blinky

BUILD_DIR = Build

# All Source code files
SRC = SeatHeatingApp.c\
src/activity1.c

# All header file paths
INC = -I inc

# Find out the OS and configure the variables accordingly
ifdef OS	# All configurations for Windwos OS
# Correct the path based on OS
   FixPath = $(subst /,\,$1)
# Name of the compiler used
   CC = avr-gcc.exe
# Name of the elf to hex file converter used
   AVR_OBJ_CPY = avr-objcopy.exe
else #All configurations for Linux OS
   ifeq ($(shell uname), Linux)
# Correct the path based on OS
      FixPath = $1				
# Name of the compiler used
	  CC = avr-gcc
# Name of the elf to hex file converter used
	  AVR_OBJ_CPY = avr-objcopy 
   endif
endif

# Command to make to consider these names as targets and not as file names in folder
.PHONY:all analysis clean doc

all:$(BUILD_DIR)
# Compile the code and generate the ELF file
	$(CC) -g -Wall -DF_CPU=16000000 -Os -mmcu=atmega328  $(INC) $(SRC) -o $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).elf)

$(BUILD_DIR):
# Create directory to store the built files
	mkdir $(BUILD_DIR)

analysis: $(SRC)
# Analyse the code using Cppcheck command line utility
	cppcheck --enable=all --suppress=missingIncludeSystem $^

doc:
# Build the code code documentation using Doxygen command line utility
	make -C documentation
flash:
	avr-objcopy -O ihex $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).elf) $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).hex)
	avrdude -c arduino -p atmega328p -P /dev/ttyACM0 -U flash:w:$(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).hex):i
	rm $(call FixPath,$(BUILD_DIR)/$(PROJ_NAME).hex)


clean:
# Remove all the build files and generated document files
	rm -rf $(call FixPath,$(BUILD_DIR)/*)
	make -C documentation clean