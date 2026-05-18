
int FUN_ram_420693ce(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined2 uStack_4c;
  ushort uStack_4a;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  uStack_68 = 0;
  uStack_64 = 1;
  uStack_60 = 0;
  uStack_5c = 1;
  uStack_58 = 0;
  uStack_54 = 1;
  uStack_4c = 1;
  uStack_48 = 0;
  uStack_44 = 1;
  iVar3 = FUN_ram_42068824(&uStack_68,param_1);
  if (iVar3 == 0) {
    uVar4 = FUN_ram_42068380(&uStack_68);
    iVar3 = FUN_ram_4206826c(&uStack_60,&uStack_68);
    if (iVar3 == 0) {
      FUN_ram_42068484(&uStack_60,uVar4);
      uVar2 = 0;
      iVar10 = 0;
      for (iVar8 = 0; iVar8 != param_2; iVar8 = iVar8 + 1) {
        iVar9 = 0x20;
        do {
          uStack_4a = (ushort)uVar2;
          iStack_50 = iVar10;
          iVar3 = FUN_ram_42069380(&iStack_50,(uint)*(ushort *)(param_1 + 6) << 2,param_3,param_4);
          uVar1 = uStack_4a;
          iVar10 = iStack_50;
          uVar2 = (uint)uStack_4a;
          if (iVar3 != 0) goto LAB_ram_42069444;
          uVar5 = FUN_ram_420683ba(&iStack_50);
          uVar6 = FUN_ram_420683ba(&uStack_68);
          if (uVar6 < uVar5) {
            puVar7 = (uint *)((uVar2 + 0x3fffffff) * 4 + iVar10);
            *puVar7 = *puVar7 & ~(-1 << (uVar6 - 1 & 0x1f));
          }
          iVar9 = iVar9 + -1;
          if (iVar9 == 0) goto LAB_ram_4206958a;
          iVar3 = FUN_ram_42068514(&iStack_50,&uStack_68);
        } while ((-1 < iVar3) || (iVar3 = FUN_ram_420685b4(&iStack_50,1), iVar3 < 1));
        iVar3 = FUN_ram_420690e0(&iStack_50,&iStack_50,&uStack_60,param_1,&uStack_48);
        iVar10 = iStack_50;
        uVar2 = (uint)uStack_4a;
        uVar1 = uStack_4a;
        if (iVar3 != 0) goto LAB_ram_42069444;
        iVar3 = FUN_ram_42068514(&iStack_50,&uStack_68);
        if (iVar3 != 0) {
          iVar3 = FUN_ram_420685b4(&iStack_50,1);
          uVar5 = 1;
          if (iVar3 != 0) {
            for (; uVar1 = (ushort)uVar2, uVar5 < uVar4; uVar5 = uVar5 + 1) {
              iStack_50 = iVar10;
              uStack_4a = uVar1;
              iVar3 = FUN_ram_42068514(&iStack_50,&uStack_68);
              if (iVar3 == 0) break;
              iVar3 = FUN_ram_42068852(&uStack_58,&iStack_50);
              if (iVar3 != 0) goto LAB_ram_4206959a;
              iVar3 = FUN_ram_42068da0(&iStack_50,&uStack_58,param_1);
              iVar10 = iStack_50;
              uVar2 = (uint)uStack_4a;
              uVar1 = uStack_4a;
              if (iVar3 != 0) goto LAB_ram_42069444;
              iVar3 = FUN_ram_420685b4(&iStack_50,1);
              if (iVar3 == 0) break;
            }
            uVar1 = (ushort)uVar2;
            iStack_50 = iVar10;
            uStack_4a = uVar1;
            iVar3 = FUN_ram_42068514(&iStack_50,&uStack_68);
            if ((iVar3 != 0) || (iVar3 = FUN_ram_420685b4(&iStack_50,1), iVar3 == 0)) {
LAB_ram_4206958a:
              iVar3 = -0xe;
              goto LAB_ram_42069444;
            }
          }
        }
      }
      iVar3 = 0;
      uVar1 = (ushort)uVar2;
    }
    else {
      uVar1 = 0;
      iVar10 = 0;
LAB_ram_4206959a:
      iVar3 = -0x10;
    }
  }
  else {
    uVar1 = 0;
    iVar10 = 0;
  }
LAB_ram_42069444:
  FUN_ram_42068078(&uStack_68);
  FUN_ram_42068078(&uStack_60);
  FUN_ram_42068078(&uStack_58);
  iStack_50 = iVar10;
  uStack_4a = uVar1;
  FUN_ram_42068078(&iStack_50);
  FUN_ram_42068078(&uStack_48);
  return iVar3;
}

