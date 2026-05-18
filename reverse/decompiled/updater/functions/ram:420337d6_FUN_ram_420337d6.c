
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420337d6(undefined4 param_1)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar2;
  
  iVar1 = _DAT_ram_3fcdfb1c;
  UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfb1c + 0x18);
  uVar2 = *(undefined4 *)(_DAT_ram_3fcdfb1c + 0x10);
  (*(code *)&SUB_ram_40010488)(_DAT_ram_3fcdfb1c + 4,0,0x18);
  *(undefined1 *)(iVar1 + 4) = 0xff;
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x42033820. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar2,param_1);
    return;
  }
  return;
}

