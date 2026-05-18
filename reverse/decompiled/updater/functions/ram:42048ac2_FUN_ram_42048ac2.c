
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42048ac2(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (DAT_ram_3fcb537e == '\0') {
    return 0;
  }
  if (DAT_ram_3fcb537f == '\0') {
    return 0;
  }
  if (DAT_ram_3fcb5380 != '\0') {
    return 0;
  }
  if (DAT_ram_3fcb538a == '\0') {
LAB_ram_42048af0:
    DAT_ram_3fcb538b = 1;
    uVar1 = 1;
  }
  else {
    if (DAT_ram_3fcb5371 == '\x02') {
      FUN_ram_4039bf06(0);
    }
    if ((DAT_ram_3fcb5385 == '\0') && (param_2 == 0)) {
      iVar2 = FUN_ram_4204a2c4(1);
      if (iVar2 != 0) {
        DAT_ram_3fcb5385 = '\x01';
        FUN_ram_420488c0(0,1);
      }
      uVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
      iVar3 = FUN_ram_42048396((int)uVar4,(int)((ulonglong)uVar4 >> 0x20),5000);
      if (iVar3 != 0) {
        FUN_ram_42047c2a(0);
        return 3;
      }
      if (iVar2 == 0) goto LAB_ram_42048af0;
    }
    else {
      DAT_ram_3fcb5385 = '\x01';
      FUN_ram_420488c0(0,1);
    }
    uVar1 = 2;
  }
  return uVar1;
}

