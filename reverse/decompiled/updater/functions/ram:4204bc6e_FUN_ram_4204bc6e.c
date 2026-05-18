
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204bc6e(uint param_1,uint param_2)

{
  int iVar1;
  
  FUN_ram_4204baa4();
  iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if (iVar1 != 0) {
    if ((param_2 < _DAT_ram_3fcb53ec) ||
       ((_DAT_ram_3fcb53ec == param_2 && (param_1 < _DAT_ram_3fcb53e8)))) {
      if ((_DAT_ram_3fcb53ec - param_2 != (uint)(_DAT_ram_3fcb53e8 < _DAT_ram_3fcb53e8 - param_1))
         || (4999 < _DAT_ram_3fcb53e8 - param_1)) goto LAB_ram_4204bcc0;
    }
                    /* WARNING: Could not recover jumptable at 0x4204bcf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x19c))(1);
    return;
  }
LAB_ram_4204bcc0:
                    /* WARNING: Could not recover jumptable at 0x4204bcda. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x198))(1,0,_DAT_ram_3fcb53e0 - param_1);
  return;
}

