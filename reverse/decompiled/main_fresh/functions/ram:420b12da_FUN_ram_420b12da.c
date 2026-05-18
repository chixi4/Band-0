
/* WARNING: Removing unreachable block (ram,0x420b14f0) */
/* WARNING: Removing unreachable block (ram,0x420b1512) */
/* WARNING: Removing unreachable block (ram,0x420b14fa) */
/* WARNING: Removing unreachable block (ram,0x420b14fc) */

int FUN_ram_420b12da(undefined4 *param_1,int *param_2,byte *param_3,int *param_4)

{
  byte *pbVar1;
  int iVar2;
  bool bVar3;
  int *piVar4;
  int *piStack_94;
  uint uStack_90;
  int iStack_8c;
  undefined4 uStack_88;
  int iStack_84;
  int iStack_7c;
  byte bStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_4d;
  undefined4 uStack_38;
  
  if (((*(ushort *)(param_2 + 3) & 0x80) != 0) && (param_2[4] == 0)) {
    iVar2 = FUN_ram_4039c0d0(param_1,0x40);
    *param_2 = iVar2;
    param_2[4] = iVar2;
    if (iVar2 == 0) {
      *param_1 = 0xc;
      return -1;
    }
    param_2[5] = 0x40;
  }
  uStack_77 = 0x20;
  iStack_7c = 0;
  uStack_76 = 0x30;
  piStack_94 = param_4;
  pbVar1 = param_3;
  do {
    for (; (*param_3 != 0 && (*param_3 != 0x25)); param_3 = param_3 + 1) {
    }
    if (param_3 != pbVar1) {
      iVar2 = FUN_ram_420b11d4(param_1,param_2,pbVar1,(int)param_3 - (int)pbVar1);
      if (iVar2 == -1) {
LAB_ram_420b1538:
        if ((*(ushort *)(param_2 + 3) & 0x40) != 0) {
          return -1;
        }
        return iStack_7c;
      }
      iStack_7c = iStack_7c + ((int)param_3 - (int)pbVar1);
    }
    if (*param_3 == 0) goto LAB_ram_420b1538;
    uStack_90 = 0;
    iStack_84 = 0;
    iStack_8c = -1;
    uStack_88 = 0;
    uStack_4d = 0;
    uStack_38 = 0;
    pbVar1 = param_3 + 1;
    while( true ) {
      iVar2 = (*(code *)&SUB_ram_400104fc)(" can help ground your ideas.",*pbVar1,5);
      param_3 = pbVar1 + 1;
      if (iVar2 == 0) break;
      uStack_90 = 1 << (iVar2 + 0xc3f3aa70U & 0x1f) | uStack_90;
      pbVar1 = param_3;
    }
    if ((uStack_90 & 0x10) != 0) {
      uStack_4d = 0x20;
    }
    if ((uStack_90 & 8) != 0) {
      uStack_4d = 0x2b;
    }
    if (*pbVar1 == 0x2a) {
      piVar4 = piStack_94 + 1;
      iVar2 = *piStack_94;
      piStack_94 = piVar4;
      if (iVar2 < 0) {
        uStack_90 = uStack_90 | 2;
        iVar2 = -iVar2;
      }
    }
    else {
      bVar3 = false;
      param_3 = pbVar1;
      iVar2 = iStack_84;
      while( true ) {
        if (9 < *param_3 - 0x30) break;
        bVar3 = true;
        iVar2 = iVar2 * 10 + (*param_3 - 0x30);
        param_3 = param_3 + 1;
      }
      if (!bVar3) {
        iVar2 = iStack_84;
      }
    }
    iStack_84 = iVar2;
    if (*param_3 == 0x2e) {
      if (param_3[1] == 0x2a) {
        param_3 = param_3 + 2;
        piVar4 = piStack_94 + 1;
        iVar2 = *piStack_94;
        piStack_94 = piVar4;
        if (iVar2 < 0) {
          iVar2 = -1;
        }
      }
      else {
        iStack_8c = 0;
        bVar3 = false;
        iVar2 = 0;
        while( true ) {
          param_3 = param_3 + 1;
          if (9 < *param_3 - 0x30) break;
          bVar3 = true;
          iVar2 = iVar2 * 10 + (*param_3 - 0x30);
        }
        if (!bVar3) goto LAB_ram_420b1498;
      }
      iStack_8c = iVar2;
    }
LAB_ram_420b1498:
    iVar2 = (*(code *)&SUB_ram_400104fc)("p ground your ideas.",*param_3,3);
    if (iVar2 != 0) {
      uStack_90 = uStack_90 | 0x40 << (iVar2 + 0xc3f3aa68U & 0x1f);
      param_3 = param_3 + 1;
    }
    bStack_78 = *param_3;
    param_3 = param_3 + 1;
    iVar2 = (*(code *)&SUB_ram_400104fc)("ound your ideas.",bStack_78,6);
    if (iVar2 == 0) {
      iVar2 = (*(code *)&SUB_ram_40010684)(param_1,&uStack_90,param_2,0x420a11d4,&piStack_94);
    }
    else {
      iVar2 = (*(code *)&SUB_ram_400106c8)(param_1,&uStack_90,param_2,0x420a11d4,&piStack_94);
    }
    if (iVar2 == -1) goto LAB_ram_420b1538;
    iStack_7c = iStack_7c + iVar2;
    pbVar1 = param_3;
  } while( true );
}

