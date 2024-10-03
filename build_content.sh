if [ $1 == clean ]; then
	python3 extract_assets.py --clean
	rm -f levels/ending/cake.inc.c
	rm -f levels/ending/cake.*.rgba16.png
	rm -f levels/ending/cake.*.rgba16.inc.c
else
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
