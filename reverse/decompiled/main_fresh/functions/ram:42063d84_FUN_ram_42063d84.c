
undefined4 FUN_ram_42063d84(int param_1,int param_2)

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
  FUN_ram_420a2158(auStack_40);
  uVar1 = (*(code *)&SUB_ram_400104a8)(param_2);
  iVar2 = FUN_ram_420a2166(param_2,uVar1,0,auStack_40);
  if (iVar2 != 0) {
    return 0x102;
  }
  iVar2 = 0;
  if (*(int *)(param_1 + 0x50) != 0) {
    iVar2 = (*(code *)&SUB_ram_40010510)(*(int *)(param_1 + 0x50));
  }
  iVar8 = *(int *)(param_1 + 0x54);
  if ((sStack_36 != 0) &&
     (iVar5 = FUN_ram_42064adc(param_1 + 0x50,(uint)uStack_38 + param_2), iVar5 == 0))
  goto LAB_ram_42063eb0;
  if (iVar2 != 0) {
    iVar5 = *(int *)(param_1 + 0x50);
    if ((iVar5 != 0) && (iVar4 = (*(code *)&SUB_ram_40010504)(iVar2,iVar5), iVar4 != 0)) {
      iVar5 = FUN_ram_420637b0(param_1,&DAT_ram_3c0c2d2c,iVar5);
      if (iVar5 != 0) goto LAB_ram_42063eb0;
      FUN_ram_42063324(*(undefined4 *)(*(int *)(param_1 + 0x24) + 4));
      FUN_ram_42063b28(param_1);
    }
    thunk_FUN_ram_40390634(iVar2);
  }
  if (sStack_3a == 0) {
LAB_ram_42063e36:
    if (sStack_32 != 0) {
      uVar1 = (*(code *)&SUB_ram_40010588)((uint)uStack_34 + param_2,0,10);
      *(undefined4 *)(param_1 + 0x54) = uVar1;
    }
    if (*(int *)(param_1 + 0x54) != iVar8) {
      FUN_ram_42063324(*(undefined4 *)(*(int *)(param_1 + 0x24) + 4));
      FUN_ram_42063b28(param_1);
    }
    if (sStack_22 == 0) {
LAB_ram_42063f20:
      uVar6 = (uint)uStack_2e;
      if (uVar6 == 0) {
        uVar6 = 0xffffffff;
        iVar2 = 0x3c0a85ec;
      }
      else {
        iVar2 = (uint)uStack_30 + param_2;
      }
      iVar2 = FUN_ram_42064adc(param_1 + 0x60,iVar2,uVar6);
      if (iVar2 != 0) {
        if (sStack_2a == 0) {
          if (*(int *)(param_1 + 100) != 0) {
            thunk_FUN_ram_40390634();
            *(undefined4 *)(param_1 + 100) = 0;
            return 0;
          }
          return 0;
        }
        iVar2 = FUN_ram_42064adc(param_1 + 100,(uint)uStack_2c + param_2);
        if (iVar2 != 0) {
          return 0;
        }
      }
    }
    else {
      iStack_44 = 0;
      iVar8 = FUN_ram_42064adc(&iStack_44,(uint)uStack_24 + param_2);
      iVar2 = iStack_44;
      if (iVar8 != 0) {
        if (iStack_44 == 0) {
          return 0x101;
        }
        puVar3 = (undefined1 *)(*(code *)&SUB_ram_40010514)(iStack_44,0x3a);
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = 0;
          iVar8 = FUN_ram_42064adc(param_1 + 0x5c,puVar3 + 1,0xffffffff);
          if (iVar8 == 0) goto LAB_ram_42063e9c;
        }
        iVar2 = FUN_ram_42064adc(param_1 + 0x58,iVar2,0xffffffff);
        if (iVar2 != 0) {
          thunk_FUN_ram_40390634(iStack_44);
          goto LAB_ram_42063f20;
        }
      }
    }
  }
  else {
    iVar2 = FUN_ram_42064adc(param_1 + 0x4c,(uint)uStack_3c + param_2);
    if (iVar2 != 0) {
      uVar1 = *(undefined4 *)(param_1 + 0x4c);
      iVar2 = (*(code *)&SUB_ram_40010504)(uVar1,&DAT_ram_3c0c2d24);
      uVar7 = 0x50;
      if (iVar2 != 0) {
        iVar2 = (*(code *)&SUB_ram_40010504)(uVar1,&DAT_ram_3c0c2d34);
        if (iVar2 != 0) goto LAB_ram_42063e36;
        uVar7 = 0x1bb;
      }
      *(undefined4 *)(param_1 + 0x54) = uVar7;
      goto LAB_ram_42063e36;
    }
  }
LAB_ram_42063e9c:
  iVar2 = 0;
LAB_ram_42063eb0:
  thunk_FUN_ram_40390634(iVar2);
  return 0x101;
}

