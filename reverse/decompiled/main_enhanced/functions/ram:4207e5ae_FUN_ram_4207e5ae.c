
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4207e5ae(void)

{
  undefined4 uVar1;
  
  if ((_DAT_ram_3fcc2ffc == 0) || (DAT_ram_3fcc41d5 != '\0')) {
    return 0;
  }
  if ((*(int *)(gp + -0xb4) != 0) && (*(int *)(*(int *)(gp + -0xb4) + 0x410) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x4207e5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 300))();
    return uVar1;
  }
  return 0xffffffff;
}

