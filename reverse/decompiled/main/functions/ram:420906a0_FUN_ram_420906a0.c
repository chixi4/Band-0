
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420906a0(void)

{
  undefined1 uVar1;
  
  DAT_ram_3fcc4568 = *(char *)(gp + 0x23c);
  uVar1 = 0;
  if (DAT_ram_3fcc4568 != '\0') {
    DAT_ram_3fcc4580 = *(undefined1 *)(gp + 0x23d);
    DAT_ram_3fcc4581 = 0;
    _DAT_ram_3fcc4586 = (ushort)*(byte *)(gp + 0x23e);
    DAT_ram_3fcc4582 = *(undefined1 *)(gp + 0x23f);
    DAT_ram_3fcc4583 = *(undefined1 *)(gp + 0x240);
    uVar1 = DAT_ram_3fcc4582;
  }
  _DAT_ram_3fcc4588 = 0x3fcc43d8;
                    /* WARNING: Could not recover jumptable at 0x42090702. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))
            (0x3fcc43d8,0x42080436,&DAT_ram_3fcc4400,uVar1,&DAT_ram_3fcc4400,
             *(code **)(_DAT_ram_3fcdfdd8 + 0xec));
  return;
}

