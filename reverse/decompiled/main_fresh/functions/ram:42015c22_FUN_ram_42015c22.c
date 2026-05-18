
bool FUN_ram_42015c22(void)

{
  int iVar1;
  char cStack_15;
  undefined4 auStack_14 [3];
  
  iVar1 = FUN_ram_4204beee(0x3c0a86f0,0,auStack_14);
  if (iVar1 == 0) {
    cStack_15 = '\0';
    iVar1 = FUN_ram_4204c1dc(auStack_14[0],0x3c0a871c,&cStack_15);
    FUN_ram_4204c3d0(auStack_14[0]);
    if (iVar1 == 0) {
      return cStack_15 != '\x01';
    }
  }
  return true;
}

