
uint FUN_ram_42061af2(undefined4 param_1,int param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte local_74 [76];
  
  uVar1 = FUN_ram_4205e4c2();
  iVar2 = FUN_ram_4205e4ae(param_1);
  iVar3 = FUN_ram_42066304();
  iVar4 = FUN_ram_42066304();
  iVar5 = FUN_ram_42066328(0x3c071c88,1);
  if (((((iVar3 == 0) || (iVar4 == 0)) || (iVar5 == 0)) ||
      ((iVar6 = FUN_ram_420664b2(uVar1,iVar5,iVar4), iVar6 < 0 ||
       (iVar6 = FUN_ram_420665ee(iVar3,iVar4), iVar6 < 0)))) ||
     (iVar6 = FUN_ram_42066436(iVar3,iVar5,iVar3), iVar6 < 0)) {
    FUN_ram_4206636c(iVar3,0);
    iVar3 = 0;
  }
  FUN_ram_4206636c(iVar4,0);
  FUN_ram_4206636c(iVar5,0);
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  iVar4 = FUN_ram_42066304();
  if (((iVar4 != 0) && (iVar5 = FUN_ram_420664f0(param_4,iVar3,uVar1,iVar4), -1 < iVar5)) &&
     (iVar5 = FUN_ram_420664f0(iVar4,iVar3,uVar1,iVar4), -1 < iVar5)) {
    uVar7 = FUN_ram_420665d8(iVar3);
    uVar7 = ~uVar7 & uVar7 - 1;
    for (iVar5 = 0; iVar2 != iVar5; iVar5 = iVar5 + 1) {
      local_74[iVar5] =
           *(byte *)(param_2 + iVar5) ^
           (*(byte *)(param_3 + iVar5) ^ *(byte *)(param_2 + iVar5)) & (byte)((int)uVar7 >> 0x1f);
    }
    iVar2 = FUN_ram_42066328(local_74,iVar2);
    if (iVar2 != 0) {
      iVar5 = FUN_ram_420664f0(iVar4,iVar2,uVar1,iVar4);
      uVar9 = 0xffffffff;
      if (-1 < iVar5) {
        uVar8 = FUN_ram_42066612(iVar4,uVar1);
        uVar7 = (int)uVar7 >> 0x1f & 0xfffffffeU ^ uVar8;
        uVar9 = 0xffffffff;
        if (uVar8 != 0xfffffffe) {
          uVar9 = ((uVar7 ^ 1) - 1 & (uVar7 ^ 0xfffffffe)) >> 0x1f;
        }
      }
      goto LAB_ram_42061b66;
    }
  }
  iVar2 = 0;
  uVar9 = 0xffffffff;
LAB_ram_42061b66:
  FUN_ram_4206636c(iVar4,1);
  FUN_ram_4206636c(iVar3,1);
  FUN_ram_4206636c(iVar2,1);
  return uVar9;
}

