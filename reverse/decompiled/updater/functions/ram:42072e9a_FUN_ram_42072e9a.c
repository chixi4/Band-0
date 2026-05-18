
int FUN_ram_42072e9a(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  int iStack_40;
  uint uStack_3c;
  undefined4 uStack_38;
  int iStack_34;
  uint uStack_30;
  undefined4 uStack_2c;
  uint uStack_24;
  
  uVar6 = *param_1 & 0xdf;
  if (uVar6 == 0x84) {
    uVar7 = param_1[2];
    uStack_44 = uVar7;
    (*(code *)&SUB_ram_40010488)(param_2 + 1,0,0x24);
    uVar6 = param_1[1];
    *param_2 = 4;
    iVar4 = FUN_ram_4202b91a(&uStack_44,uVar6 + uVar7,&uStack_48,0x30);
    if (iVar4 != 0) {
      return iVar4;
    }
    iVar4 = FUN_ram_42072996(&uStack_44,uStack_44 + uStack_48,param_2 + 1);
    if (iVar4 == 0) {
      return 0;
    }
    return iVar4;
  }
  if (uVar6 < 0x85) {
    if (uVar6 == 0x81) {
      puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010488)(param_2 + 1,0,0x24);
      uVar5 = 1;
    }
    else {
      if (uVar6 != 0x82) {
        if (uVar6 != 0x80) {
          return -0x2080;
        }
        uStack_48 = param_1[2];
        iVar1 = uStack_48 + param_1[1];
        iVar2 = FUN_ram_4202b91a(&uStack_48,iVar1,&iStack_4c,6);
        uVar6 = uStack_48;
        iVar4 = iStack_4c;
        if (iVar2 == 0) {
          if (iStack_4c != 8) {
            return -0x2080;
          }
          iVar2 = FUN_ram_40399d6c(0x3c0745c0,uStack_48,8);
          if (iVar2 != 0) {
            return -0x2080;
          }
          uStack_3c = uVar6;
          uStack_48 = uVar6 + 8;
          uStack_44 = 6;
          iStack_40 = iVar4;
          iVar2 = FUN_ram_4202b91a(&uStack_48,iVar1,&iStack_4c,0xa0);
          if (iVar2 != 0) goto LAB_ram_42072f3a;
          if (iVar1 != uStack_48 + iStack_4c) {
            return -0x2566;
          }
          iVar2 = FUN_ram_4202b91a(&uStack_48,iVar1,&iStack_4c,0x30);
          if (iVar2 != 0) goto LAB_ram_42072f3a;
          if (iVar1 != uStack_48 + iStack_4c) {
            return -0x2566;
          }
          iVar2 = FUN_ram_4202b91a(&uStack_48,iVar1,&iStack_4c,6);
          if (iVar2 != 0) goto LAB_ram_42072f3a;
          uStack_38 = 6;
          uStack_30 = uStack_48;
          uStack_48 = uStack_48 + iStack_4c;
          iStack_34 = iStack_4c;
          iVar2 = FUN_ram_4202b91a(&uStack_48,iVar1,&iStack_4c);
          if (iVar2 != 0) goto LAB_ram_42072f3a;
          uStack_2c = 4;
          uStack_24 = uStack_48;
          if (iVar1 != uStack_48 + iStack_4c) {
            return -0x2566;
          }
        }
        else {
LAB_ram_42072f3a:
          if (iVar2 + -0x2500 != 0) {
            return iVar2 + -0x2500;
          }
        }
        (*(code *)&SUB_ram_40010488)(param_2,0,0x28);
        uVar5 = 0x24;
        param_1 = &uStack_44;
        puVar3 = param_2 + 1;
        goto LAB_ram_42072f5e;
      }
      puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010488)(param_2 + 1,0,0x24);
      uVar5 = 2;
    }
LAB_ram_42073046:
    *param_2 = uVar5;
  }
  else {
    if (uVar6 == 0x86) {
      puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010488)(param_2 + 1,0,0x24);
      uVar5 = 6;
      goto LAB_ram_42073046;
    }
    if (uVar6 != 0x87) {
      return -0x2080;
    }
    puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010488)(param_2 + 1,0,0x24);
    *param_2 = 7;
    if ((param_1[1] != 4) && (param_1[1] != 0x10)) {
      return -0x2800;
    }
  }
  uVar5 = 0xc;
LAB_ram_42072f5e:
  FUN_ram_40399daa(puVar3,param_1,uVar5);
  return 0;
}

