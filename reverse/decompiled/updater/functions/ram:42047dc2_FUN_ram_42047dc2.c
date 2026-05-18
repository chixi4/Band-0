
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42047dc2(undefined1 param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  if (_DAT_ram_3fcb5368 != (code *)0x0) {
    FUN_ram_42033fd8(6,0x1000,4,0x3c07cec4);
    uVar1 = _DAT_ram_3fcb536c;
    UNRECOVERED_JUMPTABLE = _DAT_ram_3fcb5368;
    _DAT_ram_3fcb5368 = (code *)0x0;
    _DAT_ram_3fcb536c = 0;
                    /* WARNING: Could not recover jumptable at 0x42047e0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar1,param_1);
    return;
  }
  return;
}

