
undefined4 FUN_ram_420214c0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar2 = 0x103;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x10);
    if (((*(uint *)(iVar1 + 0x50) & 1) != 0) && (*(int *)(iVar1 + 0x38) == 1)) {
      thunk_FUN_ram_420574e6(uVar2);
      *(undefined4 *)(iVar1 + 0x38) = 0;
      FUN_ram_4202101c(*(undefined4 *)(iVar1 + 8));
    }
    FUN_ram_42051808(uVar2,&DAT_ram_3c0793d4,&DAT_ram_3c0793d4,&DAT_ram_3c0793d4);
    FUN_ram_42051a34(uVar2);
    FUN_ram_42051b98(uVar2);
    if ((*(uint *)(iVar1 + 0x50) & 1) != 0) {
      FUN_ram_42020ff6(iVar1);
    }
    FUN_ram_4202109a(iVar1,3);
    uVar2 = 0;
  }
  return uVar2;
}

