
undefined4 FUN_ram_40395806(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int aiStack_34 [3];
  undefined1 auStack_28 [12];
  
  bVar1 = false;
  aiStack_34[0] = param_3;
  FUN_ram_403968c6();
  while( true ) {
    FUN_ram_40394d60();
    iVar2 = *(int *)(param_1 + 0x38);
    if (iVar2 != 0) {
      FUN_ram_4039523a(param_1,param_2);
      *(int *)(param_1 + 0x38) = iVar2 + -1;
      if ((*(int *)(param_1 + 0x10) != 0) && (iVar2 = FUN_ram_40396680(param_1 + 0x10), iVar2 != 0))
      {
        FUN_ram_40394dce();
      }
      FUN_ram_40394d8e();
      return 1;
    }
    if (aiStack_34[0] == 0) break;
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
    if (iVar2 == 0) {
      iVar2 = FUN_ram_4039519a(param_1);
      if (iVar2 == 0) {
        FUN_ram_403952c2(param_1);
        FUN_ram_403963e2();
      }
      else {
        FUN_ram_4039660c(param_1 + 0x24,aiStack_34[0]);
        FUN_ram_403952c2(param_1);
        iVar2 = FUN_ram_403963e2();
        if (iVar2 == 0) {
          FUN_ram_40394dce();
        }
      }
    }
    else {
      FUN_ram_403952c2(param_1);
      FUN_ram_403963e2();
      iVar2 = FUN_ram_4039519a(param_1);
      if (iVar2 != 0) {
        return 0;
      }
    }
    bVar1 = true;
  }
  FUN_ram_40394d8e();
  return 0;
}

