
uint FUN_ram_42015aaa(undefined4 param_1,uint param_2)

{
  int iVar1;
  char cStack_15;
  undefined4 auStack_14 [2];
  
  if ((DAT_ram_3fcc4f98 != '\0') && (iVar1 = FUN_ram_4204beee(0x3c0a86f0,0,auStack_14), iVar1 == 0))
  {
    cStack_15 = (char)param_2;
    iVar1 = FUN_ram_4204c1dc(auStack_14[0],param_1,&cStack_15);
    FUN_ram_4204c3d0(auStack_14[0]);
    if (iVar1 == 0) {
      param_2 = (uint)(cStack_15 == '\x01');
    }
  }
  return param_2;
}

