
void FUN_ram_4201c0f6(void)

{
  uint uVar1;
  int iVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  int iStack_18;
  
  if (*(int *)(gp + -0x784) != 2) {
    return;
  }
  iVar2 = FUN_ram_4201f03c();
  if ((iVar2 == 0) && (iVar2 = FUN_ram_420172ac(), iVar2 == 0)) {
    FUN_ram_420b1060(&local_20,0);
    iVar2 = (*(code *)&SUB_ram_40010980)(local_20,uStack_1c,0x3c,0);
    uVar1 = 0xea6a - (iVar2 * 1000 + iStack_18 / 1000);
    if ((0x31 < (int)uVar1) &&
       ((iVar2 = FUN_ram_42048196(8), iVar2 != 0 && (iVar2 = FUN_ram_42048196(1), iVar2 != 0)))) {
      FUN_ram_420485dc(8,4);
      FUN_ram_420485dc(1,4);
      FUN_ram_420b4c84();
      FUN_ram_403960ac(uVar1 * 1000,(int)((ulonglong)uVar1 * 1000 >> 0x20));
      FUN_ram_40395d9a();
      FUN_ram_420b4ae6(4);
      FUN_ram_420b4ae6(7);
      FUN_ram_4204866c(8);
      FUN_ram_4204866c(1);
      return;
    }
  }
  return;
}

