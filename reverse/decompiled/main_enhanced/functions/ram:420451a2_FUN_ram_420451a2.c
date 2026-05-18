
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420451a2(void)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  int iVar2;
  code *in_a4;
  int in_a5;
  
  iVar1 = _DAT_ram_3fcdff6c;
  UNRECOVERED_JUMPTABLE = *(code **)(in_a5 + -0x5ec);
  iVar2 = (*in_a4)();
                    /* WARNING: Could not recover jumptable at 0x420451c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (iVar1 + 0x2c,iVar1 + 0x28,*(undefined4 *)(iVar2 + 0x18),*(undefined4 *)(iVar2 + 0x1c));
  return;
}

