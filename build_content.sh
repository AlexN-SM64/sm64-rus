if [ $1 == clean ]; then

	python3 extract_assets.py --clean
	rm -f levels/ending/cake.inc.c
	rm -f levels/ending/cake.*.rgba16.png
	rm -f levels/ending/cake.*.rgba16.inc.c

if (ls source_textures); then
	rm -f actors/power_meter/*.png
	cp -f source_textures/actors/power_meter/*.png actors/power_meter
	
	rm -f levels/castle_grounds/*.png
	cp -f source_textures/levels/castle_grounds/*.png levels/castle_grounds
	
	rm -f levels/ending/*.png
	cp -f source_textures/levels/ending/*.png levels/ending

	rm -f levels/intro/*.png
	cp -f source_textures/levels/intro/*.png levels/intro

	rm -f levels/menu/*.png
	cp -f source_textures/levels/menu/*.png levels/menu

	rm -f textures/segment2/*.png
	cp -f source_textures/textures/segment2/*.png textures/segment2

	rm -f textures/title_screen_bg/*.png
	cp -f source_textures/textures/title_screen_bg/*.png textures/title_screen_bg
	
	rm -f -r source_textures
fi

else

	./texture_convert.sh rgba16 rgba16 actors/power_meter
	./texture_convert.sh i8 ia8 levels/castle_grounds
	./texture_convert.sh rgba16 rgba16 levels/ending
	./texture_convert.sh rgba16 rgba16 levels/intro
	./texture_convert.sh rgba16 rgba16 levels/menu
	./texture_convert.sh i8 ia8 levels/menu
	./texture_convert.sh rgba16 rgba16 textures/segment2
	./texture_convert.sh i4 ia4 textures/segment2
	./texture_convert.sh rgba16 rgba16 textures/title_screen_bg
	
	if (python3 extract_assets.py us); then
		if [ $1 == bin ]; then
			tools/skyconv --type cake --split levels/ending/cake.png levels/ending
			export TEXTURE_TYPE=bin
		elif (tools/skyconv --type cake --split levels/ending/cake.png levels/ending --write-tiles levels/ending); then
			echo
		else
			tools/skyconv --type cake --split levels/ending/cake.png levels/ending
			export TEXTURE_TYPE=bin
		fi
		if [ $TEXTURE_TYPE == bin ]; then
			export x=-1
			for (( i=1; i<=$(for lines in $(echo $(cat -n levels/ending/cake.inc.c | tail -1)); do echo $lines; done | head -1); i++ )); do
				if [ "$(for k in $(echo $(cat levels/ending/cake.inc.c | head -$i | tail -1)); do echo $k; done | head -1)" == "ALIGNED8" ]; then
					export j=0
				fi
				export j=$[$j+1]
				if [ $[ $j == 2 ] == 1 ]; then
					export x=$[$x+1]
					cat levels/ending/cake.inc.c | head -$i | tail -1 > levels/ending/cake.$x.rgba16.inc.c
				fi
			done
		fi
	fi
fi
