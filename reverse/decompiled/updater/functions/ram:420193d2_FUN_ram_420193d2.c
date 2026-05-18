
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420193d2(int *param_1,uint param_2,int *param_3,uint param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uStack_38;
  undefined4 auStack_34 [2];
  
  iVar1 = 0x102;
  if (((param_3 != (int *)0x0) && (iVar1 = 0x102, param_1 != (int *)0x0)) && (param_1 != param_3)) {
    uVar4 = param_3[4];
    iVar1 = 0x104;
    if (((param_4 <= uVar4) && (uVar5 = param_1[4], param_2 <= uVar5)) &&
       (iVar1 = 0x106, *param_3 == _DAT_ram_3fcb66cc)) {
      uVar3 = param_5;
      if (param_5 == 0xffffffff) {
        param_5 = uVar4 - param_4;
        uVar3 = uVar5 - param_2;
      }
      iVar1 = 0x104;
      if (((param_4 <= param_4 + param_5) && (param_4 + param_5 <= uVar4)) &&
         ((param_2 <= param_2 + param_5 &&
          ((param_2 + param_5 <= uVar5 &&
           (iVar1 = FUN_ram_420195a0(param_1,param_2,uVar3 + 0xfff & 0xfffff000), iVar1 == 0)))))) {
        iVar2 = FUN_ram_4201a654();
        iVar6 = 0;
        for (; param_5 != 0; param_5 = param_5 - uVar4) {
          uVar4 = iVar2 << 0xf;
          if (param_5 < (uint)(iVar2 << 0xf)) {
            uVar4 = param_5;
          }
          auStack_34[0] = 0;
          iVar1 = FUN_ram_420195e2(param_3,param_4,uVar4,0,auStack_34,&uStack_38);
          if (iVar1 == 0) {
            iVar6 = FUN_ram_420194e0(param_1,param_2,auStack_34[0],uVar4);
            if (iVar6 != 0) {
              thunk_FUN_ram_4201a616(uStack_38);
              return iVar6;
            }
            thunk_FUN_ram_4201a616(uStack_38);
            iVar6 = 0;
          }
          else {
            iVar2 = FUN_ram_4201a654(0);
            iVar6 = iVar6 + 1;
            if (iVar6 == 3) {
              return iVar1;
            }
            uVar4 = 0;
          }
          param_4 = param_4 + uVar4;
          param_2 = param_2 + uVar4;
        }
      }
    }
  }
  return iVar1;
}

