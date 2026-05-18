
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42049edc(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_ram_4204c0e2(param_3);
  FUN_ram_4204b326();
  iVar1 = (*(code *)&SUB_ram_40011ec4)(param_2);
  if ((iVar1 == 0) && (iVar1 = (*(code *)&SUB_ram_40011e58)(param_1), iVar1 == 0)) {
    FUN_ram_42049686();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x1cc))(0x4202d4ac);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x1c8))(0,0x4202d4ee);
    if (DAT_ram_3fcb3f98 != '\0') {
      FUN_ram_4204994a(1);
    }
  }
  else {
    FUN_ram_42049eb8();
  }
  return iVar1;
}

