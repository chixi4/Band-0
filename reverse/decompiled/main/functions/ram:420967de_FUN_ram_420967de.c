
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420967de(int param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint *puVar2;
  
  if (param_1 == 0) {
    puVar2 = (uint *)&DAT_ram_60047c34;
    param_3 = _DAT_ram_60047c34 & 0xfffffffb;
    if (param_2 != 0) {
      param_3 = _DAT_ram_60047c34 | 4;
    }
  }
  else {
    if (param_1 != 1) {
      return;
    }
    _DAT_ram_600470e0 = _DAT_ram_600470e0 & 0xffff;
    if (param_2 == 0) {
      uVar1 = ~param_3;
      _DAT_ram_600470dc = uVar1 & _DAT_ram_600470dc;
      param_3 = 0x5000000;
      _DAT_ram_600470d8 = _DAT_ram_600470d8 & uVar1 | 0x5000000;
    }
    else {
      _DAT_ram_600470e0 = _DAT_ram_600470e0 | param_3;
      _DAT_ram_600470d8 = _DAT_ram_600470d8 | param_3;
    }
    puVar2 = (uint *)&DAT_ram_600470dc;
    param_3 = _DAT_ram_600470dc | param_3;
  }
  *puVar2 = param_3;
  return;
}

