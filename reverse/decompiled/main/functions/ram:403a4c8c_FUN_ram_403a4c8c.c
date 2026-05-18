
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_403a4c8c(undefined4 param_1,int param_2,byte *param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
  if (*(short *)(param_2 + 0xc) == 0) {
    (**(code **)(_DAT_ram_3fcdfed0 + 0x130))(param_1,1);
    uVar1 = 0;
    if ((*param_3 & 0xf) == 7) {
                    /* WARNING: Could not recover jumptable at 0x403a4cea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(_DAT_ram_3fcdfed0 + 0x148))(param_3,param_2,param_4);
      return uVar1;
    }
  }
  else {
    (**(code **)(_DAT_ram_3fcdfed0 + 0x130))(param_1,0);
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

