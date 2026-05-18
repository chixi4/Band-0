
void FUN_ram_4206038c(ushort *param_1,byte *param_2,undefined1 *param_3,int *param_4,byte *param_5)

{
  byte bVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar7;
  
  *param_5 = 0;
  uVar4 = (uint)*param_1;
  bVar1 = *(byte *)((int)param_1 + 1) & 3;
  if ((*param_1 & 0xc) == 8) {
    if (((int)uVar4 >> 4 & 8U) != 0) {
      uVar4 = uVar4 & 0x7f8f;
      puVar3 = param_1 + 0xc;
      if (bVar1 == 3) {
        puVar3 = param_1 + 0xf;
      }
      iVar7 = 1;
      *param_5 = (byte)*puVar3 & 0xf;
      goto LAB_ram_4206040a;
    }
    uVar4 = uVar4 & 0xff8f;
  }
  else if ((*param_1 & 0xc) == 0) {
    *param_5 = 0x10;
  }
  iVar7 = 0;
LAB_ram_4206040a:
  param_3[1] = (byte)((uVar4 & 0xffffc7ff) >> 8) | 0x40;
  *param_3 = (char)(uVar4 & 0xffffc7ff);
  FUN_ram_4039c11e(param_3 + 2,param_1 + 2,0x12);
  uVar4 = (bVar1 == 3) - 1;
  param_3[0x14] = (byte)param_1[0xb] & 0xf;
  param_3[0x15] = 0;
  iVar2 = FUN_ram_4039c11e(param_3 + 0x16,param_1 + 0xc,((uVar4 & 0xfffffffd) + 3 + iVar7) * 2);
  pbVar5 = (byte *)(iVar2 + (uVar4 & 0xfffffffa) + 6);
  pbVar6 = pbVar5;
  if (iVar7 != 0) {
    pbVar5[1] = 0;
    pbVar6 = pbVar5 + 2;
    *pbVar5 = *pbVar5 & 0xf;
  }
  *param_4 = (int)pbVar6 - (int)param_3;
  FUN_ram_4039c11e(param_5 + 1,param_1 + 5,6);
  param_5[7] = param_2[7];
  param_5[8] = param_2[6];
  param_5[9] = param_2[5];
  param_5[10] = param_2[4];
  param_5[0xb] = param_2[1];
  param_5[0xc] = *param_2;
  return;
}

