make -C tools n64graphics

mkdir -p $2

for FILE in source_textures/$2/*.$1.png; do
	tools/n64graphics -i ${FILE/.png} -g $FILE -f $1
	export FILEPROP=$(file $FILE -b)
	for PROP in ${FILEPROP/PNG image data,}; do echo ${PROP/,}; done | head -1 | tail -1 > ${FILE/.png}.imagesize
	for PROP in ${FILEPROP/PNG image data,}; do echo ${PROP/,}; done | head -3 | tail -1 >> ${FILE/.png}.imagesize
	export IMAGE_WIDTH=$(cat ${FILE/.png}.imagesize | head -1 | tail -1)
	export IMAGE_HEIGHT=$(cat ${FILE/.png}.imagesize | head -2 | tail -1)
	tools/n64graphics -e ${FILE/.png} -g ${FILE/"source_textures/"} -f $1 -w $IMAGE_WIDTH -h $IMAGE_HEIGHT
	rm -f ${FILE/.png}
	rm -f ${FILE/.png}.imagesize
done
