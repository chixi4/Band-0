
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208d44a(uint *param_1,uint param_2,uint *param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint in_a7;
  
  iVar1 = _DAT_ram_3fcdfb20;
  uVar6 = *param_1;
  uVar2 = param_1[2];
  uVar3 = *param_3;
  uVar5 = param_4;
  if ((0x5db < in_a7) && (uVar5 = param_3[1], 0x5dc < param_4)) {
    uVar5 = 0x5dc;
  }
  uVar4 = uVar3;
  if ((((uVar6 != 0) && (uVar4 = uVar6, uVar5 <= uVar6)) && (uVar4 = uVar3, 0x5dc < uVar6)) &&
     (param_4 == 0x5dc)) {
    uVar4 = 0x5dc;
  }
  *(uint *)(_DAT_ram_3fcdfb20 + 0x30) = uVar5;
  *(uint *)(iVar1 + 0x34) = uVar4;
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

