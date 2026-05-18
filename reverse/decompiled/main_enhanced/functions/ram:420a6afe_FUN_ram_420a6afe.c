
undefined4 FUN_ram_420a6afe(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_28 [8];
  undefined1 auStack_20 [16];
  
  iVar3 = *(int *)(param_1 + 0x94);
  if ((iVar3 != 0) && (*(int *)(iVar3 + -8) != 1)) {
    FUN_ram_4039c11e(auStack_28,*(undefined4 *)(param_1 + 0x98));
    FUN_ram_4039c11e(auStack_20,*(undefined4 *)(param_1 + 0xa4));
    FUN_ram_420a6940(iVar3);
    FUN_ram_420a68b0(param_1,0);
    puVar1 = (undefined4 *)FUN_ram_4206d7ce(1,0x2d);
    if (puVar1 == (undefined4 *)0x0) {
      return 0xffff8100;
    }
    puVar1[1] = 0x25;
    *puVar1 = 0;
    uVar2 = FUN_ram_4039c11e(puVar1 + 2,auStack_28,0x18);
    FUN_ram_420a68b0(param_1,uVar2);
    *(undefined4 *)(*(int *)(param_1 + 0x94) + -8) = 1;
  }
  return 0;
}

