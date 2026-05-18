
undefined4 FUN_ram_420b339c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 0x102;
  }
  puVar1 = (undefined4 *)FUN_ram_4039c08e(1,0x18);
  if (puVar1 == (undefined4 *)0x0) {
    return 0x101;
  }
  iVar2 = FUN_ram_40397076(*param_1,0x10,0);
  puVar1[1] = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_ram_4039731c(4);
    puVar1[4] = iVar2;
    if (iVar2 != 0) {
      iVar2 = param_1[1];
      puVar1[5] = 0;
      if (iVar2 == 0) {
        *puVar1 = &DAT_ram_3c0c39bc;
        puVar1[2] = 0;
LAB_ram_420b341c:
        puVar1[3] = 0;
        *param_2 = puVar1;
        return 0;
      }
      iVar2 = FUN_ram_40398e0e(FUN_ram_420a36a2,iVar2,param_1[3],puVar1,param_1[2],puVar1 + 2,
                               param_1[4]);
      if (iVar2 == 1) {
        *puVar1 = param_1[1];
        goto LAB_ram_420b341c;
      }
      uVar3 = 0xffffffff;
      goto LAB_ram_420b344a;
    }
  }
  uVar3 = 0x101;
LAB_ram_420b344a:
  if (puVar1[1] != 0) {
    FUN_ram_4039782c();
  }
  if (puVar1[4] != 0) {
    FUN_ram_4039782c();
  }
  thunk_FUN_ram_40390634(puVar1);
  return uVar3;
}

