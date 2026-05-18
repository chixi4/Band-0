
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_403973f8(undefined4 param_1,uint param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  uVar3 = _DAT_ram_600c40c8 >> 3 & 3;
  iVar2 = 0xe;
  if (uVar3 != 0) {
    iVar2 = (uVar3 != 1) + 0xf;
  }
  uVar3 = *(uint *)((((param_2 & 0x1fffff) >> iVar2) + 0x18031400) * 4);
  uVar4 = 0;
  if ((uVar3 & 0x40) == 0) {
    uVar1 = FUN_ram_403971b0(param_1,1);
    *param_4 = 1;
    iVar2 = 0xe;
    uVar5 = _DAT_ram_600c40c8 >> 3 & 3;
    if (uVar5 != 0) {
      iVar2 = (uVar5 != 1) + 0xf;
    }
    *param_3 = (uVar3 & 0x3f) << iVar2 | param_2 % uVar1;
    uVar4 = 1;
  }
  return uVar4;
}

