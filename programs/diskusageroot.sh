#!/bin/sh
df -h | grep "/dev/mapper/root" | awk '{print $3"/"$2", "$5}'

