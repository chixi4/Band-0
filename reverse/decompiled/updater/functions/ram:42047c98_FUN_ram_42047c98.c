
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42047c98(void)

{
  undefined1 uVar1;
  
  DAT_ram_3fcb54d8 = *(char *)(gp + 0x108);
  uVar1 = 0;
  if (DAT_ram_3fcb54d8 != '\0') {
    DAT_ram_3fcb54f0 = *(undefined1 *)(gp + 0x109);
    DAT_ram_3fcb54f1 = 0;
    _DAT_ram_3fcb54f6 = (ushort)*(byte *)(gp + 0x10a);
    DAT_ram_3fcb54f2 = *(undefined1 *)(gp + 0x10b);
    DAT_ram_3fcb54f3 = *(undefined1 *)(gp + 0x10c);
    uVar1 = DAT_ram_3fcb54f2;
  }
  _DAT_ram_3fcb54f8 = 0x3fcb534c;
                    /* WARNING: Could not recover jumptable at 0x42047cfa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))
            (0x3fcb534c,0x42037a2e,&DAT_ram_3fcb5370,uVar1,&DAT_ram_3fcb5370,
             *(code **)(_DAT_ram_3fcdfdd8 + 0xec));
  return;
}

