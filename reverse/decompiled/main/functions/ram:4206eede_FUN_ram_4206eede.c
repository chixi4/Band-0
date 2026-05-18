
int FUN_ram_4206eede(byte *param_1,uint param_2,undefined4 param_3,undefined4 param_4,
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
  undefined4 local_50;
  undefined1 auStack_4c [12];
  byte local_40 [32];
  
  FUN_ram_4206c48e(auStack_4c);
  iVar2 = FUN_ram_4206c444(param_5);
  if (iVar2 == 0) {
    iVar5 = -0x4080;
  }
  else {
    FUN_ram_4206c48e(auStack_4c);
    iVar3 = FUN_ram_4206c572(auStack_4c,iVar2,0);
    iVar5 = iVar3;
    if (iVar3 == 0) {
      uVar4 = FUN_ram_4206c71c(iVar2);
      (*(code *)&SUB_ram_40010488)(local_40,0,0x20);
      local_50 = 0;
      for (; iVar5 = iVar3, param_2 != 0; param_2 = param_2 - uVar8) {
        uVar8 = param_2;
        if (uVar4 < param_2) {
          uVar8 = uVar4;
        }
        iVar5 = FUN_ram_4206c624(auStack_4c);
        if ((((iVar5 != 0) || (iVar5 = FUN_ram_4206c666(auStack_4c,param_3,param_4), iVar5 != 0)) ||
            (iVar5 = FUN_ram_4206c666(auStack_4c,&local_50), iVar5 != 0)) ||
           (iVar5 = FUN_ram_4206c6a0(auStack_4c,local_40), iVar5 != 0)) break;
        pbVar7 = local_40;
        pbVar6 = param_1 + uVar8;
        for (; param_1 != pbVar6; param_1 = param_1 + 1) {
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
          *param_1 = *param_1 ^ bVar1;
        }
        local_50 = CONCAT13(local_50._3_1_ + '\x01',(undefined3)local_50);
      }
    }
    FUN_ram_4206d7da(local_40,0x20);
    FUN_ram_4206c49a(auStack_4c);
  }
  return iVar5;
}

