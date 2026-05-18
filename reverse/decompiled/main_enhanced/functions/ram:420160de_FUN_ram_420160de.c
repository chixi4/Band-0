
int FUN_ram_420160de(uint param_1)

{
  int iVar1;
  undefined4 auStack_14 [2];
  
  iVar1 = 0x103;
  if (((DAT_ram_3fcc4f98 != '\0') && (iVar1 = 0x102, param_1 < 0x10)) &&
     (iVar1 = FUN_ram_4204beee(0x3c0a86f0,1,auStack_14), iVar1 == 0)) {
    iVar1 = FUN_ram_4204bfd0(auStack_14[0],0x3c0a876c,param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4204c0c8(auStack_14[0]);
      FUN_ram_4204c3d0(auStack_14[0]);
      if (iVar1 == 0) {
        *(char *)(gp + -0x7b2) = (char)param_1;
        DAT_ram_3fcc4f94 = 1;
      }
    }
    else {
      FUN_ram_4204c3d0();
    }
  }
  return iVar1;
}

