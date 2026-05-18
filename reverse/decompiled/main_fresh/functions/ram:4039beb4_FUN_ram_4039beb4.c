
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039beb4(void)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_a3;
  
  iVar1 = _DAT_ram_3fcc4014;
  if ((((_DAT_ram_3fcc4014 != 0) && (*(int *)(_DAT_ram_3fcc4014 + 0xe4) != 0)) &&
      (*(int *)(_DAT_ram_3fcc4014 + 0x98) == 5)) && (*(char *)(_DAT_ram_3fcc4014 + 0x94) == '\0')) {
    iVar2 = _DAT_ram_3fcc4014 + 0x18;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
                    /* WARNING: Could not recover jumptable at 0x4039bf12. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))
              (iVar2,(uint)*(ushort *)(iVar1 + 0x20e) * 1000,0,extraout_a3,1000,
               *(code **)(_DAT_ram_3fcdfdd8 + 0xe0));
    return;
  }
  return;
}

