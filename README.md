# Linux SDriver
English: A small driver for GNU/Linux / Русский:  Небольшой драйвер для GNU/Linux

Instruction manual. Before compiling, download the make, build-essential and linux-headers packages for the kernel of your version, on Debian-based systems this can be done with the command: sudo apt install make build-essential linux-headers-$(uname -r). Compilation is performed by the command: make, to enable the module in the system, enter into the console: sudo insmod driver.ko, to disable the module: sudo rmmod driver, to view the log command: sudo dmesg / Инструкция. Перед компиляцией скачать пакеты make, build-essential и linux-headers для ядра вашей версии, на Debian-based системах это можно сделать командой: sudo apt install make build-essential linux-headers-$(uname -r). Компиляция осуществляется командой: make, для включения модуля в систему нужно ввести в консоль: sudo insmod driver.ko, для отключения модуля: sudo rmmod driver, для просмотра лога команда: sudo dmesg

Waning! Use ONLY on a virtual machine / Внимание! Использовать ТОЛЬКО на виртуальной машине
