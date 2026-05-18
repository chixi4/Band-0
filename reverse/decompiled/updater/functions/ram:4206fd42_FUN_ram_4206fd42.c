
undefined4 FUN_ram_4206fd42(int *param_1,undefined1 *param_2,undefined1 *param_3,int *param_4)

{
  short sVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  short *psVar6;
  undefined1 *puVar7;
  
  *param_4 = 0;
  if (param_3 < param_2) {
    return 0xffff9600;
  }
  if ((int)param_3 - (int)param_2 < 6) {
LAB_ram_4206fd52:
    uVar3 = 0xffff9600;
  }
  else {
    puVar7 = param_2 + 6;
    psVar6 = *(short **)(*param_1 + 0x50);
    uVar3 = 0xffffa180;
    puVar2 = puVar7;
    if (psVar6 != (short *)0x0) {
      for (; sVar1 = *psVar6, sVar1 != 0; psVar6 = psVar6 + 1) {
        if ((param_1[2] == 0x303) && (iVar4 = FUN_ram_4206e878(sVar1), iVar4 != 0)) {
          if ((param_3 < puVar2) || ((int)param_3 - (int)puVar2 < 2)) goto LAB_ram_4206fd52;
          *puVar2 = (char)((ushort)sVar1 >> 8);
          puVar2[1] = (char)sVar1;
          puVar2 = puVar2 + 2;
        }
      }
      uVar3 = 0xffff9400;
      if (puVar2 != puVar7) {
        uVar5 = (int)puVar2 - (int)puVar7 & 0xffff;
        param_2[1] = 0xd;
        param_2[2] = (char)(uVar5 + 2 >> 8);
        param_2[3] = (char)((uVar5 + 2) * 0x100 >> 8);
        param_2[4] = (char)(uVar5 >> 8);
        *param_2 = 0;
        param_2[5] = (char)uVar5;
        *param_4 = (int)puVar2 - (int)param_2;
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}

