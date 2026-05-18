
int FUN_ram_420167b4(undefined4 param_1)

{
  int iVar1;
  undefined4 auStack_14 [2];
  
  iVar1 = 0x103;
  if ((DAT_ram_3fcc4f98 != '\0') && (iVar1 = FUN_ram_4204beee(0x3c0a86f0,1,auStack_14), iVar1 == 0))
  {
    iVar1 = FUN_ram_4204bfd0(auStack_14[0],0x3c0a87bc,param_1);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4204c0c8(auStack_14[0]);
    }
    FUN_ram_4204c3d0(auStack_14[0]);
  }
  return iVar1;
}

