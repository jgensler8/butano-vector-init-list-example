#!/bin/bash

OBJDUMP="C:\devkitPro\devkitARM\arm-none-eabi\bin\objdump.exe"

# "-R"
for command in "-d" "-a" "-f" "-p" "-h" "-x" "-g" "-G" "-t" "-T" "-r"; do 
    for bg in "good" "bad" ; do
        $OBJDUMP $command ./build/main_${bg}.o > "./flag-"${command}${bg}".out"
    done
    diff ./flag-${command}good.out ./flag-${command}bad.out > flag-${command}.diff
done