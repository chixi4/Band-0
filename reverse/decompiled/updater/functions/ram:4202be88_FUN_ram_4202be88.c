
int FUN_ram_4202be88(byte *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  undefined4 local_70;
  undefined1 auStack_6c [12];
  byte local_60 [64];
  
  FUN_ram_42028e32(auStack_6c);
  iVar2 = FUN_ram_42028dc8(param_5);
  if (iVar2 == 0) {
    iVar5 = -0x4080;
  }
  else {
    FUN_ram_42028e32(auStack_6c);
    iVar3 = FUN_ram_42028f3c(auStack_6c,iVar2,0);
    iVar5 = iVar3;
    if (iVar3 == 0) {
      uVar4 = FUN_ram_42029140(iVar2);
      (*(code *)&SUB_ram_40010488)(local_60,0,0x40);
      local_70 = 0;
      for (; iVar5 = iVar3, param_2 != 0; param_2 = param_2 - uVar8) {
        uVar8 = param_2;
        if (uVar4 < param_2) {
          uVar8 = uVar4;
        }
        iVar5 = FUN_ram_42029004(auStack_6c);
        if ((((iVar5 != 0) || (iVar5 = FUN_ram_4202905e(auStack_6c,param_3,param_4), iVar5 != 0)) ||
            (iVar5 = FUN_ram_4202905e(auStack_6c,&local_70), iVar5 != 0)) ||
           (iVar5 = FUN_ram_420290a6(auStack_6c,local_60), iVar5 != 0)) break;
        pbVar7 = local_60;
        pbVar6 = param_1 + uVar8;
        for (; param_1 != pbVar6; param_1 = param_1 + 1) {
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          *param_1 = *param_1 ^ bVar1;
        }
        local_70 = CONCAT13(local_70._3_1_ + '\x01',(undefined3)local_70);
      }
    }
    FUN_ram_420293a6(local_60,0x40);
    FUN_ram_42028e3e(auStack_6c);
  }
  return iVar5;
}

