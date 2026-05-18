
void FUN_ram_4207895a(int param_1,int param_2,short param_3)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(param_1 + 0x24);
  *puVar2 = *puVar2 | 0x480000;
  uVar1 = puVar2[1];
  *(short *)(param_1 + 0x16) = param_3 - *(short *)(param_1 + 0x14);
  puVar2[1] = (uint)(byte)uVar1;
  if (0xf < (byte)((char)puVar2[3] - 0x10U)) {
    FUN_ram_42033fd8(6,0x800,1,0x3c07de1c,0x3c072f44,0xb47);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  (*(code *)&SUB_ram_40011bd0)();
  **(uint **)(param_2 + 8) = **(uint **)(param_2 + 8) | 0x40000000;
  *(undefined4 *)(*(int *)(param_1 + 0x24) + 0x18) =
       *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x18);
  return;
}

