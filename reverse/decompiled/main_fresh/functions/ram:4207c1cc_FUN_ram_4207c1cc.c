
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207c1cc(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe7a8,&DAT_ram_3c0c426c,0x14d);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0;
  if (DAT_ram_3fcc4208 != 0) {
    uVar1 = (uint)DAT_ram_3fcc4208 & ~(1 << (uint)(_DAT_ram_3fcc4014 != param_1));
    DAT_ram_3fcc4208 = (byte)uVar1;
    if (uVar1 == 0) {
      if (DAT_ram_3fcc4207 != '\0') {
        FUN_ram_4207b6f0();
      }
                    /* WARNING: Could not recover jumptable at 0x4207c24c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc420c);
      return;
    }
  }
  return;
}

