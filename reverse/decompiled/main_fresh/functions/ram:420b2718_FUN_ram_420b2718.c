
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_ram_420b2718(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint auStack_34 [3];
  
  uVar1 = (*(code *)&SUB_ram_40011d54)(2);
  auStack_34[0] = 0;
  while( true ) {
    if (uVar1 == 0) {
      return;
    }
    uVar2 = (*(code *)&SUB_ram_400108ec)(uVar1);
    uVar3 = 1 << (uVar2 & 0x1f);
    uVar1 = uVar1 & ~uVar3;
    if (((int)uVar2 < 5) && (*(char *)(_DAT_ram_3ff4fbbc + uVar2 * 0x28 + 0x12) == '\x01')) break;
    (*(code *)&SUB_ram_40011d58)(2,uVar3);
    FUN_ram_4207a038(6,0x40,3,
                     "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..." /* TRUNCATED STRING LITERAL */
                     ,*(undefined1 *)(_DAT_ram_3ff4fbbc + uVar2 * 0x28 + 0x12),uVar2);
  }
  (*(code *)&SUB_ram_40011d6c)(uVar2 & 0xff,auStack_34);
  (*(code *)&SUB_ram_40011d58)(2,uVar3);
  FUN_ram_40393cee(10,((auStack_34[0] & 0xf000) != 0) + '\x02');
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(auStack_34[0] >> 0xc & 0xf) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    FUN_ram_4207a038(6,0x800,1,&DAT_ram_3c0ff70c,&DAT_ram_3c0c4a54,&DAT_ram_3c0fac88,0x627);
  }
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

