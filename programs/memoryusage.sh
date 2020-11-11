#!/bin/sh

MemUsage=$(free -h | awk '/^Mem/ { print $3"/"$2 }' | sed s/i//g)
MemUsagePercentage=$(free -h | awk '/^Mem/ { print $3/$2*100 }' | sed s/Gi//g)

MemUsageRounded=$(printf "%.0f" $MemUsagePercentage)

printf $MemUsage", "$MemUsageRounded"%%\n"

