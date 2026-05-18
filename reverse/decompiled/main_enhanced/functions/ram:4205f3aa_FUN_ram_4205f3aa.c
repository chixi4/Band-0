
undefined4 FUN_ram_4205f3aa(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = 0x103;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
    if (((*(uint *)(iVar1 + 0x54) & 1) != 0) && (*(int *)(iVar1 + 0x3c) == 1)) {
      thunk_FUN_ram_4205a190(uVar2);
      *(undefined4 *)(iVar1 + 0x3c) = 0;
      FUN_ram_4205ee36(*(undefined4 *)(iVar1 + 8));
    }
    FUN_ram_42053552(uVar2,&DAT_ram_3c0f7590,&DAT_ram_3c0f7590,&DAT_ram_3c0f7590);
    FUN_ram_4205379a(uVar2);
    FUN_ram_420538fe(uVar2);
    if ((*(uint *)(iVar1 + 0x54) & 1) != 0) {
      FUN_ram_4205ee10(iVar1);
    }
    FUN_ram_4205eeb4(iVar1,3);
    uVar2 = 0;
  }
  return uVar2;
}

