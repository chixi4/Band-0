
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202433e(int *param_1,undefined2 *param_2,int param_3)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  byte bVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 uStack_54;
  char *pcStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  if ((_DAT_ram_3fcc518c != (undefined4 *)0x0) ||
     (puVar4 = (undefined4 *)FUN_ram_4039c08e(1,0x5c), _DAT_ram_3fcc518c = puVar4,
     puVar4 == (undefined4 *)0x0)) {
    return -1;
  }
  *(undefined **)((int)puVar4 + 0x2a) = &sedeleg;
  uStack_54 = 5;
  puVar4[1] = 0;
  *puVar4 = param_1;
  pcStack_50 = "thers are chaotic, hold your plan tighter.";
  uStack_4c = FUN_ram_4039809e(0);
  uStack_48 = 0x1000;
  uStack_44 = 0x7fffffff;
  iVar5 = FUN_ram_420b339c(&uStack_54,_DAT_ram_3fcc518c + 1);
  puVar4 = _DAT_ram_3fcc518c;
  if (iVar5 == 0) {
    (*(code *)&SUB_ram_40010488)(_DAT_ram_3fcc518c + 2,0,0x1c);
    iVar5 = *(int *)(param_2 + 4);
    *(undefined2 *)(puVar4 + 2) = *param_2;
    *(undefined2 *)((int)puVar4 + 10) = param_2[1];
    *(undefined2 *)(puVar4 + 3) = param_2[2];
    if (iVar5 != 0) {
      uVar6 = (*(code *)&SUB_ram_40010510)();
      puVar4[4] = uVar6;
    }
    if (*(int *)(param_2 + 6) != 0) {
      uVar6 = (*(code *)&SUB_ram_40010510)();
      puVar4[5] = uVar6;
    }
    if (*(int *)(param_2 + 8) != 0) {
      uVar6 = (*(code *)&SUB_ram_40010510)();
      puVar4[6] = uVar6;
    }
    *(undefined2 *)(puVar4 + 9) = 0x3c0;
    bVar11 = *(byte *)(param_2 + 0xc);
    if (bVar11 != 0) {
      iVar8 = (uint)bVar11 * 0x18;
      iVar5 = thunk_FUN_ram_403904a6(iVar8);
      puVar4[0x15] = iVar5;
      if (iVar5 == 0) {
LAB_ram_42024666:
        FUN_ram_420242a0();
        return -1;
      }
      (*(code *)&SUB_ram_40010488)(iVar5,0,iVar8);
      *(byte *)(puVar4 + 0x16) = bVar11;
      for (uVar12 = 0; uVar12 < *(byte *)(puVar4 + 0x16); uVar12 = uVar12 + 1 & 0xff) {
        puVar13 = (undefined4 *)(*(int *)(param_2 + 10) + uVar12 * 8);
        uVar1 = *(undefined2 *)(puVar13 + 1);
        iVar5 = thunk_FUN_ram_403904a6(uVar1);
        if (iVar5 == 0) goto LAB_ram_42024666;
        FUN_ram_4039c11e(iVar5,*puVar13,uVar1);
        uVar1 = *(undefined2 *)(puVar13 + 1);
        piVar10 = (int *)(puVar4[0x15] + uVar12 * 0x18);
        *piVar10 = iVar5;
        uVar6 = *puVar13;
        *(undefined2 *)(piVar10 + 1) = uVar1;
        iVar5 = FUN_ram_42024914(uVar6);
        if (iVar5 == 0) goto LAB_ram_42024666;
        *(undefined2 *)(puVar4 + 9) = *(undefined2 *)(iVar5 + 4);
        iVar8 = puVar4[0x15] + uVar12 * 0x18;
        bVar11 = *(byte *)(iVar5 + 6);
        *(byte *)(iVar8 + 8) = bVar11;
        puVar7 = (undefined1 *)thunk_FUN_ram_403904a6((uint)bVar11 * 0x14);
        *(undefined1 **)(iVar8 + 0xc) = puVar7;
        if (puVar7 == (undefined1 *)0x0) {
          thunk_FUN_ram_40390634(iVar5);
          goto LAB_ram_42024666;
        }
        for (uVar9 = 0; iVar8 = *(int *)(iVar5 + 8), (uVar9 & 0xff) < (uint)bVar11;
            uVar9 = uVar9 + 1) {
          *puVar7 = (char)uVar12;
          iVar8 = iVar8 + uVar9 * 0xc;
          puVar7[1] = *(undefined1 *)(iVar8 + 1);
          puVar7[3] = *(undefined1 *)(iVar8 + 3);
          puVar7[2] = *(undefined1 *)(iVar8 + 2);
          *(undefined4 *)(puVar7 + 4) = *(undefined4 *)(iVar8 + 4);
          *(undefined2 *)(puVar7 + 8) = *(undefined2 *)(iVar8 + 8);
          puVar7 = puVar7 + 0x14;
        }
        thunk_FUN_ram_40390634();
        thunk_FUN_ram_40390634(iVar5);
      }
    }
    param_1[2] = 0x42013b3e;
    param_1[3] = 0x420142cc;
    param_1[6] = 0x42013e5e;
    param_1[7] = 0x42013da0;
    param_1[8] = 0x42013ccc;
    puVar4 = _DAT_ram_3fcc518c;
    param_1[9] = 0x42013e96;
    *param_1 = (int)puVar4;
    param_1[10] = 0x42013d7e;
    iVar5 = FUN_ram_42023e96(puVar4,0x42013b1e,0xffffffff);
    if ((iVar5 == 0) &&
       ((param_3 == 0 ||
        (iVar5 = FUN_ram_42023e96(_DAT_ram_3fcc518c,param_3,0xffffffff), iVar5 == 0)))) {
      _DAT_ram_3fcb69c4 = 0x42013bbe;
      _DAT_ram_3fcb69c8 = 0x42013cae;
      _DAT_ram_3fcb69b4 = 0x42014092;
      FUN_ram_42026078();
      FUN_ram_42025ebe();
      FUN_ram_42026d38(0,0);
      FUN_ram_420261b6();
      FUN_ram_42026360();
      puVar4 = _DAT_ram_3fcc518c;
      uVar1 = *(undefined2 *)(_DAT_ram_3fcc518c + 2);
      uVar2 = *(undefined2 *)((int)_DAT_ram_3fcc518c + 10);
      uVar3 = *(undefined2 *)(_DAT_ram_3fcc518c + 3);
      *(char *)((int)_DAT_ram_3fcc518c + 0x4b) = (char)uVar1;
      *(char *)((int)puVar4 + 0x4d) = (char)uVar2;
      *(char *)((int)puVar4 + 0x4f) = (char)uVar3;
      *(char *)(puVar4 + 0x14) = (char)((ushort)uVar3 >> 8);
      *(undefined1 *)((int)puVar4 + 0x4a) = 2;
      *(char *)(puVar4 + 0x13) = (char)((ushort)uVar1 >> 8);
      *(char *)((int)puVar4 + 0x4e) = (char)((ushort)uVar2 >> 8);
      FUN_ram_420262bc((int)puVar4 + 0x4a);
      if (((char *)_DAT_ram_3fcc518c[5] != (char *)0x0) && (*(char *)_DAT_ram_3fcc518c[5] != '\0'))
      {
        FUN_ram_420262ae();
      }
      if (((char *)_DAT_ram_3fcc518c[6] != (char *)0x0) && (*(char *)_DAT_ram_3fcc518c[6] != '\0'))
      {
        FUN_ram_420262a0();
      }
      bVar11 = 0;
      while( true ) {
        if (*(byte *)(_DAT_ram_3fcc518c + 0x16) <= bVar11) {
          FUN_ram_42026bd8();
          FUN_ram_4202fd5c(0x3fcc1bb4,0x42013bc0,0);
          return 0;
        }
        iVar5 = FUN_ram_42023eba(bVar11);
        if (iVar5 != 0) break;
        bVar11 = bVar11 + 1;
      }
      return iVar5;
    }
  }
  FUN_ram_420242a0();
  return iVar5;
}

