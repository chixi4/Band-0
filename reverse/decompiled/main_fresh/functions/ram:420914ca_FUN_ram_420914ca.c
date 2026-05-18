
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420914ca(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (DAT_ram_3fcc440e == '\0') {
    return 0;
  }
  if (DAT_ram_3fcc440f == '\0') {
    return 0;
  }
  if (DAT_ram_3fcc4410 != '\0') {
    return 0;
  }
  if (DAT_ram_3fcc441a == '\0') {
LAB_ram_420914f8:
    DAT_ram_3fcc441b = 1;
    uVar1 = 1;
  }
  else {
    if (DAT_ram_3fcc4401 == '\x02') {
      FUN_ram_4039e2da(0);
    }
    if ((DAT_ram_3fcc4415 == '\0') && (param_2 == 0)) {
      iVar2 = FUN_ram_42092cdc(1);
      if (iVar2 != 0) {
        DAT_ram_3fcc4415 = '\x01';
        FUN_ram_420912c8(0,1);
      }
      uVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
      iVar3 = FUN_ram_42090d9e((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),5000);
      if (iVar3 != 0) {
        FUN_ram_42090632(0);
        return 3;
      }
      if (iVar2 == 0) goto LAB_ram_420914f8;
    }
    else {
      DAT_ram_3fcc4415 = '\x01';
      FUN_ram_420912c8(0,1);
    }
    uVar1 = 2;
  }
  return uVar1;
}

