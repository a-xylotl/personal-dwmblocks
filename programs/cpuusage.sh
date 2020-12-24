#!/bin/sh

CPUUSAGE=$(top -bn1 | grep "Cpu(s)" | sed "s/.*, *\([0.9.]*\)%* id.*/\1/" | awk '{print 100 - $8"%"}')
CPUTEMP=$(sensors | grep Package | awk '{print $4}' | sed -r 's/.//' )

echo $CPUUSAGE, $CPUTEMP
