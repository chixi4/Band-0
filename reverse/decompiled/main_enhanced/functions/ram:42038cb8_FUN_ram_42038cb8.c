
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42038cb8(int param_1,uint param_2,int param_3,int param_4,undefined1 *param_5,
                    byte *param_6)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  uVar7 = param_3 - param_4;
  uVar9 = uVar7 & 0xffff;
  if ((int)(uVar7 * 0x10000) < 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))(0x9c4,&DAT_ram_3c0f5878);
  }
  uVar5 = param_2 & 1;
  if ((param_2 & 2) == 0) {
    if (param_4 == 0) {
      iVar3 = 3;
      bVar2 = 8;
LAB_ram_42038d12:
      if ((param_2 & 0x20) == 0) {
        iVar3 = iVar3 + 6;
        bVar2 = bVar2 | 1;
      }
      if ((param_2 & 6) == 4) {
        iVar3 = iVar3 + 6;
        bVar2 = bVar2 | 2;
      }
      if ((param_2 & 0x40) == 0) {
        iVar4 = iVar3;
        if ((*(byte *)(param_1 + 0x108) & 2) != 0) goto LAB_ram_42038d52;
        if (bVar2 == 0) {
          uVar6 = 0xffU - iVar3;
          if ((int)uVar9 < (int)(0xffU - iVar3)) {
            uVar6 = uVar9;
          }
          uVar7 = uVar6 & 0xff;
          iVar8 = iVar3 + uVar7;
          if ((uVar5 != 0) || (uVar9 <= (uVar6 & 0xffff))) goto LAB_ram_42038db6;
          goto LAB_ram_42038e08;
        }
        iVar4 = iVar3 + 1;
        uVar6 = 0xff - iVar4;
      }
      else {
        bVar2 = bVar2 | 0x40;
        iVar4 = iVar3 + 1;
        if ((*(byte *)(param_1 + 0x108) & 2) == 0) {
          iVar4 = iVar3 + 2;
          uVar6 = 0xff - iVar4;
        }
        else {
LAB_ram_42038d52:
          iVar4 = iVar4 + 0x13;
          bVar2 = bVar2 | 0x20;
          uVar6 = 0xff - iVar4;
        }
      }
      uVar1 = uVar6;
      if ((int)uVar9 <= (int)uVar6) {
        uVar6 = uVar9;
        uVar1 = uVar7;
      }
      uVar7 = uVar1 & 0xff;
      iVar8 = iVar4 + uVar7;
      if ((uVar5 != 0) || (uVar9 <= (uVar6 & 0xffff))) goto LAB_ram_42038db6;
    }
    else {
      if (uVar9 < 0xfc) {
        uVar7 = uVar7 & 0xff;
        uVar6 = uVar9;
      }
      else {
        uVar7 = 0xfb;
        uVar6 = 0xfb;
      }
      if ((uVar5 != 0) || (bVar2 = 8, uVar9 <= uVar6)) {
        bVar2 = 8;
        iVar8 = uVar7 + 4;
        goto LAB_ram_42038db6;
      }
      iVar4 = 4;
    }
  }
  else {
    if (param_4 == 0) {
      iVar3 = 1;
      bVar2 = 0;
      goto LAB_ram_42038d12;
    }
    if (uVar9 < 0xff) {
      uVar7 = uVar7 & 0xff;
      uVar6 = uVar9;
    }
    else {
      uVar7 = 0xfe;
      uVar6 = 0xfe;
    }
    if ((uVar5 != 0) || (uVar9 <= uVar6)) {
      bVar2 = 0;
      iVar8 = uVar7 + 1;
      goto LAB_ram_42038db6;
    }
    iVar3 = 1;
LAB_ram_42038e08:
    iVar4 = iVar3 + 1;
    uVar7 = uVar7 - 1 & 0xff;
    bVar2 = 0;
  }
  uVar7 = uVar7 - 3 & 0xff;
  iVar8 = iVar4 + 3 + uVar7;
  bVar2 = bVar2 | 0x10;
  if (iVar8 != 0xff) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0xa10,&DAT_ram_3c0f5878,iVar4 + 3,uVar7,uVar5,*(code **)(_DAT_ram_3fcdfecc + 0x110));
  }
LAB_ram_42038db6:
  *param_5 = (char)uVar7;
  *param_6 = bVar2;
  return iVar8;
}

