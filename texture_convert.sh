make -C tools n64graphics

mkdir -p source_textures/$3

for FILE in $3/*.$1.png; do
	tools/n64graphics -i source_textures/${FILE/.png} -g $FILE -f $1
	export FILEPROP=$(file $FILE -b)
	for PROP in ${FILEPROP/PNG image data,}; do echo ${PROP/,}; done | head -1 | tail -1 > source_textures/${FILE/.png}.imagesize
	for PROP in ${FILEPROP/PNG image data,}; do echo ${PROP/,}; done | head -3 | tail -1 >> source_textures/${FILE/.png}.imagesize
	mv $FILE source_textures/$FILE
	export IMAGE_WIDTH=$(cat source_textures/${FILE/.png}.imagesize | head -1 | tail -1)
	export IMAGE_HEIGHT=$(cat source_textures/${FILE/.png}.imagesize | head -2 | tail -1)
	tools/n64graphics -e source_textures/${FILE/.png} -g ${FILE/.$1.png}.$2.png -f $2 -w $IMAGE_WIDTH -h $IMAGE_HEIGHT
	rm -f source_textures/${FILE/.png}
	rm -f source_textures/${FILE/.png}.imagesize
done
