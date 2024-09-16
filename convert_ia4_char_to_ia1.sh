# Этот скрипт позволяет конвертировать текстуры больших символов из IA4 в IA1.
pushd ./textures/segment2
for texture in *.ia4.png; do
echo "Конвертирование в IA1: $texture -> output.${texture%.ia4.png}.ia1.inc.c"
../../tools/n64graphics -s u8 -i output.${texture%.ia4.png}.ia1.inc.c -g $texture -f ia1
done
popd
