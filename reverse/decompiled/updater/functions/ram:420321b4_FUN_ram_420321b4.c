
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420321b4(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(_DAT_ram_3fcb50e8 + 0x5c))(0x13);
  if (iVar1 == 0) {
    FUN_ram_42033fd8(1,0x200,1,0x3c07cf88);
  }
  else {
    FUN_ram_40399daa(param_1,iVar1,DAT_ram_3fcb36cc);
    param_1 = param_1 + (uint)DAT_ram_3fcb36cc;
  }
  return param_1;
}

