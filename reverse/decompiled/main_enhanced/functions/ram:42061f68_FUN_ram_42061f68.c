
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42061f68(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uStack_7c;
  uint uStack_78;
  int iStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined1 uStack_58;
  undefined1 auStack_54 [4];
  int iStack_50;
  undefined4 uStack_4c;
  uint uStack_48;
  int iStack_34;
  
  if (param_1 != 1) {
    return 0x102;
  }
  if (_DAT_ram_3fcc539c == (undefined4 *)0x0) {
    iVar2 = FUN_ram_42061ed6();
    uVar3 = FUN_ram_42061ee6(1);
    if (iVar2 == 0) {
      return 0x103;
    }
    if (*(int *)(iVar2 + 0x4c) == 0) {
      return 0x102;
    }
    puVar4 = (undefined4 *)FUN_ram_40390474(0xb8,0x804);
    if (puVar4 == (undefined4 *)0x0) {
      iVar5 = 0x101;
LAB_ram_42062052:
      thunk_FUN_ram_40390634(puVar4);
      return iVar5;
    }
    (*(code *)&SUB_ram_40010488)(puVar4,0,0xb8);
    *puVar4 = 1;
    puVar4[0x26] = 6;
    puVar4[0x28] = uVar3;
    puVar4[0x2b] = 0xb33fffff;
    puVar4[0x27] = iVar2;
    uVar3 = FUN_ram_42061566(1);
    iVar5 = FUN_ram_420119cc(uVar3,*(uint *)(iVar2 + 0x34) | 0x800,0x4038384e,puVar4,puVar4 + 7);
    if (iVar5 != 0) {
      FUN_ram_420972b0();
      if (puVar4[7] != 0) {
        FUN_ram_420119d8();
      }
      goto LAB_ram_42062052;
    }
    _DAT_ram_600240e8 = _DAT_ram_600240e8 | 1;
    FUN_ram_420971a6(puVar4 + 8,1);
    FUN_ram_42097286(puVar4 + 8,*(undefined1 *)(iVar2 + 0x24));
    uVar3 = FUN_ram_42061d28(1);
    FUN_ram_4204bb7a(uVar3,0x4038331c,0x40383316,puVar4);
    FUN_ram_42061ef6(1,0x42051f08,puVar4);
    _DAT_ram_3fcc539c = puVar4;
  }
  puVar4 = _DAT_ram_3fcc539c;
  if ((-1 < *(int *)(param_2 + 0x1c)) &&
     (uVar6 = (*(code *)&SUB_ram_40010974)(0x1fffff,0), (uVar6 & 1) == 0)) {
    return 0x102;
  }
  if (*(int *)(param_2 + 0x10) < 1) {
    return 0x102;
  }
  iVar5 = *(int *)(param_2 + 4);
  uStack_7c = 0;
  iVar2 = puVar4[0x27];
  if (iVar5 == 0) {
    iVar5 = 5;
  }
  iVar7 = FUN_ram_403948d2(iVar5,1);
  if (iVar7 != 0) {
    return 0x103;
  }
  FUN_ram_420b3d0c(iVar5,0,&uStack_7c);
  if (uStack_7c < *(uint *)(param_2 + 0x10)) {
    return 0x102;
  }
  if (((*(uint *)(param_2 + 0x20) & 0x100) != 0) && (*(int *)(param_2 + 0x2c) == 0)) {
    return 0x102;
  }
  uStack_78 = (uint)(*(int *)(param_2 + 0x1c) != -1);
  iVar7 = FUN_ram_4204ba28(*(undefined4 *)(iVar2 + 0x4c),&uStack_78,&iStack_74);
  if (iVar7 == 0) {
    iVar7 = FUN_ram_4039285c(iStack_74);
    if (iVar7 == -1) {
      return 0x105;
    }
    uVar6 = (uint)*(ushort *)(param_2 + 8);
    uStack_6c = *(uint *)(param_2 + 0x20) >> 4 & 1;
    uStack_68 = *(uint *)(param_2 + 0x20) >> 6 & 1;
    if (uVar6 == 0) {
      uVar6 = 0x80;
    }
    uStack_64 = *(undefined4 *)(param_2 + 0x10);
    uStack_5c = *(undefined4 *)(param_2 + 0x14);
    uVar8 = *(uint *)(iVar2 + 0x38) >> 1 & 1 ^ 1;
    uStack_70 = uStack_7c;
    uStack_58 = (undefined1)uVar8;
    uStack_60 = uVar6;
    iVar2 = FUN_ram_4039a8b4(&uStack_70,auStack_54);
    if (iVar2 != 0) {
      return iVar2;
    }
    uStack_48 = uStack_7c;
    iStack_34 = *(int *)(param_2 + 0x18);
    uStack_4c = 1;
    if (iStack_34 == 1) {
      return 0x106;
    }
    iStack_50 = iVar5;
    piVar1 = (int *)FUN_ram_40390474(0x7c,0x804);
    if (piVar1 != (int *)0x0) {
      (*(code *)&SUB_ram_40010488)(piVar1 + 1,0,0x78);
      uVar3 = *(undefined4 *)(param_2 + 0x24);
      *piVar1 = iVar7;
      piVar1[0x1e] = iStack_74;
      iVar2 = FUN_ram_40397076(uVar3,0x14,0);
      piVar1[1] = iVar2;
      if (iVar2 != 0) {
        if ((*(uint *)(param_2 + 0x20) & 0x100) != 0) {
LAB_ram_4206220a:
          FUN_ram_4039c11e(piVar1 + 3,param_2,0x30);
          iVar2 = *(int *)(param_2 + 0x1c);
          *(short *)(piVar1 + 5) = (short)uVar6;
          if (-1 < iVar2) {
            FUN_ram_42061c4a(1,iVar2,iVar7,uVar8);
          }
          puVar4[iVar7 + 1] = piVar1;
          piVar1[0x1d] = (int)puVar4;
          piVar1[0xf] = (uint)*(byte *)(param_2 + 3);
          piVar1[0x10] = (uint)*(ushort *)(param_2 + 10);
          uVar6 = (uint)*(byte *)(param_2 + 0xc);
          if (uVar6 == 0) {
            uVar6 = 1;
          }
          piVar1[0x11] = uVar6;
          piVar1[0x12] = *piVar1;
          FUN_ram_4039c11e(piVar1 + 0x13,auStack_54,0x24);
          uVar6 = *(uint *)(param_2 + 0x20);
          *(byte *)(piVar1 + 0x1c) =
               (byte)(uVar6 >> 3) & 2 | (byte)(uVar6 >> 2) & 1 | (byte)((uVar6 & 1) << 2) |
               (byte)(uVar6 << 2) & 8 | (byte)(uVar6 >> 2) & 0x10 | (byte)(uVar6 << 2) & 0x20 |
               *(byte *)(piVar1 + 0x1c) & 0xc0;
          *param_3 = piVar1;
          return 0;
        }
        iVar2 = FUN_ram_40397076(*(undefined4 *)(param_2 + 0x24),0x14,0);
        piVar1[2] = iVar2;
        if (iVar2 != 0) goto LAB_ram_4206220a;
      }
      if (piVar1[1] != 0) {
        FUN_ram_4039782c();
      }
      if (piVar1[2] != 0) {
        FUN_ram_4039782c();
      }
      FUN_ram_4204bb32(piVar1[0x1e]);
      goto LAB_ram_4206212e;
    }
  }
  piVar1 = (int *)0x0;
LAB_ram_4206212e:
  thunk_FUN_ram_40390634(piVar1);
  return 0x101;
}

