
int FUN_ram_4206560a(int param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined1 auStack_a8 [24];
  undefined1 *puStack_90;
  undefined1 auStack_88 [4];
  undefined4 uStack_84;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  int iStack_44;
  
  *(undefined4 *)(param_1 + 0x84) = 0;
  iVar11 = param_1 + 0x80;
  (*(code *)&SUB_ram_40010488)(param_1 + 0x88,0,0x301);
  iVar5 = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x38c) = 0;
  *(undefined4 *)(param_1 + 0x394) = 0;
  *(undefined4 *)(param_1 + 0x3bc) = 0;
  *(undefined4 *)(param_1 + 0x3cc) = 0;
  *(undefined4 *)(param_1 + 0x3d0) = 0;
  *(undefined4 *)(param_1 + 0x3a8) = 0;
  *(undefined4 *)(param_1 + 0x3b0) = 0;
  if (iVar5 == 0) {
    iVar5 = 0x600;
  }
  *(int *)(param_1 + 0x3b4) = iVar5;
  iVar5 = *(int *)(param_1 + 0x14);
  if (iVar5 == 0) {
    iVar5 = 0x300;
  }
  *(int *)(param_1 + 0x3b8) = iVar5;
  *(int *)(param_1 + 0x3ac) = iVar5;
  (*(code *)&SUB_ram_40010488)
            (*(undefined4 *)(param_1 + 0x3d4),0,(uint)*(ushort *)(param_1 + 0x20) << 3);
  *(int *)(param_1 + 0x80) = param_1;
  *(char **)(param_1 + 0x3c0) = "ng resources today.";
  *(char **)(param_1 + 0x3c4) = "riority order before sleep.";
  uVar6 = *(undefined4 *)(param_2 + 4);
  *(int *)(param_1 + 0x390) = param_1 + 0x3a4;
  *(int *)(param_1 + 0x3a4) = param_2;
  *(undefined1 *)(param_1 + 0x3c8) = 0;
  *(undefined4 *)(param_1 + 0x398) = uVar6;
  *(undefined4 *)(param_1 + 0x39c) = *(undefined4 *)(param_2 + 0x14);
  *(undefined1 *)(param_1 + 0x3a0) = *(undefined1 *)(param_2 + 8);
  (*(code *)&SUB_ram_40010488)(auStack_a8,0,0x20);
  (*(code *)&SUB_ram_40010488)(auStack_88,0,0x48);
  iStack_60 = iVar11;
  FUN_ram_420a20f4(auStack_a8,0);
  puStack_90 = auStack_88;
  FUN_ram_420a214a(auStack_88);
  uStack_84 = 0x42055244;
  uStack_7c = 0x42055442;
  uStack_78 = 0x4205527e;
  uStack_74 = 0x420554e6;
  uStack_70 = 0x4205540e;
  uStack_6c = 0x420553c2;
  uVar10 = 0;
  do {
    puVar1 = puStack_90;
    iVar5 = *(int *)(param_1 + 0x390);
    if (uVar10 != *(uint *)(iVar5 + 8)) {
      uVar8 = *(uint *)(iVar5 + 8) - uVar10;
      if (0x80 < uVar8) {
        uVar8 = 0x80;
      }
      iVar3 = *(int *)(iVar5 + 4);
      iVar2 = *(int *)(puStack_90 + 0x34);
      iVar4 = thunk_FUN_ram_40390538(iVar3,uVar10 + uVar8);
      *(int *)(iVar5 + 4) = iVar4;
      if (iVar4 == 0) goto LAB_ram_42065756;
      *(int *)(puVar1 + 0x34) = (iVar2 - iVar3) + iVar4;
      *(uint *)(iVar5 + 0xc) = uVar10 + uVar8;
      uVar8 = FUN_ram_42066030(iVar11,iVar4 + uVar10,uVar8,1);
      if (-1 < (int)uVar8) {
        if (uVar8 == 0) goto LAB_ram_42065818;
        goto LAB_ram_42065758;
      }
      if ((uVar8 == 0xfffffffd) && (iVar5 = FUN_ram_420666ee(iVar11,8), uVar9 = uVar10, iVar5 == 0))
      goto LAB_ram_42065878;
LAB_ram_42065818:
      iVar5 = -1;
      goto LAB_ram_42065798;
    }
LAB_ram_42065756:
    uVar8 = 0;
LAB_ram_42065758:
    puVar1 = puStack_90;
    iStack_44 = uVar10 + uVar8;
    iVar5 = *(int *)(*(int *)(puStack_90 + 0x28) + 0x310);
    if (uVar8 == 0) {
      iVar5 = 0xb;
      if (*(int *)(puStack_90 + 0x2c) != 1) {
        iVar5 = (-(uint)(1 < *(int *)(puStack_90 + 0x2c) - 2U) & 0xfffffff4) + 0xc;
      }
      *(int *)(puStack_90 + 0x30) = iVar5;
      *(undefined4 *)(puStack_90 + 0x2c) = 6;
LAB_ram_4206578c:
      iVar5 = FUN_ram_420666ee(iVar11,uStack_58);
      goto LAB_ram_42065794;
    }
    uVar7 = uVar8;
    if (puStack_90[0x3c] != '\0') {
      uVar7 = *(uint *)(puStack_90 + 0x40);
      uVar9 = uVar8;
      if (uVar7 < uVar8) {
        uVar9 = uVar7;
      }
      *(uint *)(puStack_90 + 0x40) = uVar7 - uVar9;
      FUN_ram_420a250c(auStack_a8,0);
      puVar1[0x3c] = 0;
      uVar7 = uVar8 - uVar9;
      if (uVar8 == uVar9) goto LAB_ram_42065878;
      uVar10 = uVar9 + uVar10;
    }
    uVar8 = FUN_ram_4209fdce(auStack_a8,puVar1,*(int *)(iVar5 + 4) + uVar10,uVar7);
    if (*(int *)(puVar1 + 0x2c) == 6) goto LAB_ram_4206578c;
    if (puVar1[0x3c] == '\0') {
      if (uVar7 == uVar8) {
        uVar9 = uVar10 + uVar7;
        if (-1 < (int)(uVar10 + uVar7)) goto LAB_ram_42065878;
      }
      else {
        *(undefined4 *)(puVar1 + 0x30) = 3;
        *(undefined4 *)(puVar1 + 0x2c) = 6;
      }
      goto LAB_ram_4206578c;
    }
    *(uint *)(puVar1 + 0x40) = (uVar8 + *(int *)(puVar1 + 0x40)) - uVar7;
    uVar9 = 0;
LAB_ram_42065878:
    uVar10 = uVar9;
    if (iStack_5c == 5) {
      iVar5 = FUN_ram_42066976(param_1);
LAB_ram_42065794:
      if (iVar5 != 0) {
LAB_ram_42065798:
        FUN_ram_4206559e(iVar11);
      }
      return iVar5;
    }
  } while( true );
}

