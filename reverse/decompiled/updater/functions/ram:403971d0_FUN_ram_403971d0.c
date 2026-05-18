
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_403971d0(undefined4 param_1,uint param_2,int param_3,int param_4,uint *param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  
  FUN_ram_40397142(param_2,1);
  iVar2 = 0xe;
  uVar3 = _DAT_ram_600c40c8 >> 3 & 3;
  if (uVar3 != 0) {
    iVar2 = (uVar3 != 1) + 0xf;
  }
  puVar1 = (uint *)&DAT_ram_600c5000;
  iVar5 = 0;
  while ((((*puVar1 & 0x40) != 0 || (param_3 != 1)) || (param_2 >> iVar2 != (*puVar1 & 0x3f)))) {
    iVar5 = iVar5 + 1;
    puVar1 = puVar1 + 1;
    if (iVar5 == 0x40) {
      return 0;
    }
  }
  uVar3 = FUN_ram_403971b0(param_1,1);
  uVar4 = _DAT_ram_600c40c8 >> 3 & 3;
  if (uVar4 == 0) {
    iVar2 = 0xe;
  }
  else {
    iVar2 = (uVar4 != 1) + 0xf;
  }
  uVar4 = 0x42000000;
  if (param_4 == 1) {
    uVar4 = 0x3c000000;
  }
  *param_5 = param_2 % uVar3 | iVar5 << iVar2 | uVar4;
  return 1;
}

