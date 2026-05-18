
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_403994d6(undefined4 param_1,uint param_2,int param_3,int param_4,uint *param_5)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = FUN_ram_40399448(param_2,1);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4039bf1e();
  }
  iVar3 = 0xe;
  uVar4 = _DAT_ram_600c40c8 >> 3 & 3;
  if (uVar4 != 0) {
    iVar3 = (uVar4 != 1) + 0xf;
  }
  puVar2 = (uint *)&DAT_ram_600c5000;
  iVar6 = 0;
  while ((((*puVar2 & 0x40) != 0 || (param_3 != 1)) || (param_2 >> iVar3 != (*puVar2 & 0x3f)))) {
    iVar6 = iVar6 + 1;
    puVar2 = puVar2 + 1;
    if (iVar6 == 0x40) {
      return 0;
    }
  }
  uVar4 = FUN_ram_403994b6(param_1,1);
  uVar5 = _DAT_ram_600c40c8 >> 3 & 3;
  if (uVar5 == 0) {
    iVar3 = 0xe;
  }
  else {
    iVar3 = (uVar5 != 1) + 0xf;
  }
  uVar5 = 0x42000000;
  if (param_4 == 1) {
    uVar5 = 0x3c000000;
  }
  *param_5 = param_2 % uVar4 | iVar6 << iVar3 | uVar5;
  return iVar1;
}

