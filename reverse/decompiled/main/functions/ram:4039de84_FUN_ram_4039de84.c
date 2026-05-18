
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_ram_4039de84(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar4;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = (uint)*(byte *)(param_1 + 0x1a);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(uVar1 - 1 & 0xff) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar3 = FUN_ram_42093982(uVar1);
  if (iVar3 == 1) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
    iVar3 = gp + 0x604 + uVar1 * 0x14;
    if (*(short *)(iVar3 + 0x10) != 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
      if (*(short *)(iVar3 + 0xe) != 0) {
        *(short *)(iVar3 + 0xe) = *(short *)(iVar3 + 0xe) + -1;
      }
      uVar2 = _DAT_ram_3fcdfdb4;
      *(int *)(uVar1 * 0xc + 0x3fcc466c) = *(int *)(uVar1 * 0xc + 0x3fcc466c) + 1;
      UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfdd8 + 0x58);
      goto LAB_ram_4039df1c;
    }
  }
  else if (iVar3 == 2) {
    (*(code *)&SUB_ram_40010488)(*(undefined4 *)(param_1 + 0x24),0,0x24);
    uVar2 = _DAT_ram_3fcdfdb4;
    UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfdd8 + 0x54);
    *(undefined2 *)(param_1 + 0x14) = 0;
    (*UNRECOVERED_JUMPTABLE)(uVar2);
    uVar2 = _DAT_ram_3fcdfdb4;
    piVar4 = (int *)(gp + 0x604 + uVar1 * 0x14);
    *(int *)(param_1 + 0x20) = *piVar4;
    *piVar4 = param_1;
    *(int *)(uVar1 * 0xc + 0x3fcc466c) = *(int *)(uVar1 * 0xc + 0x3fcc466c) + 1;
    UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfdd8 + 0x58);
LAB_ram_4039df1c:
                    /* WARNING: Could not recover jumptable at 0x4039df28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(uVar2);
    return;
  }
  return;
}

