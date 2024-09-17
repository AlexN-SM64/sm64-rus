# Этот скрипт позволяет конвертировать все текстуры из того формата на другой.

if [ $1 = '--help' ]; then
	echo "$0 [DIR] [in] [out]"
	echo "Позволяет конвертировать все текстуры из того формата на другой."
	echo " "
	echo "[DIR] - каталог"
	echo "[in] - из того формата (rgba16, ia16, ia8, ia4, ia1)"
	echo "[out] - на другой формат (rgba16, ia16, ia8, ia4, ia1)"
	exit 0
fi

make -C tools n64graphics

pushd $1
for texture in *.$2.png; do
	echo "Конвертирование в $3: $texture -> output.${texture%.$2.png}.$3.inc.c"
	$(popd)/tools/n64graphics -s u8 -i output.${texture%.$2.png}.$3.inc.c -g $texture -f $3
done
popd
