echo "Извлечение ассетов..."
./extract_assets.py us
echo "Конвертирование текстур символов..."
./convert_textures.sh textures/segment2/font_rus x ia1 ..
./convert_textures.sh textures/segment2/font_rus x ia4 ..
./convert_textures.sh textures/segment2 ia4 ia1 .
echo "Разделение текстуры торта концовки на части в PNG..."
tools/skyconv --type cake --split levels/ending/cake.png levels/ending --write-tiles levels/ending
