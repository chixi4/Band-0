
int FUN_ram_4201670c(void)

{
  int iVar1;
  undefined4 auStack_14 [3];
  
  iVar1 = 0x103;
  if ((DAT_ram_3fcc4f98 != '\0') && (iVar1 = FUN_ram_4204beee(0x3c0a86f0,1,auStack_14), iVar1 == 0))
  {
    iVar1 = FUN_ram_4204bfd0(auStack_14[0],0x3c0a87b0,1);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4204c0c8(auStack_14[0]);
    }
    FUN_ram_4204c3d0(auStack_14[0]);
  }
  return iVar1;
}

