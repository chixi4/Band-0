
int FUN_ram_4204c9a4(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4,
                    int param_5,uint param_6,undefined1 param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined1 local_70 [4];
  undefined4 uStack_6c;
  undefined2 uStack_58;
  undefined2 uStack_56;
  undefined4 uStack_54;
  undefined1 uStack_50;
  undefined1 uStack_4f;
  undefined1 uStack_4e;
  undefined1 uStack_4d;
  undefined1 auStack_48 [15];
  undefined1 uStack_39;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar5 = local_70;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = 0x110b;
  }
  else if (((*(int *)(param_1 + 0xc) != -1) || (iVar1 = FUN_ram_4204c488(), iVar1 == 0)) &&
          (iVar1 = 0x110a, *(int *)(param_1 + 0xc) != -4)) {
    uVar2 = (*(code *)&SUB_ram_400104a8)(param_4);
    iVar1 = 0x1109;
    if ((uVar2 < 0x10) && (iVar1 = 0x110e, param_6 < 0xfa1)) {
      iVar3 = FUN_ram_4204c426(param_3);
      if (iVar3 == 0) {
        if (8 < param_6) {
          return 0x102;
        }
        iVar4 = 1;
        uVar2 = 0x20;
      }
      else {
        uVar2 = (param_6 + 0x1f & 0xffffffe0) + 0x20;
        iVar4 = (param_6 + 0x1f >> 5) + 1;
      }
      iVar6 = *(int *)(param_1 + 0x38);
      iVar1 = 0x110a;
      if ((iVar6 != -1) && (iVar1 = 0x110a, (uint)(iVar4 + iVar6) < 0x7f)) {
        uStack_4e = (undefined1)(uVar2 >> 5);
        uStack_4f = (undefined1)param_3;
        uStack_38 = 0xffffffff;
        uStack_34 = 0xffffffff;
        uStack_50 = param_2;
        uStack_4d = param_7;
        FUN_ram_4039c61e(auStack_48,param_4,0xf);
        uStack_39 = 0;
        FUN_ram_4039c11e(local_70,&uStack_50,0x20);
        iVar1 = FUN_ram_4204ef2e(param_1 + 0x44,local_70,iVar6);
        if (iVar1 == 0) {
          if (iVar3 == 0) {
            FUN_ram_4039c11e(&uStack_58,param_5,param_6);
            uStack_6c = FUN_ram_4204ed62(local_70);
          }
          else {
            uStack_54 = FUN_ram_4204edd2(param_5,param_6,0);
            uStack_58 = (undefined2)param_6;
            uStack_56 = 0xffff;
            uStack_6c = FUN_ram_4204ed62(local_70);
            iVar1 = FUN_ram_4204c746(param_1,local_70);
            if (iVar1 != 0) {
              return iVar1;
            }
            uVar2 = param_6 & 0xffffffe0;
            if ((uVar2 != 0) && (iVar1 = FUN_ram_4204c918(param_1,param_5,uVar2), iVar1 != 0)) {
              return iVar1;
            }
            if ((param_6 & 0x1f) == 0) {
              return 0;
            }
            do {
              *puVar5 = 0xff;
              puVar5 = puVar5 + 1;
            } while (puVar5 != &uStack_50);
            FUN_ram_4039c11e(local_70,param_5 + uVar2,param_6 & 0x1f);
          }
          iVar1 = FUN_ram_4204c746(param_1,local_70);
        }
      }
    }
  }
  return iVar1;
}

