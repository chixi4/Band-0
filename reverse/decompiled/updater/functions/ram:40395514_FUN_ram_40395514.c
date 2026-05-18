
undefined4 FUN_ram_40395514(int param_1,undefined4 param_2,int param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int aiStack_34 [3];
  undefined1 auStack_28 [8];
  
  bVar1 = false;
  aiStack_34[0] = param_3;
  FUN_ram_403968c6();
  while ((FUN_ram_40394d60(), *(uint *)(param_1 + 0x3c) <= *(uint *)(param_1 + 0x38) &&
         (param_4 != 2))) {
    if (aiStack_34[0] == 0) {
      FUN_ram_40394d8e();
      return 0;
    }
    if (!bVar1) {
      FUN_ram_40396804(auStack_28);
    }
    FUN_ram_40394d8e();
    FUN_ram_40396232();
    FUN_ram_40394d60();
    if (*(char *)(param_1 + 0x44) == -1) {
      *(undefined1 *)(param_1 + 0x44) = 0;
    }
    if (*(char *)(param_1 + 0x45) == -1) {
      *(undefined1 *)(param_1 + 0x45) = 0;
    }
    FUN_ram_40394d8e();
    iVar2 = FUN_ram_4039681a(auStack_28,aiStack_34);
    if (iVar2 != 0) {
      FUN_ram_403952c2(param_1);
      FUN_ram_403963e2();
      return 0;
    }
    FUN_ram_40394d60();
    if (*(int *)(param_1 + 0x38) == *(int *)(param_1 + 0x3c)) {
      FUN_ram_40394d8e();
      FUN_ram_4039660c(param_1 + 0x10,aiStack_34[0]);
      FUN_ram_403952c2(param_1);
      iVar2 = FUN_ram_403963e2();
      if (iVar2 == 0) {
        FUN_ram_40394dce();
      }
    }
    else {
      FUN_ram_40394d8e();
      FUN_ram_403952c2(param_1);
      FUN_ram_403963e2();
    }
    bVar1 = true;
  }
  iVar3 = *(int *)(param_1 + 0x38);
  iVar2 = FUN_ram_403951b8(param_1,param_2,param_4);
  if (*(int *)(param_1 + 0x48) == 0) {
    if (*(int *)(param_1 + 0x24) != 0) {
      iVar2 = FUN_ram_40396680(param_1 + 0x24);
    }
  }
  else {
    if ((param_4 == 2) && (iVar3 != 0)) goto LAB_ram_4039558e;
    iVar2 = FUN_ram_4039525a(param_1);
  }
  if (iVar2 != 0) {
    FUN_ram_40394dce();
  }
LAB_ram_4039558e:
  FUN_ram_40394d8e();
  return 1;
}

