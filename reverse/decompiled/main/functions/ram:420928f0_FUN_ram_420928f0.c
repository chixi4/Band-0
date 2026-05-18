
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420928f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  FUN_ram_42094b0a(param_3);
  FUN_ram_42093d3e();
  iVar1 = (*(code *)&SUB_ram_40011ec4)(param_2);
  if ((iVar1 == 0) && (iVar1 = (*(code *)&SUB_ram_40011e58)(param_1), iVar1 == 0)) {
    FUN_ram_4209208e();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x1cc))(0x420750ae);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x1c8))(0,0x420750f0);
    if (DAT_ram_3fcc3020 != '\0') {
      FUN_ram_42092352(1);
    }
  }
  else {
    FUN_ram_420928cc();
  }
  return iVar1;
}

