
void FUN_ram_42037136(int param_1,char *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (param_1 == 0) {
    FUN_ram_42033fd8(1,0x800,1,0x3c07d1cc,0x3c072718,0x9fa);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if (*param_2 == -0x23) {
    param_2 = param_2 + 4;
  }
  bVar1 = *(byte *)(param_1 + 0x163);
  uVar3 = 0;
  if (bVar1 != 0) {
    do {
      if (((int)(uint)(byte)param_2[((int)uVar3 >> 3) + 8] >> (uVar3 & 7) & 1U) != 0) {
        pbVar2 = (byte *)(param_1 + 0x164);
        do {
          if ((*pbVar2 & 0x7f) == uVar3) {
            *pbVar2 = *pbVar2 | 0x80;
          }
          pbVar2 = pbVar2 + 1;
        } while ((int)(pbVar2 + (-0x164 - param_1)) < (int)(uint)bVar1);
      }
      uVar3 = uVar3 + 1;
    } while (uVar3 != 0x7f);
    return;
  }
  FUN_ram_42033fd8(1,0x20,2,0x3c07f950);
  return;
}

