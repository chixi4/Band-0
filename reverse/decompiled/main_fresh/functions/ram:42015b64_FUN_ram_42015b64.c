
int FUN_ram_42015b64(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uStack_14;
  
  iVar1 = 0x103;
  if ((DAT_ram_3fcc4f98 != '\0') && (iVar1 = FUN_ram_4204beee(0x3c0a86f0,1,&uStack_14), iVar1 == 0))
  {
    iVar1 = FUN_ram_4204bfd0(uStack_14,param_1,param_2);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4204c0c8(uStack_14);
    }
    FUN_ram_4204c3d0(uStack_14);
  }
  return iVar1;
}

