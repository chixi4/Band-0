
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420172c6(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (DAT_ram_3fcc4fae == '\0') {
    return 0x103;
  }
  if (_DAT_ram_3fcc4fb8 == 0) {
    return 0x103;
  }
  if (*(short *)(gp + -0x7a4) == -1) {
    return 0x103;
  }
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    if (iVar1 == 0) {
      return 0;
    }
    uVar3 = 1;
    if (iVar1 == 1) {
      uStack_18._0_2_ = (ushort)*(byte *)((int)param_1 + 6);
      uStack_18 = (uint)CONCAT12((char)(short)param_1[1],(ushort)uStack_18);
      uStack_14 = 0;
      iVar2 = FUN_ram_42023b12(_DAT_ram_3fcc4fb8,0,1,&uStack_18,8);
      if (iVar2 != 0) {
        return iVar2;
      }
      FUN_ram_40398498(5);
      uVar3 = 8;
      uStack_18 = 0;
      uStack_14 = 0;
    }
    else if (iVar1 == 2) {
      uStack_18._0_2_ = (short)param_1[1];
      iVar2 = FUN_ram_42023b12(_DAT_ram_3fcc4fb8,0,2,&uStack_18,2);
      if (iVar2 != 0) {
        return iVar2;
      }
      FUN_ram_40398498(5);
      uStack_18 = (uint)uStack_18._2_2_ << 0x10;
      uVar3 = 2;
    }
    else {
      if (iVar1 != 3) {
        return 0x102;
      }
      uStack_18._0_1_ = (char)(short)param_1[1];
      iVar2 = FUN_ram_42023b12(_DAT_ram_3fcc4fb8,0,3,&uStack_18,1);
      if (iVar2 != 0) {
        return iVar2;
      }
      FUN_ram_40398498(5);
      uStack_18 = (uint)uStack_18._1_3_ << 8;
    }
    iVar1 = FUN_ram_42023b12(_DAT_ram_3fcc4fb8,0,iVar1,&uStack_18,uVar3);
    return iVar1;
  }
  return 0;
}

