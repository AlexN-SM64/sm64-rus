git clone https://github.com/sm64pc/sm64ex.git -b master  sm64ex-master
git clone https://github.com/sm64pc/sm64ex.git -b nightly sm64ex-nightly

cp -f sm64ex-nightly/src/game/area.c         sm64ex-master/src/game/area.c
cp -f sm64ex-nightly/src/game/hud.c          sm64ex-master/src/game/hud.c
cp -f sm64ex-nightly/src/game/ingame_menu.c  sm64ex-master/src/game/ingame_menu.c
cp -f sm64ex-nightly/src/game/level_update.c sm64ex-master/src/game/level_update.c
cp -f sm64ex-nightly/src/game/options_menu.c sm64ex-master/src/game/options_menu.c
cp -f sm64ex-nightly/src/game/print.c        sm64ex-master/src/game/print.c
cp -f sm64ex-nightly/src/menu/file_select.c  sm64ex-master/src/menu/file_select.c
cp -f sm64ex-nightly/src/menu/star_select.c  sm64ex-master/src/menu/star_select.c

rm -f -r sm64ex-nightly

pushd sm64ex-master
tools/create_patch.sh ../sm64ex-nightly-update.patch
popd

rm -f -r sm64ex-master

patch -p1 < sm64ex-nightly-update.patch

rm -f sm64ex-nightly-update.patch
