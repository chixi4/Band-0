
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403a3760(int param_1,int param_2,uint param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  
  if (*(char *)(param_2 + 1) != '\0') {
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))
              (0x5fa,&DAT_ram_3c0f585c,*(char *)(param_2 + 1),0,
               *(code **)(_DAT_ram_3fcdfecc + 0x110));
  }
  if (*(int *)(param_1 + 0xe8) == 0) {
    if (param_3 != 0) {
      uVar1 = 0;
      pcVar7 = *(code **)(_DAT_ram_3fcdfecc + 0x110);
      goto LAB_ram_403a38b2;
    }
LAB_ram_403a38dc:
    *(undefined1 *)(param_2 + 0x22) = param_4;
    *(undefined1 *)(param_2 + 0x23) = 0;
    *(undefined2 *)(param_2 + 0x24) = 0;
    *(byte *)(param_2 + 0x26) = *(byte *)(param_2 + 0x26) & 0xfe;
    iVar5 = *(int *)(param_1 + 0xe8);
    *(undefined2 *)(param_2 + 0x20) = 0;
    uVar1 = 0;
    if (iVar5 == 0) goto LAB_ram_403a37de;
    uVar1 = (uint)*(ushort *)(iVar5 + 0x10);
    if ((*(ushort *)(param_1 + 0xfc) & 0x40) == 0) goto LAB_ram_403a3914;
LAB_ram_403a37ea:
    *(undefined1 *)(param_2 + 0x23) = 0x40;
    if ((*(byte *)(param_1 + 0x108) & 0x10) == 0) {
      iVar5 = 3;
    }
    else {
      iVar5 = 5;
      bVar4 = 0x48;
LAB_ram_403a3802:
      *(byte *)(param_2 + 0x23) = bVar4;
    }
  }
  else {
    uVar1 = (uint)*(ushort *)(*(int *)(param_1 + 0xe8) + 0x10);
    if (uVar1 <= param_3) {
      if ((uVar1 == 0) && (param_3 == 0)) goto LAB_ram_403a38dc;
      pcVar7 = *(code **)(_DAT_ram_3fcdfecc + 0x110);
LAB_ram_403a38b2:
      (*pcVar7)(0x5fc,&DAT_ram_3c0f585c,uVar1,param_3);
    }
    *(undefined1 *)(param_2 + 0x23) = 0;
    *(undefined2 *)(param_2 + 0x24) = 0;
    *(byte *)(param_2 + 0x26) = *(byte *)(param_2 + 0x26) & 0xfe;
    *(undefined1 *)(param_2 + 0x22) = param_4;
    iVar5 = *(int *)(param_1 + 0xe8);
    *(short *)(param_2 + 0x20) = (short)param_3;
    if (iVar5 == 0) {
      uVar1 = param_3 * -0x10000 >> 0x10;
    }
    else {
      uVar1 = *(ushort *)(iVar5 + 0x10) - param_3 & 0xffff;
    }
    if (param_3 != 0) {
      uVar6 = 0xfe;
      iVar5 = 1;
      goto LAB_ram_403a381a;
    }
LAB_ram_403a37de:
    if ((*(ushort *)(param_1 + 0xfc) & 0x40) != 0) goto LAB_ram_403a37ea;
LAB_ram_403a3914:
    iVar5 = (*(byte *)(param_2 + 0x23) != 0) + 1;
    if ((*(byte *)(param_1 + 0x108) & 0x10) != 0) {
      bVar4 = *(byte *)(param_2 + 0x23) | 8;
      iVar5 = 4;
      goto LAB_ram_403a3802;
    }
  }
  if ((short)*(ushort *)(param_1 + 10) < 0) {
    if (*(char *)(param_1 + 0x104) == '\0') {
      uVar2 = *(ushort *)(param_1 + 0x100) + 7;
      uVar6 = uVar2 & 0xffff;
      *(short *)(param_1 + 0x102) = (short)(uVar2 * 0x10000 >> 0x10);
      *(undefined1 *)(param_1 + 0x104) = 1;
    }
    else {
      uVar6 = (uint)*(ushort *)(param_1 + 0x102);
    }
    if ((int)(uint)*(ushort *)(param_1 + 0x100) < (int)(uVar6 - 1)) {
      if (*(char *)(param_2 + 0x23) == '\0') {
        iVar5 = iVar5 + 1;
      }
      iVar5 = iVar5 + 9;
      *(byte *)(param_2 + 0x26) = *(byte *)(param_2 + 0x26) | 1;
      uVar6 = 0xff - iVar5;
      goto LAB_ram_403a381a;
    }
    *(ushort *)(param_1 + 10) = *(ushort *)(param_1 + 10) & 0x7fff;
    FUN_ram_4039c11e(param_1 + 0x10a,param_1 + 0x110,5);
    *(undefined1 *)(param_1 + 0x109) = *(undefined1 *)(param_1 + 0x10f);
    (*(code *)&SUB_ram_40010488)(param_1 + 0x110,0,5);
    *(undefined1 *)(param_1 + 0x10f) = 0;
    *(undefined1 *)(param_1 + 0x104) = 0;
  }
  uVar6 = 0xff - iVar5;
LAB_ram_403a381a:
  if ((int)uVar1 < (int)uVar6) {
    uVar6 = uVar1;
  }
  uVar2 = uVar6 & 0xff;
  *(char *)(param_2 + 0x24) = (char)uVar6;
  iVar3 = iVar5 + uVar2;
  if ((uVar6 & 0xffff) < uVar1) {
    if ((*(byte *)(param_2 + 0x23) == 0) && ((*(byte *)(param_2 + 0x26) & 1) == 0)) {
      iVar5 = iVar5 + 1;
      uVar2 = uVar2 - 1 & 0xff;
    }
    iVar5 = iVar5 + 3;
    uVar1 = uVar2 - 3 & 0xff;
    *(byte *)(param_2 + 0x23) = *(byte *)(param_2 + 0x23) | 0x10;
    *(char *)(param_2 + 0x24) = (char)(uVar2 - 3);
    iVar3 = iVar5 + uVar1;
    if (iVar3 != 0xff) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x110))
                (0x64b,&DAT_ram_3c0f585c,iVar5,uVar1,iVar3,*(code **)(_DAT_ram_3fcdfecc + 0x110));
      iVar3 = iVar5 + (uint)*(byte *)(param_2 + 0x24);
    }
  }
  *(char *)(param_2 + 0x25) = (char)iVar3;
  return;
}

