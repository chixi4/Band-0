
int FUN_ram_4206e930(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    int param_5,undefined4 param_6,int param_7,int param_8,uint param_9)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_8c [12];
  undefined1 local_80 [76];
  
  FUN_ram_42028e32(auStack_8c);
  iVar1 = FUN_ram_42028dc8(param_1);
  if (iVar1 == 0) {
    iVar4 = -0x6c00;
  }
  else {
    uVar2 = FUN_ram_42029140();
    iVar9 = uVar2 + param_5 + param_7;
    iVar3 = FUN_ram_4202939a(1,iVar9);
    iVar4 = -0x7f00;
    if (iVar3 != 0) {
      FUN_ram_40399daa(iVar3 + uVar2,param_4,param_5);
      FUN_ram_40399daa(iVar3 + uVar2 + param_5,param_6,param_7);
      iVar4 = FUN_ram_42028f3c(auStack_8c,iVar1,1);
      if ((iVar4 == 0) && (iVar4 = FUN_ram_4202915c(auStack_8c,param_2,param_3), iVar4 == 0)) {
        iVar4 = FUN_ram_42029264(auStack_8c,iVar3 + uVar2,param_5 + param_7);
        if ((iVar4 == 0) && (iVar1 = FUN_ram_4202927a(auStack_8c,iVar3), iVar4 = iVar1, iVar1 == 0))
        {
          uVar8 = 0;
          while ((((iVar4 = iVar1, uVar8 < param_9 &&
                   (iVar4 = FUN_ram_42029306(auStack_8c), iVar4 == 0)) &&
                  (iVar4 = FUN_ram_42029264(auStack_8c,iVar3,param_5 + param_7 + uVar2), iVar4 == 0)
                  ) && (((iVar4 = FUN_ram_4202927a(auStack_8c,local_80), iVar4 == 0 &&
                         (iVar4 = FUN_ram_42029306(auStack_8c), iVar4 == 0)) &&
                        ((iVar4 = FUN_ram_42029264(auStack_8c,iVar3,uVar2), iVar4 == 0 &&
                         (iVar4 = FUN_ram_4202927a(auStack_8c,iVar3), iVar4 == 0))))))) {
            uVar6 = uVar8 + uVar2;
            uVar5 = uVar2;
            if (param_9 < uVar6) {
              uVar5 = param_9 % uVar2;
            }
            iVar4 = uVar8 + param_8;
            for (uVar7 = 0; uVar8 = uVar6, uVar7 != uVar5; uVar7 = uVar7 + 1) {
              *(undefined1 *)(iVar4 + uVar7) = local_80[uVar7];
            }
          }
        }
      }
    }
    FUN_ram_42028e3e(auStack_8c);
    if (iVar3 != 0) {
      FUN_ram_420293a6(iVar3,iVar9);
    }
    FUN_ram_420293a6(local_80,0x40);
    FUN_ram_420293a0(iVar3);
  }
  return iVar4;
}

