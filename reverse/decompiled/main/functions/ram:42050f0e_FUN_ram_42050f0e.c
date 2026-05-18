
int FUN_ram_42050f0e(undefined4 param_1,int param_2,uint *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined2 uStack_3a;
  int iStack_38;
  undefined4 uStack_34;
  undefined2 uStack_30;
  undefined2 uStack_2e;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  uStack_3a = 0;
  puVar1 = (undefined4 *)FUN_ram_4205032e();
  if (puVar1 == (undefined4 *)0x0) {
    return -1;
  }
  iVar2 = FUN_ram_4205d054(*puVar1,&iStack_38);
  if (iVar2 == 0) {
    iVar2 = iStack_38;
    if (iStack_38 == 0) {
      iVar2 = FUN_ram_4039bf1e();
    }
    iVar2 = FUN_ram_4204fd2a(iVar2,1);
    if (iVar2 != -1) {
      FUN_ram_4205c96c();
      uVar6 = *(undefined4 *)(iStack_38 + 0x1c);
      *(int *)(iStack_38 + 0x1c) = iVar2;
      FUN_ram_4205c996();
      if (*(int *)(iStack_38 + 0x30) != 0) {
        for (iVar4 = (int)(short)~(ushort)uVar6; 0 < iVar4; iVar4 = iVar4 + -1) {
          (**(code **)(iStack_38 + 0x30))(iStack_38,0,0);
        }
      }
      if ((param_2 != 0) && (param_3 != (uint *)0x0)) {
        iVar4 = FUN_ram_4205ce28(iStack_38,&uStack_34,&uStack_3a,0);
        if (iVar4 != 0) {
          FUN_ram_420501f2(&DAT_ram_3fcc1eb4 + (iVar2 + -0x34) * 0x14,1);
          iVar2 = FUN_ram_4205e6c6(iVar4);
          if (iVar2 != 0) {
            puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
            uVar6 = FUN_ram_4205e6c6(iVar4);
            *puVar3 = uVar6;
          }
          goto LAB_ram_42050f56;
        }
        uStack_30 = 0x210;
        uStack_2e = FUN_ram_420523aa(uStack_3a);
        uVar5 = *param_3;
        uStack_2c = uStack_34;
        uStack_28 = 0;
        uStack_24 = 0;
        if (0x10 < uVar5) {
          *param_3 = 0x10;
          uVar5 = 0x10;
        }
        FUN_ram_4039c11e(param_2,&uStack_30,uVar5);
      }
      FUN_ram_4205027e(puVar1);
      FUN_ram_4205027e(&DAT_ram_3fcc1eb4 + (iVar2 + -0x34) * 0x14);
      return iVar2;
    }
    FUN_ram_4205cdfa(iStack_38);
    puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar6 = 0x17;
  }
  else if ((*(uint *)*puVar1 & 0xf0) == 0x10) {
    if (iVar2 != -0xf) {
      iVar4 = FUN_ram_4205e6c6();
      if (iVar4 != 0) {
        puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
        uVar6 = FUN_ram_4205e6c6(iVar2);
        *puVar3 = uVar6;
      }
      goto LAB_ram_42050f56;
    }
    puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar6 = 0x16;
  }
  else {
    puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar6 = 0x5f;
  }
  *puVar3 = uVar6;
LAB_ram_42050f56:
  FUN_ram_4205027e(puVar1);
  return -1;
}

