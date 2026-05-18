
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42094686(uint param_1,uint param_2)

{
  int iVar1;
  
  FUN_ram_420944bc();
  iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if (iVar1 != 0) {
    if ((param_2 < _DAT_ram_3fcc447c) ||
       ((_DAT_ram_3fcc447c == param_2 && (param_1 < _DAT_ram_3fcc4478)))) {
      if ((_DAT_ram_3fcc447c - param_2 != (uint)(_DAT_ram_3fcc4478 < _DAT_ram_3fcc4478 - param_1))
         || (4999 < _DAT_ram_3fcc4478 - param_1)) goto LAB_ram_420946d8;
    }
                    /* WARNING: Could not recover jumptable at 0x42094708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x19c))(1);
    return;
  }
LAB_ram_420946d8:
                    /* WARNING: Could not recover jumptable at 0x420946f2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x198))(1,0,_DAT_ram_3fcc4470 - param_1);
  return;
}

