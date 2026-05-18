
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208d43c(uint *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  iVar1 = _DAT_ram_3fcdfb20;
  uVar4 = param_1[1];
  uVar6 = *param_1;
  uVar2 = param_1[2];
  uVar5 = uVar4;
  if ((0x5db < uVar4 - 1) && (uVar5 = _DAT_ram_3fcc42a0, 0x5dc < uVar4)) {
    uVar5 = 0x5dc;
  }
  uVar3 = _DAT_ram_3fcc429c;
  if ((((uVar6 != 0) && (uVar3 = uVar6, uVar5 <= uVar6)) &&
      (uVar3 = _DAT_ram_3fcc429c, 0x5dc < uVar6)) && (uVar4 == 0x5dc)) {
    uVar3 = 0x5dc;
  }
  *(uint *)(_DAT_ram_3fcdfb20 + 0x30) = uVar5;
  *(uint *)(iVar1 + 0x34) = uVar3;
  if (uVar2 - 1 < 0x5dc) {
    *(uint *)(iVar1 + 0x38) = uVar2;
  }
  else if (0x5dc < uVar2) {
    *(undefined4 *)(iVar1 + 0x38) = 0x5dc;
  }
  if (0x78 < (param_2 - 0x1e & 0xff)) {
    if (0x96 < param_2) {
      *(undefined1 *)(iVar1 + 0x118) = 0x96;
    }
    return;
  }
  *(char *)(iVar1 + 0x118) = (char)param_2;
  return;
}

