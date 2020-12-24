#!/bin/sh

wego -f json | tr ',' ' ' | awk '/TempC/ {printf "%s", $2; exit}' | awk '{printf ("%.0f°C\n", $1)}'

