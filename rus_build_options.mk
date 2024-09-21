VERSION ?= us
ifneq ($(VERSION),us)
  $(error Выполнение сборки русской версии игры Super Mario 64 предназначено только на основе версии США.)
endif

TARGET_N64 ?= 0
ifeq ($(TARGET_N64),1)
  COMPARE ?= 0
  GRUCODE ?= f3dzex
  
  ifeq ($(GRUCODE),f3d_old)
    $(error Невозможно выполнить сборку игры для N64 с этим микрокодом - игра столкнётся.)
  endif
  ifeq ($(GRUCODE),f3d_new)
    $(error Невозможно выполнить сборку игры для N64 с этим микрокодом - игра столкнётся.)
  endif
  ifeq ($(GRUCODE),f3dex2e)
    $(error Невозможно выполнить сборку игры для N64 с этим микрокодом - игра столкнётся.)
  endif
  ifeq ($(GRUCODE),f3dex)
    $(warning При открытии ROMа видеоплагин GlideN64 не поддерживает этот микрокод. Рекомендуется изменить в настройках эмулятора.)
  endif
  ifeq ($(GRUCODE),f3dex2)
    $(warning При открытии ROMа видеоплагин GlideN64 не поддерживает этот микрокод. Рекомендуется изменить в настройках эмулятора.)
  endif
endif

ifeq ($(OSTYPE),msys)
  bash ./msys2_mingw_gcc_downgrade.sh --noconfirm
endif
