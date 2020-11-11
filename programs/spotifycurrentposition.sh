#!/bin/bash

while (true)
	do
	time=$(dbus-send --print-reply=literal --session --dest.org.mpris.MediaPlayer2.spotify /org/mpris/MediaPlayer2 org.mpris.MediaPlayer2.Player.getPositionInSeconds)
	echo $time
	done

