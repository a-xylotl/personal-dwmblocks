#!/bin/sh

battery() {
	if [[ $(acpi -a | awk '{print $3}') = *off-line* ]]
	then
		Status="🔋: "
	else
		Status="🔌: "	
	fi

	Capacity=$(cat /sys/class/power_supply/BAT0/capacity | awk '{print $1"%"}')

	if [[ $(acpi -b | awk '{print $5}') = rate ]]
	then
		Remaining="Calculating..."
	elif [[ $(acpi -b | awk '{print $5}') = "" ]]
	then
		Remaining="Done"
	elif [[ $(acpi -b | awk '{print $5}') = "until" ]]
	then
		Remaining=Unknown
	else
		Remaining=$(acpi -b | awk '{print $5}')
	fi

	if [[ $(acpi -b | awk '{print $1}') == "" ]]
	then
		echo ${Status} No battery
	else
		echo ${Status}${Capacity}, ${Remaining}
	fi
}

battery
