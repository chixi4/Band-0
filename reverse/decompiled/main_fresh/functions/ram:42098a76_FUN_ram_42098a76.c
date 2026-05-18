
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42098a76(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  undefined2 uStack_24;
  
  puVar1 = (undefined4 *)FUN_ram_4207f036();
  uStack_24 = 0;
  iVar2 = FUN_ram_4207f066();
  iVar3 = FUN_ram_4039c08e(1,0x8c);
  if (iVar3 == 0) {
    return 0;
  }
  iVar4 = FUN_ram_4039c08e(1,0x194);
  *(int *)(iVar3 + 4) = iVar4;
  if (iVar4 == 0) goto LAB_ram_42098aba;
  puVar5 = (uint *)FUN_ram_4039c08e(1,0x58);
  if (puVar5 != (uint *)0x0) {
    uVar6 = FUN_ram_4207f0b6(1);
    *(uint *)(*(int *)(iVar3 + 4) + 0x188) = uVar6;
    puVar5[0x14] = uVar6;
    uVar6 = FUN_ram_4207f070();
    if ((uVar6 - 1 & 0xffff) < 0x3b) {
      uVar6 = 0x3c;
    }
    puVar5[4] = uVar6;
    iVar4 = FUN_ram_4207f048();
    if ((iVar4 - 2U & 0xfd) == 0) {
      *puVar5 = *puVar5 | 1;
    }
    if (((iVar4 - 3U & 0xff) < 2) || ((iVar4 - 6U & 0xff) < 2)) {
      *puVar5 = *puVar5 | 2;
    }
    iVar7 = FUN_ram_4207f05c();
    if ((*puVar5 & 2) != 0) {
      FUN_ram_4207f084(&uStack_24,1);
      if ((uStack_24._1_1_ != '\0') && (iVar7 == 3)) {
        iVar7 = 4;
      }
    }
    if (*puVar5 == 1) {
      if (iVar7 == 4) {
        iVar7 = 5;
LAB_ram_42098b9c:
        uVar6 = 10;
        uVar10 = 2;
      }
      else {
        if (iVar7 == 3) goto LAB_ram_42098d46;
LAB_ram_42098b90:
        if (iVar7 == 9) {
          uVar6 = 0x1000;
          uVar10 = uVar6;
        }
        else {
          if (iVar7 != 8) goto LAB_ram_42098b9c;
          uVar6 = 0x800;
          uVar10 = uVar6;
        }
      }
    }
    else {
      if (iVar7 != 3) {
        if (iVar7 != 4) goto LAB_ram_42098b90;
        uVar6 = 8;
        uVar10 = uVar6;
        goto LAB_ram_42098ba0;
      }
LAB_ram_42098d46:
      uVar6 = 2;
      uVar10 = uVar6;
    }
LAB_ram_42098ba0:
    puVar5[2] = uVar6;
    puVar5[8] = uVar6;
    iVar9 = *(int *)(iVar3 + 4);
    puVar5[3] = uVar10;
    uVar6 = 2;
    puVar5[1] = 2;
    puVar5[10] = 2;
    *(undefined4 *)(iVar9 + 0x184) = 2;
    if (uStack_24._1_1_ == '\0') {
      if ((char)uStack_24 != '\0') {
        puVar5[0x10] = 1;
        goto LAB_ram_42098bc4;
      }
LAB_ram_42098bf2:
      if (puVar5[0x10] != 0) goto LAB_ram_42098bc6;
    }
    else {
      if ((char)uStack_24 == '\0') goto LAB_ram_42098bf2;
      puVar5[0x10] = 2;
      uVar6 = 0x100;
LAB_ram_42098bc4:
      puVar5[1] = uVar6;
LAB_ram_42098bc6:
      if (iVar7 == 8) {
        uVar6 = 0x2000;
      }
      else if (iVar7 == 9) {
        uVar6 = 0x4000;
      }
      else {
        uVar6 = 0x20;
      }
      puVar5[0x11] = uVar6;
    }
    if (iVar4 == 7) {
      uVar6 = puVar5[1] | 0x400;
LAB_ram_42098c02:
      puVar5[1] = uVar6;
    }
    else if (((iVar4 == 6) && (puVar5[1] = 0x400, iVar7 == 9)) && (iVar2 != 0)) {
      uVar6 = 0x4000000;
      goto LAB_ram_42098c02;
    }
    FUN_ram_4209d2ae(puVar5[0x11]);
    FUN_ram_4207fdcc();
    uVar6 = FUN_ram_4207f522(1);
    *(byte *)(puVar5 + 0x15) = (byte)(uVar6 >> 10) & 1;
    iVar2 = *(int *)(iVar3 + 4);
    uVar8 = *puVar1;
    *(byte *)((int)puVar5 + 0x55) = (byte)(uVar6 >> 0xb) & 1;
    FUN_ram_4039c11e(iVar2 + 0x10,puVar1 + 1,uVar8);
    iVar7 = *(int *)(iVar3 + 4);
    *(undefined4 *)(iVar7 + 0x30) = *puVar1;
    *(uint *)(iVar7 + 0x88) = puVar5[1];
    iVar2 = FUN_ram_4039c08e(1,0x41);
    *(int *)(iVar7 + 0x3c) = iVar2;
    if (iVar2 != 0) {
      uVar8 = FUN_ram_4207f208();
      (*(code *)&SUB_ram_400106ac)(iVar2,0x41,"space in the plan for insight.",uVar8);
      *(undefined1 *)(*(int *)(*(int *)(iVar3 + 4) + 0x3c) + 0x40) = 0;
      uVar8 = FUN_ram_4207f052();
      **(undefined4 **)(iVar3 + 4) = uVar8;
      iVar2 = FUN_ram_4207fdc2();
      *(char *)((int)puVar5 + 0x56) = (char)iVar2;
      if ((1 < (iVar4 - 6U & 0xff)) && (iVar2 != 0)) {
        *(undefined1 *)((int)puVar5 + 0x56) = 0;
      }
      *(undefined4 *)(*(int *)(iVar3 + 4) + 0xc0) = 300;
      FUN_ram_42099588();
      FUN_ram_4207f6a8(1,iVar3 + 0xc);
      iVar2 = FUN_ram_42099f60(iVar3 + 0xc,puVar5,0);
      *(int *)(iVar3 + 0x60) = iVar2;
      if (iVar2 != 0) {
        FUN_ram_4207faaa(3,*(undefined4 *)(iVar2 + 0x6c),*(undefined2 *)(iVar2 + 0x70),0);
        thunk_FUN_ram_40390634(puVar5);
        _DAT_ram_3fcc53d0 = iVar3;
        return iVar3;
      }
    }
  }
  if (*(int *)(*(int *)(iVar3 + 4) + 0x3c) != 0) {
    thunk_FUN_ram_40390634();
  }
  if (puVar5 != (uint *)0x0) {
    thunk_FUN_ram_40390634(puVar5);
  }
  thunk_FUN_ram_40390634(*(undefined4 *)(iVar3 + 4));
LAB_ram_42098aba:
  thunk_FUN_ram_40390634(iVar3);
  return 0;
}

