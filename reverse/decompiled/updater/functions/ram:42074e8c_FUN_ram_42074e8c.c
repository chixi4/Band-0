
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42074e8c(void)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 in_a6;
  uint in_a7;
  int in_stack_00000000;
  
  (**(code **)(_DAT_ram_3fcb640c + 0x58))
            (0x62,1,0xb,6,6,1,in_a6,*(code **)(_DAT_ram_3fcb640c + 0x58));
  (**(code **)(_DAT_ram_3fcb640c + 0x48))(0x62,1,0xb);
  (**(code **)(_DAT_ram_3fcb640c + 0x48))(99,1,0);
  uVar1 = (**(code **)(_DAT_ram_3fcb640c + 0x48))(0x6b,0,6);
  uVar2 = 0;
  while( true ) {
    uVar3 = uVar2 & 0xff;
    if (in_a7 <= uVar3) {
      return;
    }
    *(undefined1 *)(in_stack_00000000 + uVar2) = 0;
    if (uVar3 < 0xc) break;
    uVar2 = uVar2 + 1;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(uVar3 * 4 + 0x3fcb1224);
                    /* WARNING: Could not emulate address calculation at 0x42074f8a */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,3,uVar2,UNRECOVERED_JUMPTABLE,99,1,in_a6,6);
  return;
}

