pushd ./textures/segment2
for file in *.ia4.png; do
cp "$file" "${file%.ia4.png}.ia1.png"
done
popd
