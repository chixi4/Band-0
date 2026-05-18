
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_42073e16(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  short sVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  byte abStack_18 [8];
  
  pbVar4 = *(byte **)(*(int *)(param_2 + 4) + 4);
  uVar7 = **(uint **)(param_2 + 0x24) & 0x8000;
  if (uVar7 == 0) {
    bVar1 = pbVar4[0xc];
    bVar2 = pbVar4[0xd];
  }
  else {
    bVar1 = pbVar4[0x14];
    bVar2 = pbVar4[0x15];
  }
  sVar3 = CONCAT11(bVar2,bVar1);
  if (((sVar3 == -0x7178) || (sVar3 == -0x4b78)) ||
     ((*param_1 == _DAT_ram_3fcc4014 && (sVar3 == 0x608)))) {
LAB_ram_42073e6c:
    thunk_FUN_ram_42094798(param_2,1);
  }
  else {
    if (sVar3 == 8) {
      pbVar6 = pbVar4 + 0x16;
      if ((uVar7 == 0) && (pbVar6 = pbVar4 + 0xe, pbVar4[0x17] == 0x11)) {
        uVar7 = (*(ushort *)(pbVar4 + 0x22) & 0xff) << 8 | (uint)(*(ushort *)(pbVar4 + 0x22) >> 8);
        if ((uVar7 - 0x43 < 2) ||
           ((uVar7 == 0x35 ||
            ((ushort)(*(ushort *)(pbVar4 + 0x24) << 8 | *(ushort *)(pbVar4 + 0x24) >> 8) == 0x35))))
        {
          FUN_ram_4207a038(1,0x40,4,&DAT_ram_3c0fbb18);
          goto LAB_ram_42073e6c;
        }
      }
      uVar5 = (uint)(pbVar6[1] >> 5);
    }
    else {
      uVar5 = 0;
      if (sVar3 == -0x227a) {
        pbVar6 = pbVar4 + 0xe;
        if (uVar7 != 0) {
          pbVar6 = pbVar4 + 0x16;
        }
        uVar7 = (*(code *)&SUB_ram_400108cc)(*(undefined4 *)pbVar6);
        uVar5 = uVar7 >> 0x19 & 7;
      }
    }
    if (((*pbVar4 & 1) == 0) && ((param_1[3] & 2U) != 0)) goto LAB_ram_42073f00;
  }
  uVar5 = 7;
LAB_ram_42073f00:
  abStack_18[0] = 1;
  abStack_18[1] = 5;
  abStack_18[2] = 2;
  abStack_18[3] = 0;
  abStack_18[4] = 3;
  abStack_18[5] = 1;
  abStack_18[6] = 3;
  abStack_18[7] = 1;
  if ((uVar5 == 0) || (uVar5 == 3)) {
    uVar7 = 2;
  }
  else {
    if (uVar5 < 3) {
      return uVar5;
    }
    uVar7 = (uint)(uVar5 < 6);
  }
  do {
    if (*(char *)((int)param_1 + uVar7 * 7 + 0x89) == '\0') {
      return uVar5;
    }
    uVar5 = (uint)abStack_18[uVar7 * 2 + 1];
    uVar7 = (uint)abStack_18[uVar7 * 2];
  } while (uVar7 != 3);
  return uVar5;
}

