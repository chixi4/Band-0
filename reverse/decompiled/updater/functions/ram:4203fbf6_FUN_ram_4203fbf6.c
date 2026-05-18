
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203fbf6(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *UNRECOVERED_JUMPTABLE_00;
  
  FUN_ram_4203f87a(1);
  iVar2 = param_1 + 0x18;
  iVar1 = param_1 + 4;
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar2);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar2);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar2,0x4202d6b8,0);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))
            (iVar2,(uint)*(ushort *)(*(int *)(param_1 + 0xe4) + 0x28) *
                   (uint)*(ushort *)(param_1 + 0x20e) * 10,0);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar1);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar1);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar1,0x4202d68e,0);
  if ((*(int *)(_DAT_ram_3fcdfaf0 + 4) != 0) && (*(int *)(_DAT_ram_3fcdfaf0 + 8) == 2)) {
    FUN_ram_42033fd8(1,4,4,0x3c07bb64);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(iVar1,20000,0);
    if (_DAT_ram_3fcb50f0 == 0) {
      return;
    }
    UNRECOVERED_JUMPTABLE_00 = *(code **)(_DAT_ram_3fcb50f0 + 0xc);
LAB_ram_4203fcdc:
    if (UNRECOVERED_JUMPTABLE_00 == (code *)0x0) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x4203fce8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return;
  }
  if (((DAT_ram_3fcb512d - 4 & 0xff) < 10) && ((-0x242 >> (DAT_ram_3fcb512d - 4 & 0x1f) & 1U) == 0))
  {
    if (_DAT_ram_3fcb50ec == 0) {
      return;
    }
    if (*(code **)(_DAT_ram_3fcb50ec + 0xc) == (code *)0x0) {
      return;
    }
    iVar2 = (**(code **)(_DAT_ram_3fcb50ec + 0xc))();
    if (iVar2 == 0) {
      FUN_ram_42033fd8(1,4,4,0x3c07bbd4);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(iVar1,30000,0);
      if (_DAT_ram_3fcb50ec == 0) {
        return;
      }
      UNRECOVERED_JUMPTABLE_00 = *(code **)(_DAT_ram_3fcb50ec + 4);
      goto LAB_ram_4203fcdc;
    }
    FUN_ram_42033fd8(1,4,4,0x3c07bba8);
    uVar3 = 1000;
    UNRECOVERED_JUMPTABLE_00 = *(code **)(_DAT_ram_3fcdfdd8 + 0xe0);
  }
  else {
    FUN_ram_42033fd8(1,4,4,0x3c07bc00);
    UNRECOVERED_JUMPTABLE_00 = *(code **)(_DAT_ram_3fcdfdd8 + 0xe0);
    uVar3 = 10000;
  }
                    /* WARNING: Could not recover jumptable at 0x4203fd40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(iVar1,uVar3,0);
  return;
}

