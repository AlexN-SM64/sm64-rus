echo "Извлечение ассетов..."
./extract_assets.py us
echo "Разделение текстуры торта концовки на части в PNG..."
tools/skyconv --type cake --split levels/ending/cake.png levels/ending --write-tiles levels/ending
