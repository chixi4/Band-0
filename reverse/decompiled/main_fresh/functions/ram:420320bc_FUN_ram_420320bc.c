
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420320bc(void)

{
  short sVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short *psVar9;
  undefined1 auStack_24 [2];
  undefined2 uStack_22;
  
  auStack_24[0] = 0x10;
  uStack_22 = 0x2803;
  thunk_FUN_ram_4202b7dc();
  iVar5 = FUN_ram_420319ca();
  iVar4 = 0xf;
  if (iVar5 != 0) {
    FUN_ram_420318f6();
    iVar4 = FUN_ram_4202add4();
    if (iVar4 == 0) {
      iVar4 = FUN_ram_42031998();
      piVar2 = _DAT_ram_3fcb6bb8;
      if (iVar4 == 0) {
        if (*(ushort *)(_DAT_ram_3fcb6b88 + 6) != 0) {
          iVar4 = FUN_ram_403a5e02(1,(uint)*(ushort *)(_DAT_ram_3fcb6b88 + 6) << 2);
          piVar3 = _DAT_ram_3fcb6bb8;
          piVar2[3] = iVar4;
          if (piVar3[3] == 0) goto LAB_ram_420320fe;
        }
        piVar2 = _DAT_ram_3fcb6bb8;
        if (*(ushort *)(_DAT_ram_3fcb6b88 + 4) != 0) {
          iVar4 = FUN_ram_403a5e02(1,(uint)*(ushort *)(_DAT_ram_3fcb6b88 + 4) << 3);
          piVar3 = _DAT_ram_3fcb6bb8;
          piVar2[1] = iVar4;
          if (piVar3[1] == 0) goto LAB_ram_420320fe;
        }
        *(undefined2 *)(_DAT_ram_3fcb6bb8 + 2) = 0;
        for (iVar5 = 0; iVar5 < *_DAT_ram_3fcb6bb8; iVar5 = iVar5 + 1) {
          iVar4 = FUN_ram_42031c34(*(undefined4 *)(_DAT_ram_3fcb6bbc + iVar5 * 4),_DAT_ram_3fcb69b4,
                                   _DAT_ram_3fcb69b8);
          if (iVar4 != 0) goto LAB_ram_42032100;
        }
        FUN_ram_42031966();
        iVar7 = _DAT_ram_3fcb6bb8[0xc];
        iVar5 = 0;
        if (iVar7 == 0) goto LAB_ram_420321d2;
        iVar4 = 0xb;
        iVar7 = (*(code *)&SUB_ram_40011a60)
                          (_DAT_ram_3fcb6bb8 + 4,
                           (int)(uint)*(ushort *)(_DAT_ram_3fcb6b88 + 6) / iVar7 & 0xffff,iVar7 << 2
                           ,_DAT_ram_3fcb6bb8[3],
                           "You need not answer every view; hit the key point.");
        piVar2 = _DAT_ram_3fcb6bb8;
        if (iVar7 != 0) goto LAB_ram_42032100;
        iVar4 = (*(code *)&SUB_ram_40011a44)(_DAT_ram_3fcb6bb8 + 4);
        piVar3 = _DAT_ram_3fcb6bb8;
        piVar2[0xb] = iVar4;
        iVar4 = piVar3[0xb];
        if (iVar4 != 0) {
          (*(code *)&SUB_ram_40010488)(iVar4,0,piVar3[0xc] << 2);
          iVar7 = 0;
          iVar4 = 0;
          while (iVar4 = FUN_ram_420299b4(iVar4,auStack_24,0xffff), iVar4 != 0) {
            iVar6 = FUN_ram_42031ac2(*(undefined4 *)(*(int *)(iVar4 + 0x10) + 0x10));
            if (iVar6 != 0) {
              iVar8 = iVar7 * 4;
              iVar7 = iVar7 + 1;
              psVar9 = (short *)(_DAT_ram_3fcb6bb8[0xb] + iVar8);
              sVar1 = *(short *)(iVar4 + 10);
              *(char *)((int)psVar9 + 3) = (char)iVar6;
              *(undefined1 *)(psVar9 + 1) = 0;
              *psVar9 = sVar1 + 1;
            }
          }
          goto LAB_ram_420321d2;
        }
      }
LAB_ram_420320fe:
      iVar4 = 6;
    }
  }
LAB_ram_42032100:
  FUN_ram_420318f6();
  FUN_ram_42031966();
  iVar5 = iVar4;
LAB_ram_420321d2:
  thunk_FUN_ram_4202b7f6();
  return iVar5;
}

