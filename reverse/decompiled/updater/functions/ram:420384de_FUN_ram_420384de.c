
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420384de(void)

{
  undefined4 uVar1;
  
  if ((_DAT_ram_3fcb3f74 == 0) || (DAT_ram_3fcb5145 != '\0')) {
    return 0;
  }
  if ((*(int *)(gp + -0x2b8) != 0) && (*(int *)(*(int *)(gp + -0x2b8) + 0x410) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x4203850c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 300))();
    return uVar1;
  }
  return 0xffffffff;
}

