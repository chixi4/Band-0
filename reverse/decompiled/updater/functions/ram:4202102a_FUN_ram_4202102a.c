
undefined4 FUN_ram_4202102a(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  uVar3 = 0x102;
  if ((iVar1 != 0) && (uVar3 = 0x5004, *(int *)(iVar1 + 0x38) != 1)) {
    iVar2 = *(int *)(iVar1 + 0x10);
    FUN_ram_4202101c(*(undefined4 *)(iVar1 + 8));
    FUN_ram_42020fde();
    if ((iVar2 == 0) || ((*(byte *)(iVar2 + 0x39) & 1) == 0)) {
      *(undefined4 *)(iVar1 + 0x38) = 0;
    }
    else {
      *(undefined4 *)(iVar2 + 4) = 0;
      *(undefined4 *)(iVar2 + 8) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      FUN_ram_42020ff6(iVar1);
      iVar2 = FUN_ram_42057258(iVar2);
      if (iVar2 != 0) {
        return 0x5003;
      }
      *(undefined4 *)(iVar1 + 0x38) = 1;
    }
    uVar3 = 0;
  }
  return uVar3;
}

