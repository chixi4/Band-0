
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40394ee6(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = _DAT_ram_600c0058;
  uVar2 = _DAT_ram_600c0058 >> 10 & 3;
  uVar1 = 1;
  if (uVar2 == 1) goto LAB_ram_40394f3e;
  if (uVar2 == 2) {
    uVar4 = 0x14;
    uVar3 = 0x14;
  }
  else if (uVar2 == 0) {
    uVar3 = FUN_ram_40390f58();
    uVar1 = (uVar4 & 0x3ff) + 1;
    uVar4 = uVar3 / uVar1;
  }
  else {
    do {
      FUN_ram_4039bf1e();
LAB_ram_40394f3e:
      if ((_DAT_ram_600c0008 & 3) == 0) {
        uVar4 = 0x50;
        uVar1 = 6;
        goto LAB_ram_40394f52;
      }
    } while ((_DAT_ram_600c0008 & 3) != uVar2);
    uVar4 = 0x78;
    uVar1 = 4;
LAB_ram_40394f52:
    uVar3 = 0x1e0;
  }
  param_1[2] = uVar1;
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[3] = uVar4;
  return;
}

