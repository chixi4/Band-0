
undefined4 FUN_ram_4207d0b6(int *param_1,char *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if ((param_1 == (int *)0x0) || (iVar4 = *param_1, iVar4 == 0)) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe7d0,&DAT_ram_3c0c426c,0x9c3);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar3 = (uint)*(byte *)(iVar4 + 0x13b);
  iVar5 = 0;
  if ((((*(uint *)(iVar4 + 0x134) & 0x800000) != 0) && (iVar5 = 0x26, 2 < uVar3)) &&
     (iVar5 = 0x4c, uVar3 == 3)) {
    iVar5 = 0x34;
  }
  (*(code *)&SUB_ram_40010488)((int)param_1 + 0x163,0,0x80);
  if (param_2 != (char *)0x0) {
    if (*param_2 == -0x23) {
      param_2 = param_2 + 4;
    }
    uVar2 = 0;
    do {
      if (((int)(uint)(byte)param_2[((int)uVar2 >> 3) + 5] >> (uVar2 & 7) & 1U) != 0) {
        bVar1 = *(byte *)((int)param_1 + 0x163);
        if (bVar1 == 0x7f) {
          return 0;
        }
        if ((int)uVar2 < 0x20) {
          if ((int)uVar2 < (int)(uVar3 << 3)) goto LAB_ram_4207d1a0;
        }
        else if (uVar2 == 0x20) {
          if ((*(uint *)(iVar4 + 0x134) & 0x1000000) != 0) {
LAB_ram_4207d1a0:
            *(byte *)((int)param_1 + 0x163) = bVar1 + 1;
            *(char *)((int)param_1 + bVar1 + 0x164) = (char)uVar2;
          }
        }
        else if ((int)uVar2 <= iVar5) goto LAB_ram_4207d1a0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 0x7f);
  }
  return 0;
}

