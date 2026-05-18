
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42079016(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint auStack_34 [3];
  
  uVar1 = (*(code *)&SUB_ram_40011d54)(2);
  auStack_34[0] = 0;
  do {
    if (uVar1 == 0) {
      return;
    }
    uVar2 = (*(code *)&SUB_ram_400108ec)(uVar1);
    uVar3 = 1 << (uVar2 & 0x1f);
    uVar1 = uVar1 & ~uVar3;
    if ((int)uVar2 < 5) {
      if (*(char *)(_DAT_ram_3ff4fbbc + uVar2 * 0x28 + 0x12) == '\x01') {
        (*(code *)&SUB_ram_40011d6c)(uVar2 & 0xff,auStack_34);
        (*(code *)&SUB_ram_40011d58)(2,uVar3);
        FUN_ram_40392eec(10,((auStack_34[0] & 0xf000) != 0) + '\x02');
        uVar1 = auStack_34[0] >> 0xc & 0xf;
        if (uVar1 < 6) {
                    /* WARNING: Could not emulate address calculation at 0x4207910a */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(uVar1 * 4 + 0x3c0791d0))();
          return;
        }
        FUN_ram_42033fd8(6,0x800,1,0x3c07def4,0x3c072f4c,0x3c07926c,0x627);
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
    }
    (*(code *)&SUB_ram_40011d58)(2,uVar3);
    FUN_ram_42033fd8(6,0x40,3,0x3c07ee08,*(undefined1 *)(_DAT_ram_3ff4fbbc + uVar2 * 0x28 + 0x12),
                     uVar2);
  } while( true );
}

