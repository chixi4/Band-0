
void FUN_ram_420367bc(void)

{
  int unaff_s0;
  int iVar1;
  int unaff_s2;
  
  if (unaff_s0 != 0) {
    if (((*(byte *)(unaff_s0 + 0x34) & 2) == 0) &&
       (((*(short *)(unaff_s0 + 0x40) != 0 && (*(int *)(unaff_s0 + 0x44) - unaff_s2 < 1)) ||
        (iVar1 = FUN_ram_420299fc(unaff_s0 + 0x54), iVar1 < 1)))) {
      FUN_ram_4202ef08();
    }
    FUN_ram_420367bc();
    return;
  }
  thunk_FUN_ram_4202b7f6();
  return;
}

