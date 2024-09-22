# This script needs to downgrade GCC version for MSYS2 MinGW32/MinGW64/UCRT64 from latest version to 13.2.0-6
# to solve error building armips and compiling some of them.
# After upgrading MSYS2 and its packages, including GCC, you need to downgrade them again.
# Or you need to ignore them and upgrade MSYS2 and its packages using:
#
# pacman -Syu --ignore mingw-w64-x86_64-gcc --ignore mingw-w64-x86_64-gcc-libs --ignore mingw-w64-i686-gcc --ignore mingw-w64-i686-gcc-libs --ignore mingw-w64-ucrt-x86_64-gcc --ignore mingw-w64-ucrt-x86_64-gcc-libs

if [ $OSTYPE = msys ]; then

if (pacman -Q mingw-w64-x86_64-gcc); then
export MINGW64_PAKS="https://repo.msys2.org/mingw/mingw64/mingw-w64-x86_64-gcc-13.2.0-6-any.pkg.tar.zst https://repo.msys2.org/mingw/mingw64/mingw-w64-x86_64-gcc-libs-13.2.0-6-any.pkg.tar.zst"
fi
if (pacman -Q mingw-w64-i686-gcc); then
export MINGW32_PAKS="https://repo.msys2.org/mingw/mingw32/mingw-w64-i686-gcc-13.2.0-6-any.pkg.tar.zst https://repo.msys2.org/mingw/mingw32/mingw-w64-i686-gcc-libs-13.2.0-6-any.pkg.tar.zst"
fi
if (pacman -Q mingw-w64-ucrt-x86_64-gcc); then
export UCRT_PAKS="https://repo.msys2.org/mingw/ucrt64/mingw-w64-ucrt-x86_64-gcc-13.2.0-6-any.pkg.tar.zst https://repo.msys2.org/mingw/ucrt64/mingw-w64-ucrt-x86_64-gcc-libs-13.2.0-6-any.pkg.tar.zst"
fi

pacman -U $1 $MINGW64_PAKS $MINGW32_PAKS $UCRT_PAKS

exit 0

else

echo "The MSYS2 is only available on Windows."
exit 1

fi
