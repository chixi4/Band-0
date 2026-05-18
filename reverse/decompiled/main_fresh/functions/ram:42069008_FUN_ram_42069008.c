
undefined4 FUN_ram_42069008(uint *param_1,int *param_2,uint param_3)

{
  uint *puVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    uVar2 = 0xfffffff4;
  }
  else {
    uVar2 = 0xfffffff6;
    if (-1 < (int)param_3) {
      uVar5 = 0;
      if ((param_3 != 1) && (*(ushort *)((int)param_2 + 6) != 0)) {
        puVar3 = (uint *)*param_2;
        if (param_3 == 2) {
          uVar5 = *puVar3 & 1;
        }
        else {
          puVar4 = puVar3 + *(ushort *)((int)param_2 + 6);
          uVar5 = 0;
          do {
            puVar1 = puVar4 + -1;
            puVar4 = puVar4 + -1;
            uVar5 = (*puVar1 & 0xffff | (uVar5 << 0x10 | *puVar1 >> 0x10) % param_3 << 0x10) %
                    param_3;
          } while (puVar3 != puVar4);
          if (((short)param_2[1] < 0) && (uVar5 != 0)) {
            uVar5 = param_3 - uVar5;
          }
        }
      }
      *param_1 = uVar5;
      return 0;
    }
  }
  return uVar2;
}

