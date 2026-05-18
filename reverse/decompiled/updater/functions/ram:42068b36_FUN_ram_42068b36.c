
int FUN_ram_42068b36(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,uint param_6,uint param_7,int param_8)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined1 auStack_c4 [4];
  char local_c0 [4];
  undefined4 auStack_bc [3];
  byte local_b0 [64];
  byte local_70 [68];
  
  iVar2 = FUN_ram_42028dc8();
  if (iVar2 == 0) {
    iVar2 = -0x2e80;
  }
  else {
    FUN_ram_42028e32(auStack_bc);
    iVar2 = FUN_ram_42028f3c(auStack_bc,iVar2,1);
    if (iVar2 == 0) {
      uVar3 = FUN_ram_42029140(auStack_bc[0]);
      local_c0[0] = '\0';
      local_c0[1] = '\0';
      local_c0[2] = 0;
      local_c0[3] = 1;
      iVar2 = FUN_ram_4202915c(auStack_bc,param_2,param_3);
      if (iVar2 == 0) {
LAB_ram_42068c44:
        if (param_7 != 0) {
          iVar2 = FUN_ram_42029264(auStack_bc,param_4,param_5);
          if ((((iVar2 != 0) || (iVar2 = FUN_ram_42029264(auStack_bc,local_c0), iVar2 != 0)) ||
              (iVar2 = FUN_ram_4202927a(auStack_bc,local_70), iVar2 != 0)) ||
             (iVar2 = FUN_ram_42029306(auStack_bc), iVar2 != 0)) goto LAB_ram_42068c48;
          FUN_ram_40399daa(local_b0,local_70,uVar3);
          for (uVar7 = 1; uVar7 < param_6; uVar7 = uVar7 + 1) {
            iVar2 = FUN_ram_42029264(auStack_bc,local_b0,uVar3);
            if (((iVar2 != 0) || (iVar2 = FUN_ram_4202927a(auStack_bc,local_b0), iVar2 != 0)) ||
               (iVar2 = FUN_ram_42029306(auStack_bc), iVar2 != 0)) goto LAB_ram_42068c48;
            pbVar5 = local_70;
            for (uVar6 = 0; uVar6 < uVar3; uVar6 = uVar6 + 1) {
              *pbVar5 = local_b0[uVar6] ^ *pbVar5;
              pbVar5 = pbVar5 + 1;
            }
          }
          uVar7 = uVar3;
          if (param_7 < uVar3) {
            uVar7 = param_7;
          }
          FUN_ram_40399daa(param_8,local_70,uVar7);
          param_7 = param_7 - uVar7;
          param_8 = param_8 + uVar7;
          pcVar4 = local_c0;
          do {
            cVar1 = pcVar4[3];
            pcVar4[3] = cVar1 + '\x01';
            if (cVar1 != -1) break;
            pcVar4 = pcVar4 + -1;
          } while (pcVar4 != auStack_c4);
          goto LAB_ram_42068c44;
        }
        iVar2 = 0;
LAB_ram_42068c48:
        FUN_ram_420293a6(local_70,0x40);
        FUN_ram_420293a6(local_b0,0x40);
      }
    }
    FUN_ram_42028e3e(auStack_bc);
  }
  return iVar2;
}

