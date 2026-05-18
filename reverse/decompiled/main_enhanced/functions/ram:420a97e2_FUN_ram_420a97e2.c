
int FUN_ram_420a97e2(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,uint param_6,uint param_7,int param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_84 [4];
  char local_80 [4];
  undefined4 auStack_7c [3];
  byte local_70 [32];
  byte local_50 [36];
  
  iVar2 = FUN_ram_4206c444();
  if (iVar2 == 0) {
    iVar2 = -0x2e80;
  }
  else {
    FUN_ram_4206c48e(auStack_7c);
    iVar2 = FUN_ram_4206c572(auStack_7c,iVar2,1);
    if (iVar2 == 0) {
      uVar3 = FUN_ram_4206c71c(auStack_7c[0]);
      local_80[0] = '\0';
      local_80[1] = '\0';
      local_80[2] = 0;
      local_80[3] = 1;
      iVar2 = FUN_ram_4206c738(auStack_7c,param_2,param_3);
      if (iVar2 == 0) {
LAB_ram_420a98f0:
        if (param_7 != 0) {
          iVar2 = FUN_ram_4206c842(auStack_7c,param_4,param_5);
          if ((((iVar2 != 0) || (iVar2 = FUN_ram_4206c842(auStack_7c,local_80), iVar2 != 0)) ||
              (iVar2 = FUN_ram_4206c858(auStack_7c,local_50), iVar2 != 0)) ||
             (iVar2 = FUN_ram_4206c8e4(auStack_7c), iVar2 != 0)) goto LAB_ram_420a98f4;
          FUN_ram_4039c11e(local_70,local_50,uVar3);
          for (uVar7 = 1; uVar7 < param_6; uVar7 = uVar7 + 1) {
            iVar2 = FUN_ram_4206c842(auStack_7c,local_70,uVar3);
            if (((iVar2 != 0) || (iVar2 = FUN_ram_4206c858(auStack_7c,local_70), iVar2 != 0)) ||
               (iVar2 = FUN_ram_4206c8e4(auStack_7c), iVar2 != 0)) goto LAB_ram_420a98f4;
            pbVar5 = local_50;
            for (uVar6 = 0; uVar6 < uVar3; uVar6 = uVar6 + 1) {
              *pbVar5 = local_70[uVar6] ^ *pbVar5;
              pbVar5 = pbVar5 + 1;
            }
          }
          uVar7 = uVar3;
          if (param_7 < uVar3) {
            uVar7 = param_7;
          }
          FUN_ram_4039c11e(param_8,local_50,uVar7);
          param_7 = param_7 - uVar7;
          param_8 = param_8 + uVar7;
          pcVar4 = local_80;
          do {
            cVar1 = pcVar4[3];
            pcVar4[3] = cVar1 + '\x01';
            if (cVar1 != -1) break;
            pcVar4 = pcVar4 + -1;
          } while (pcVar4 != auStack_84);
          goto LAB_ram_420a98f0;
        }
        iVar2 = 0;
LAB_ram_420a98f4:
        FUN_ram_4206d7da(local_50,0x20);
        FUN_ram_4206d7da(local_70,0x20);
      }
    }
    FUN_ram_4206c49a(auStack_7c);
  }
  return iVar2;
}

