
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42025bd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_a4;
  
  iVar1 = FUN_ram_420251f2();
  if (iVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x42025bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)*_DAT_ram_3fcb6b54)
                      (2,param_1,*(undefined2 *)(param_1 + 0x10),0,extraout_a4,
                       (code *)*_DAT_ram_3fcb6b54);
    return uVar2;
  }
  (*(code *)&SUB_ram_40011a08)(param_1);
  return 0xffffffff;
}

