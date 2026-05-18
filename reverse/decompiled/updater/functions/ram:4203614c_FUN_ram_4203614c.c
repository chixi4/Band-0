
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203614c(int param_1)

{
  uint uVar1;
  
  if (param_1 == 0) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07d19c,0x3c072718,0x14d);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(undefined4 *)(param_1 + 300) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0;
  if (DAT_ram_3fcb5178 != 0) {
    uVar1 = (uint)DAT_ram_3fcb5178 & ~(1 << (uint)(_DAT_ram_3fcb4f84 != param_1));
    DAT_ram_3fcb5178 = (byte)uVar1;
    if (uVar1 == 0) {
      if (DAT_ram_3fcb5177 != '\0') {
        FUN_ram_42035670();
      }
                    /* WARNING: Could not recover jumptable at 0x420361cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb517c);
      return;
    }
  }
  return;
}

