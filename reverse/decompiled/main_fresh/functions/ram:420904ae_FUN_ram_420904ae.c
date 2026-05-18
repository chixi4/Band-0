
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420904ae(void)

{
  ushort uVar1;
  undefined4 extraout_a3;
  
  if ((*(char *)(gp + 0x234) != '\0') && (_DAT_ram_3fcc4424 == 0)) {
    uVar1 = *(ushort *)(gp + 0x248);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc45ec);
                    /* WARNING: Could not recover jumptable at 0x42090500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))
              (0x3fcc45ec,(uint)uVar1 << 9,0,extraout_a3,&DAT_ram_3fcc4000,
               *(code **)(_DAT_ram_3fcdfdd8 + 0xe0));
    return;
  }
  return;
}

