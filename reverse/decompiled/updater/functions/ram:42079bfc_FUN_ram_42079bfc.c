
undefined4 FUN_ram_42079bfc(undefined4 *param_1,undefined4 *param_2)

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
  puVar1 = (undefined4 *)FUN_ram_40399d1a(1,0x18);
  if (puVar1 == (undefined4 *)0x0) {
    return 0x101;
  }
  iVar2 = FUN_ram_40395430(*param_1,0x10,0);
  puVar1[1] = iVar2;
  if (iVar2 != 0) {
    iVar2 = FUN_ram_403956a4(4);
    puVar1[4] = iVar2;
    if (iVar2 != 0) {
      iVar2 = param_1[1];
      puVar1[5] = 0;
      if (iVar2 == 0) {
        *puVar1 = 0x3c071e68;
        puVar1[2] = 0;
LAB_ram_42079c7c:
        puVar1[3] = 0;
        *param_2 = puVar1;
        return 0;
      }
      iVar2 = FUN_ram_40396cc4(0x42069eec,iVar2,param_1[3],puVar1,param_1[2],puVar1 + 2,param_1[4]);
      if (iVar2 == 1) {
        *puVar1 = param_1[1];
        goto LAB_ram_42079c7c;
      }
      uVar3 = 0xffffffff;
      goto LAB_ram_42079caa;
    }
  }
  uVar3 = 0x101;
LAB_ram_42079caa:
  if (puVar1[1] != 0) {
    FUN_ram_40395af2();
  }
  if (puVar1[4] != 0) {
    FUN_ram_40395af2();
  }
  thunk_FUN_ram_40390608(puVar1);
  return uVar3;
}

