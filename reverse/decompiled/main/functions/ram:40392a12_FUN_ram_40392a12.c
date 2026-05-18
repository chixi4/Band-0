
undefined4 FUN_ram_40392a12(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = param_1[1];
  puVar1 = *(undefined4 **)(iVar4 + 4);
  if (puVar1 == param_1) {
    uVar2 = 0x102;
    if (param_2 == -1) {
      uVar3 = FUN_ram_403927bc(iVar4);
      if ((uVar3 & puVar1[2] & 0xfffff) != 0) {
        FUN_ram_403975e0(*puVar1,0);
        uVar3 = FUN_ram_403927bc(iVar4);
        if (((uVar3 & puVar1[2] & 0xfffff) != 0) &&
           (iVar4 = FUN_ram_403975e0(*puVar1,0xffffffff), iVar4 == 0)) {
          return 0x107;
        }
      }
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x103;
  }
  return uVar2;
}

