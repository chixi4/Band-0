
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42014802(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_ram_4039c438(param_1,0x3c0a85ec);
  if (iVar1 == 0) {
    iVar1 = 0;
    do {
      uVar3 = iVar1 << 1;
      if ((_DAT_ram_3fcc4f34 >> (uVar3 & 0x1f) & 3) == 0) {
        param_2 = param_2 & 3;
        if (param_2 == 2) {
          _DAT_ram_3fcc4f34 = _DAT_ram_3fcc4f34 | 3 << (uVar3 & 0x1f);
          return iVar1;
        }
        if (param_2 == 1) {
          _DAT_ram_3fcc4f34 = _DAT_ram_3fcc4f34 | 2 << (uVar3 & 0x1f);
          return iVar1;
        }
        if (param_2 == 0) {
          _DAT_ram_3fcc4f34 = _DAT_ram_3fcc4f34 | 1 << (uVar3 & 0x1f);
          return iVar1;
        }
        puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
        uVar4 = 0x16;
        goto LAB_ram_42014826;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 != 0x10);
    puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar4 = 0x18;
  }
  else {
    puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar4 = 2;
  }
LAB_ram_42014826:
  *puVar2 = uVar4;
  return -1;
}

