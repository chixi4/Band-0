
int FUN_ram_4204bdec(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_14 [8];
  
  iVar1 = FUN_ram_4204eefa();
  if (iVar1 == 0) {
    FUN_ram_4204eeda(auStack_14);
    iVar1 = FUN_ram_42049518();
    if (iVar1 != 0x40014001) {
      FUN_ram_4204bd24();
    }
    uVar2 = FUN_ram_4204e970();
    iVar1 = FUN_ram_4204ebd2(uVar2,param_1);
    FUN_ram_4204eeea(auStack_14);
  }
  return iVar1;
}

