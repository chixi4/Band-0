
undefined4 FUN_ram_4205bf9e(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  int iStack_44;
  undefined1 auStack_40 [4];
  ushort uStack_3c;
  short sStack_3a;
  ushort uStack_38;
  short sStack_36;
  ushort uStack_34;
  short sStack_32;
  ushort uStack_30;
  ushort uStack_2e;
  ushort uStack_2c;
  short sStack_2a;
  ushort uStack_24;
  short sStack_22;
  
  if ((param_1 == 0) || (param_2 == 0)) {
    return 0x102;
  }
  FUN_ram_4206b81c(auStack_40);
  uVar1 = (*(code *)&SUB_ram_400104a8)(param_2);
  iVar2 = FUN_ram_4206b82a(param_2,uVar1,0,auStack_40);
  if (iVar2 != 0) {
    return 0x102;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar2 = (*(code *)&SUB_ram_40010510)(*(int *)(param_1 + 0x50));
  }
  iVar8 = *(int *)(param_1 + 0x54);
  if ((sStack_36 != 0) &&
     (iVar5 = FUN_ram_4205d0e2(param_1 + 0x50,(uint)uStack_38 + param_2), iVar5 == 0))
  goto LAB_ram_4205c0ca;
  if (iVar2 != 0) {
    iVar5 = *(int *)(param_1 + 0x50);
    if ((iVar5 != 0) && (iVar4 = (*(code *)&SUB_ram_40010504)(iVar2,iVar5), iVar4 != 0)) {
      iVar5 = FUN_ram_4205b9ae(param_1,0x3c0730a8,iVar5);
      if (iVar5 != 0) goto LAB_ram_4205c0ca;
      FUN_ram_4205b4ca(*(undefined4 *)(*(int *)(param_1 + 0x24) + 4));
      FUN_ram_4205bd42(param_1);
    }
    thunk_FUN_ram_40390608(iVar2);
  }
  if (sStack_3a == 0) {
LAB_ram_4205c050:
    if (sStack_32 != 0) {
      uVar1 = (*(code *)&SUB_ram_40010588)((uint)uStack_34 + param_2,0,10);
      *(undefined4 *)(param_1 + 0x54) = uVar1;
    }
    if (*(int *)(param_1 + 0x54) != iVar8) {
      FUN_ram_4205b4ca(*(undefined4 *)(*(int *)(param_1 + 0x24) + 4));
      FUN_ram_4205bd42(param_1);
    }
    if (sStack_22 == 0) {
LAB_ram_4205c13a:
      uVar6 = (uint)uStack_2e;
      if (uVar6 == 0) {
        uVar6 = 0xffffffff;
        iVar2 = 0x3c070618;
      }
      else {
        iVar2 = (uint)uStack_30 + param_2;
      }
      iVar2 = FUN_ram_4205d0e2(param_1 + 0x60,iVar2,uVar6);
      if (iVar2 != 0) {
        if (sStack_2a == 0) {
          if (*(int *)(param_1 + 100) != 0) {
            thunk_FUN_ram_40390608();
            *(undefined4 *)(param_1 + 100) = 0;
            return 0;
          }
          return 0;
        }
        iVar2 = FUN_ram_4205d0e2(param_1 + 100,(uint)uStack_2c + param_2);
        if (iVar2 != 0) {
          return 0;
        }
      }
    }
    else {
      iStack_44 = 0;
      iVar8 = FUN_ram_4205d0e2(&iStack_44,(uint)uStack_24 + param_2);
      iVar2 = iStack_44;
      if (iVar8 != 0) {
        if (iStack_44 == 0) {
          return 0x101;
        }
        puVar3 = (undefined1 *)(*(code *)&SUB_ram_40010514)(iStack_44,0x3a);
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = 0;
          iVar8 = FUN_ram_4205d0e2(param_1 + 0x5c,puVar3 + 1,0xffffffff);
          if (iVar8 == 0) goto LAB_ram_4205c0b6;
        }
        iVar2 = FUN_ram_4205d0e2(param_1 + 0x58,iVar2,0xffffffff);
        if (iVar2 != 0) {
          thunk_FUN_ram_40390608(iStack_44);
          goto LAB_ram_4205c13a;
        }
      }
    }
  }
  else {
    iVar2 = FUN_ram_4205d0e2(param_1 + 0x4c,(uint)uStack_3c + param_2);
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x4c);
      iVar2 = (*(code *)&SUB_ram_40010504)(uVar1,0x3c0730a0);
      uVar7 = 0x50;
      if (iVar2 != 0) {
        iVar2 = (*(code *)&SUB_ram_40010504)(uVar1,0x3c0730b0);
        if (iVar2 != 0) goto LAB_ram_4205c050;
        uVar7 = 0x1bb;
      }
      *(undefined4 *)(param_1 + 0x54) = uVar7;
      goto LAB_ram_4205c050;
    }
  }
LAB_ram_4205c0b6:
  iVar2 = 0;
LAB_ram_4205c0ca:
  thunk_FUN_ram_40390608(iVar2);
  return 0x101;
}

