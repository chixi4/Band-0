
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42047aa6(void)

{
  ushort uVar1;
  undefined4 extraout_a3;
  
  if ((*(char *)(gp + 0x100) != '\0') && (_DAT_ram_3fcb5394 == 0)) {
    uVar1 = *(ushort *)(gp + 0x114);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb555c);
                    /* WARNING: Could not recover jumptable at 0x42047af8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))
              (0x3fcb555c,(uint)uVar1 << 9,0,extraout_a3,&DAT_ram_3fcb5000,
               *(code **)(_DAT_ram_3fcdfdd8 + 0xe0));
    return;
  }
  return;
}

