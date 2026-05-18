
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4208219a(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined *puVar9;
  uint uVar10;
  char cVar11;
  int *piVar12;
  int iVar13;
  
  if (*(char *)(param_1 + 8) != '\0') {
    if (*(char *)(param_1 + 8) != '\x01') {
      return 0x102;
    }
    if (*(code **)(_DAT_ram_3fcdfb24 + 0x288) == (code *)0x0) {
      return 0x102;
    }
    iVar3 = (**(code **)(_DAT_ram_3fcdfb24 + 0x288))(param_1 + 0x14,DAT_ram_3fcc41d5 == '\0');
    goto LAB_ram_4208255c;
  }
  if ((_DAT_ram_3fcc4014 != 0) && (*(char *)(_DAT_ram_3fcc4014 + 0x128) == '\x01')) {
    FUN_ram_4207a038(1,0xb,1,&DAT_ram_3c0feddc);
    return 0x3006;
  }
  FUN_ram_420864f8();
  bVar1 = **(byte **)(gp + -0xb4);
  iVar3 = FUN_ram_4207e5a8();
  if ((bVar1 & 0xfd) != 1) {
    return 0x3005;
  }
  FUN_ram_4207e5a8();
  iVar4 = FUN_ram_42098a5e(*(undefined4 *)(param_1 + 0x9c));
  if (iVar4 == -1) {
    uVar10 = *(uint *)(param_1 + 0x9c);
    puVar9 = &DAT_ram_3c0fe97c;
LAB_ram_42082248:
    FUN_ram_4207a038(1,3,1,puVar9,uVar10);
    return 0x102;
  }
  if (-1 < *(char *)(param_1 + 0x88)) {
    *(undefined1 *)(param_1 + 0x88) = 0x81;
  }
  if (*(short *)(param_1 + 0x80) == 0) {
    *(undefined2 *)(param_1 + 0x80) = 3;
  }
  uVar10 = *(uint *)(param_1 + 0x8c);
  if (0x10 < uVar10) {
    puVar9 = &DAT_ram_3c0fe9a4;
    goto LAB_ram_42082248;
  }
  iVar4 = param_1 + 0x34;
  uVar5 = (*(code *)&SUB_ram_400104a8)(iVar4);
  if ((7 < uVar5) && (uVar10 == 0)) {
    FUN_ram_4207a038(1,2,2,
                     "z/1VVQFVUBVVV///8PQBChH19gIBigJB/0P/9E0DDzIAFx8DMgASU////+VV8AUTBzIAL+APigIJxP///5W9b//m/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                    );
    *(undefined4 *)(param_1 + 0x8c) = 3;
  }
  if ((*(char *)(param_1 + 0x34) == '\0') && (*(int *)(param_1 + 0x8c) != 0)) {
    FUN_ram_4207a038(1,2,2,
                     "/////jIAL9ADMgALs/lX/V//Vb////0LZAAvwIAyAAuzVW//V/lX/////A8yAD+B0D9eAQlR5VW//5WaB8/4H//0P//v//8D9B8yAAhz5VVlv//VViEDn/Q//8L//gf8BzIAAAKHAYJX//Vb9b//9VYCEn8yAHz8D/8C0FVVGgQEMgBh/v/1v//9ZAARQN0Eb8L/8C//gH4ECbH/9b/+q1V////9AjIAb4P/wD//0zIAAAEQA/8K/1f////1aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                    );
  }
  if ((*(ushort *)(param_1 + 0x96) & 0x10) != 0) {
    if (*(char *)(param_1 + 0x34) == '\0') {
      iVar7 = FUN_ram_4208e578(*(uint *)(param_1 + 0x8c) & 0xff);
      iVar8 = FUN_ram_4208e578(9);
      if (iVar7 <= iVar8) goto LAB_ram_4208230e;
    }
    uVar6 = (*(code *)&SUB_ram_400104a8)(iVar4);
    FUN_ram_4207a038(1,2,2,
                     "aVVb5Vb//+AL///0L/4D/wD//14BCv8E+VVVVW/9VVv9AD////gAAAf8AzIACdKX///1VVq////lX/wBTgMyD/0PMgAEqgwNAgAR9i0MMf5v/jYGQ+qq//9mAg8CAP//5VD//////w=="
                     ,*(undefined4 *)(param_1 + 0x8c),uVar6);
  }
LAB_ram_4208230e:
  if ((*(ushort *)(param_1 + 0x96) & 4) != 0) {
    *(byte *)(param_1 + 0x96) = *(byte *)(param_1 + 0x96) & 0xfc | 3;
  }
  if (*(char *)(param_1 + 0x94) == '\0') {
    *(undefined1 *)(param_1 + 0x94) = 1;
  }
  iVar7 = FUN_ram_4207e5a8();
  iVar13 = param_1 + 0x14;
  cVar11 = '\x01';
  cVar2 = FUN_ram_42098a5e(*(undefined4 *)(param_1 + 0x9c));
  iVar8 = FUN_ram_4039c0e0(iVar7 + 8,iVar13,0x20);
  if (((iVar8 == 0) && (iVar8 = FUN_ram_4039c0e0(iVar7 + 0x2f,iVar4,0x40), iVar8 == 0)) &&
     ((cVar11 = *(char *)(param_1 + 0x78), cVar11 == '\0' ||
      (iVar8 = FUN_ram_4039c0e0(iVar7 + 0x93,param_1 + 0x79,6), iVar8 == 0)))) {
    if (*(char *)(iVar7 + 0x92) == cVar11) {
      if ((((((*(char *)(param_1 + 0x7f) == '\0') ||
             (cVar11 = '\x01', *(char *)(iVar7 + 0x90) == *(char *)(param_1 + 0x7f))) &&
            (cVar11 = '\x01', (uint)*(byte *)(iVar7 + 0x35c) == *(uint *)(param_1 + 0x74))) &&
           (((uint)*(byte *)(iVar7 + 0x35d) == *(uint *)(param_1 + 0x84) &&
            ((uint)*(byte *)(iVar7 + 0x35f) == *(uint *)(param_1 + 0x8c))))) &&
          ((*(char *)(iVar7 + 0x35e) == *(char *)(param_1 + 0x88) &&
           ((*(short *)(iVar7 + 0x9a) == *(short *)(param_1 + 0x80) &&
            (*(char *)(iVar7 + 0x360) == *(char *)(param_1 + 0x94))))))) &&
         (((*(char *)(iVar7 + 0x361) == *(char *)(param_1 + 0x95) &&
           ((((uVar10 = *(uint *)(param_1 + 0x94),
              (uint)*(byte *)(iVar7 + 0x362) == (uVar10 >> 0x10 & 1) &&
              ((uint)*(byte *)(iVar7 + 0x364) == (uVar10 >> 0x12 & 1))) &&
             ((uint)*(byte *)(iVar7 + 0x414) == (uVar10 >> 0x13 & 1))) &&
            (((uint)*(byte *)(iVar7 + 0x415) == (uVar10 >> 0x14 & 1) &&
             ((uint)*(byte *)(iVar7 + 0x416) == (uVar10 >> 0x15 & 1))))))) &&
          (((*(char *)(iVar7 + 0x448) == *(char *)(param_1 + 0xa4) &&
            ((*(char *)(iVar7 + 0x417) == cVar2 &&
             ((uint)*(byte *)(iVar7 + 0x418) == *(uint *)(param_1 + 0xa0))))) &&
           (iVar8 = FUN_ram_4039c0e0(iVar7 + 0x451,param_1 + 0xab,0x20), iVar8 == 0)))))) {
        cVar11 = (uint)*(byte *)(iVar7 + 0x363) != (uVar10 >> 0x11 & 1);
      }
    }
    else {
      cVar11 = '\x01';
    }
  }
  iVar7 = FUN_ram_4039c0e0(iVar3 + 8,iVar13,0x20);
  if ((iVar7 != 0) || ((*(ushort *)(param_1 + 0x96) & 0x20) == 0)) {
    DAT_ram_3fcc4259 = 0;
    _DAT_ram_3fcc4252 = 0;
  }
  iVar7 = iVar3 + 0xa4;
  uVar10 = 0;
  do {
    uVar5 = uVar10 & 0xff;
    iVar8 = FUN_ram_4039c0e0(iVar7,iVar13,0x20);
    if (iVar8 == 0) {
      iVar4 = FUN_ram_4039c0e0(uVar10 * 0x8c + 0xc4 + iVar3,iVar4,0x40);
      if (iVar4 == 0) {
        DAT_ram_3fcc4220 = 0;
        iVar3 = FUN_ram_4207fde2(uVar10 * 0x8c + 0x10b + iVar3);
        if (iVar3 == 0) {
          DAT_ram_3fcc41c2 = 1;
        }
        else {
          DAT_ram_3fcc41c2 = 0;
        }
      }
      else {
        if (*(code **)(_DAT_ram_3fcc4178 + 0x68) != (code *)0x0) {
          (**(code **)(_DAT_ram_3fcc4178 + 0x68))();
        }
        DAT_ram_3fcc41c2 = 1;
        DAT_ram_3fcc4220 = 1;
      }
      if (cVar11 == '\0') goto LAB_ram_42082510;
      goto LAB_ram_42082556;
    }
    uVar10 = uVar10 + 1;
    iVar7 = iVar7 + 0x8c;
  } while (uVar10 != 5);
  DAT_ram_3fcc4220 = 1;
  DAT_ram_3fcc41c2 = 1;
  piVar12 = (int *)(iVar3 + 0xa0);
  uVar5 = 0;
  do {
    if (*piVar12 + 1U < 2) goto LAB_ram_42082556;
    uVar5 = uVar5 + 1 & 0xff;
    piVar12 = piVar12 + 0x23;
  } while (uVar5 != 5);
  if (DAT_ram_3fcc3045 == '\x05') {
    DAT_ram_3fcc3045 = '\0';
  }
  iVar3 = FUN_ram_42080234(iVar13,DAT_ram_3fcc3045);
  DAT_ram_3fcc3045 = DAT_ram_3fcc3045 + '\x01';
LAB_ram_4208255c:
  if (iVar3 == 0) {
LAB_ram_42082510:
    if (_DAT_ram_3fcc4178 != 0) {
      (**(code **)(_DAT_ram_3fcc4178 + 0x58))();
    }
    iVar3 = 0;
  }
  return iVar3;
LAB_ram_42082556:
  iVar3 = FUN_ram_42080234(iVar13,uVar5);
  goto LAB_ram_4208255c;
}

