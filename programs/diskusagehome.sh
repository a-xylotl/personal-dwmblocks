#!/bin/sh
df -h | grep "/dev/mapper/home" | awk '{print $3"/"$2", "$5}'

