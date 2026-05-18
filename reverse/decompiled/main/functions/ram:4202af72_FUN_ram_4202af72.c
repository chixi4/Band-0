
undefined4 FUN_ram_4202af72(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [180];
  
  (*(code *)&SUB_ram_40011acc)(auStack_d0,param_1,0x10);
  iVar1 = FUN_ram_42035bb0(auStack_c0,auStack_d0);
  if (iVar1 != 0) {
    (*(code *)&SUB_ram_40011acc)(auStack_d0,param_2,0x10);
    iVar1 = FUN_ram_42035c8e(param_3,auStack_d0,auStack_c0);
    if (iVar1 != 0) {
      (*(code *)&SUB_ram_40011ad0)(param_3,0x10);
      return 0;
    }
  }
  return 0x11;
}

