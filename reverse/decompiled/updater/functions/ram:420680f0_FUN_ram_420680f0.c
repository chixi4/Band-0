
int FUN_ram_420680f0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined1 auStack_174 [12];
  undefined1 auStack_168 [16];
  undefined1 auStack_158 [16];
  undefined1 auStack_148 [16];
  undefined1 auStack_138 [280];
  
  FUN_ram_420231ac(auStack_138);
  FUN_ram_42028e32(auStack_174);
  uVar1 = FUN_ram_42028dc8(3);
  iVar2 = FUN_ram_42028f3c(auStack_174,uVar1,0);
  if ((((iVar2 == 0) && (iVar2 = FUN_ram_42029004(auStack_174), iVar2 == 0)) &&
      (iVar2 = FUN_ram_4202905e(auStack_174,param_5,param_6), iVar2 == 0)) &&
     ((iVar2 = FUN_ram_4202905e(auStack_174,param_1,8), iVar2 == 0 &&
      (iVar3 = FUN_ram_420290a6(auStack_174,auStack_168), iVar2 = iVar3, iVar3 == 0)))) {
    if (param_2 == 0x10) {
      puVar4 = auStack_158;
      uVar1 = 0x10;
    }
    else {
      FUN_ram_40399daa(auStack_158,auStack_168);
      iVar2 = FUN_ram_42029004(auStack_174);
      if (((iVar2 != 0) || (iVar2 = FUN_ram_4202905e(auStack_174,auStack_168,0x10), iVar2 != 0)) ||
         ((iVar2 = FUN_ram_4202905e(auStack_174,param_5,param_6), iVar2 != 0 ||
          ((iVar2 = FUN_ram_4202905e(auStack_174,param_1,8), iVar2 != 0 ||
           (iVar2 = FUN_ram_420290a6(auStack_174,auStack_168), iVar2 != 0))))))
      goto LAB_ram_42068184;
      uVar1 = 8;
      if (param_2 == 0x20) {
        uVar1 = 0x10;
      }
      puVar4 = auStack_148;
    }
    FUN_ram_40399daa(puVar4,auStack_168,uVar1);
    iVar2 = iVar3;
  }
LAB_ram_42068184:
  FUN_ram_42028e3e(auStack_174);
  FUN_ram_420293a6(auStack_168,0x10);
  if ((iVar2 == 0) && (iVar2 = FUN_ram_42023438(auStack_138,auStack_158,param_2 << 3), iVar2 == 0))
  {
    iVar2 = FUN_ram_420241c2(auStack_138,0,param_4,param_1,param_3,param_3);
  }
  FUN_ram_420231ba(auStack_138);
  FUN_ram_420293a6(auStack_158,param_2);
  return iVar2;
}

