
void FUN_ram_42063764(int param_1,undefined4 param_2,int param_3,undefined4 param_4,
                     undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined1 auStack_6c [16];
  int iStack_5c;
  
  FUN_ram_42063688(7);
  (*(code *)&SUB_ram_40010488)(auStack_6c,0,0x3c);
  if ((*(int *)(param_1 + 0x230) != 2) ||
     (iVar4 = FUN_ram_42065654(param_5,param_6,auStack_6c), -1 < iVar4)) {
    if (iStack_5c != 0) {
      iVar4 = *(int *)(param_1 + 0x1c0);
      if (iVar4 == 0) {
        iVar4 = FUN_ram_42062ebe(*(undefined4 *)(param_1 + 0x1bc),param_2,iStack_5c,0);
        *(int *)(param_1 + 0x1c0) = iVar4;
        if (iVar4 == 0) goto LAB_ram_420637b0;
      }
      iVar4 = FUN_ram_40399d6c(iStack_5c,iVar4 + 4,0x10);
      if (iVar4 == 0) {
        FUN_ram_4206373c(param_1);
      }
    }
LAB_ram_420637b0:
    iVar4 = param_1 + 0x11c;
    if (*(int *)(param_1 + 0x15c) != 0) {
      iVar1 = FUN_ram_420221fe(iVar4,0x20);
      if (iVar1 != 0) goto LAB_ram_420638ae;
      *(undefined4 *)(param_1 + 0x15c) = 0;
    }
    FUN_ram_42062598(param_1,*(undefined4 *)(param_1 + 0x40),0x3c073398,param_1 + 0x224,
                     param_1 + 0x22a,iVar4,param_3 + 0xd,param_1 + 0xac,
                     *(undefined4 *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 0x1e8));
    *(undefined4 *)(param_1 + 0x118) = 1;
    *(undefined1 *)(param_1 + 0x250) = 1;
    iVar1 = *(int *)(param_1 + 0x210);
    iVar5 = *(int *)(param_1 + 0x218);
    uVar3 = *(undefined4 *)(param_1 + 0x20c);
    *(undefined4 *)(param_1 + 0x114) = 0;
    iVar2 = thunk_FUN_ram_4039047a(iVar5 + iVar1);
    if (iVar2 != 0) {
      FUN_ram_40399daa(iVar2,uVar3,iVar1);
      if ((*(int *)(param_1 + 0x214) != 0) && (iVar5 != 0)) {
        FUN_ram_40399daa(iVar2 + iVar1,*(int *)(param_1 + 0x214),iVar5);
        iVar1 = iVar5 + iVar1;
      }
      iVar4 = FUN_ram_4206347a(param_1,param_1 + 0x22a,param_3,param_4,iVar4,iVar2,iVar1,
                               param_1 + 0xac);
      if (iVar4 == 0) {
        thunk_FUN_ram_40390608(iVar2);
        FUN_ram_40399daa(param_1 + 0x13c,param_3 + 0xd,0x20);
        return;
      }
      goto LAB_ram_420638b0;
    }
  }
LAB_ram_420638ae:
  iVar2 = 0;
LAB_ram_420638b0:
  thunk_FUN_ram_40390608(iVar2);
  FUN_ram_420662da(param_1,1);
  return;
}

