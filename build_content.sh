if [ $1 == clean ]; then

	rm -f actors/power_meter/*.png
	rm -f levels/castle_grounds/*.png
	rm -f levels/ending/*.png
	rm -f levels/intro/*.png
	rm -f levels/menu/*.png
	rm -f textures/segment2/*.png
	rm -f textures/title_screen_bg/*.png

else

	./texture_convert.sh rgba16 actors/power_meter
	./texture_convert.sh ia8 levels/castle_grounds
	./texture_convert.sh rgba16 levels/ending
	./texture_convert.sh rgba16 levels/intro
	./texture_convert.sh rgba16 levels/menu
	./texture_convert.sh ia8 levels/menu
	./texture_convert.sh rgba16 textures/segment2
	./texture_convert.sh ia4 textures/segment2
	./texture_convert.sh rgba16 textures/title_screen_bg

fi
