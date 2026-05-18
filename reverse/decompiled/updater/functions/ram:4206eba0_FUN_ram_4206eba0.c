
int FUN_ram_4206eba0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined1 auStack_3c [24];
  
  FUN_ram_42028e32(auStack_3c);
  iVar5 = *(int *)(param_1 + 0x34);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x30);
  }
  if (param_6 == 0) {
    uVar1 = 0x3c074524;
  }
  else {
    uVar1 = 0x3c074534;
  }
  uVar2 = FUN_ram_42029156(param_2);
  iVar3 = FUN_ram_42028f3c(auStack_3c,uVar2,0);
  if (((iVar3 == 0) && (iVar3 = FUN_ram_42028eb8(auStack_3c,param_2), iVar3 == 0)) &&
     (iVar3 = FUN_ram_420290a6(auStack_3c,param_3), iVar3 == 0)) {
    pcVar4 = *(code **)(*(int *)(param_1 + 0x38) + 0x1c);
    (*pcVar4)(iVar5 + 0x30,0x30,uVar1,param_3,param_4,param_5,0xc,pcVar4);
    FUN_ram_420293a6(param_3,param_4);
  }
  FUN_ram_42028e3e(auStack_3c);
  return iVar3;
}

