
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203ac64(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0xc);
  if (iVar2 == 0) {
    FUN_ram_42033fd8(1,1,2,0x3c07fdac);
    iVar1 = 0x102;
  }
  else {
    (*(code *)&SUB_ram_40010488)(&DAT_ram_3fcb4f74,0,0x26c);
    DAT_ram_3fcb511a = 1;
    DAT_ram_3fcb5144 = 1;
    DAT_ram_3fcb5132 = 1;
    DAT_ram_3fcb5145 = *(int *)(iVar2 + 0x60) == 0;
    _DAT_ram_3fcb51a0 = 0x400;
    DAT_ram_3fcb5174 = 1;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xdc))(&DAT_ram_3fcb513e,0);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xdc))(&DAT_ram_3fcb5138,1);
    iVar1 = FUN_ram_42038e54();
    if ((((iVar1 == 0) && (iVar1 = FUN_ram_4203ab42(iVar2), iVar1 == 0)) &&
        (iVar1 = FUN_ram_4203ab0a(), iVar1 == 0)) && (iVar1 = FUN_ram_4203ab04(iVar2), iVar1 == 0))
    {
      DAT_ram_3fcb5119 = 1;
    }
    else {
      FUN_ram_4203ac44();
    }
  }
  return iVar1;
}

