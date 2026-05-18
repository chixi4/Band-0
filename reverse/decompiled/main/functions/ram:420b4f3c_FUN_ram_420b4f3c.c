
undefined4 FUN_ram_420b4f3c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_30 [28];
  
  iVar2 = param_1[1];
  iVar3 = *param_1;
  if ((((iVar3 < iVar2) || (iVar1 = FUN_ram_40394e84(iVar2,auStack_30), iVar1 == 0)) ||
      ((iVar1 = FUN_ram_4039097c(), iVar2 < iVar1 / 1000000 && (iVar2 < 2)))) ||
     (iVar1 = FUN_ram_40394e84(iVar3,auStack_30), iVar1 == 0)) {
    return 0x102;
  }
  iVar1 = FUN_ram_40390938();
  iVar1 = iVar1 / 1000000;
  if (iVar1 < 0x50) {
    iVar1 = 0x50;
  }
  if (iVar3 < iVar1) {
    iVar1 = iVar3;
  }
  if (iVar1 < iVar2) {
    iVar1 = iVar2;
  }
  FUN_ram_420b4a0a(*param_1,param_1[1],(char)param_1[2]);
  FUN_ram_40396966();
  iVar3 = FUN_ram_40394e84(iVar3,0x3fcc1d00);
  if (((iVar3 != 0) && (iVar3 = FUN_ram_40394e84(iVar1,0x3fcc1cf0), iVar3 != 0)) &&
     (iVar2 = FUN_ram_40394e84(iVar2,0x3fcc1ce0), iVar2 != 0)) {
    FUN_ram_4039c11e(0x3fcc1cd0,0x3fcc1ce0,0x10);
    if ((char)param_1[2] == '\0') {
      if (DAT_ram_3fcc51b1 != '\0') {
        FUN_ram_420b4ae6(4);
      }
    }
    else {
      FUN_ram_403960ac(0,0);
      FUN_ram_420b4abc();
    }
    DAT_ram_3fcc51b1 = (char)param_1[2];
    DAT_ram_3fcc51b0 = 1;
    FUN_ram_40396994();
    FUN_ram_40391c00(3);
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

