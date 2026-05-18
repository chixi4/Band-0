
undefined4 FUN_ram_403958fa(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int aiStack_34 [3];
  undefined1 auStack_28 [16];
  
  iVar2 = 0;
  aiStack_34[0] = param_2;
  FUN_ram_403968c6();
  bVar1 = false;
  while( true ) {
    FUN_ram_40394d60();
    if (param_1[0xe] != 0) {
      param_1[0xe] = param_1[0xe] + -1;
      if (*param_1 == 0) {
        iVar2 = FUN_ram_40396b28();
        param_1[2] = iVar2;
      }
      if ((param_1[4] != 0) && (iVar2 = FUN_ram_40396680(param_1 + 4), iVar2 != 0)) {
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
    if ((char)param_1[0x11] == -1) {
      *(undefined1 *)(param_1 + 0x11) = 0;
    }
    if (*(char *)((int)param_1 + 0x45) == -1) {
      *(undefined1 *)((int)param_1 + 0x45) = 0;
    }
    FUN_ram_40394d8e();
    iVar3 = FUN_ram_4039681a(auStack_28,aiStack_34);
    if (iVar3 == 0) {
      iVar3 = FUN_ram_4039519a(param_1);
      if (iVar3 == 0) {
        FUN_ram_403952c2(param_1);
        FUN_ram_403963e2();
      }
      else {
        if (*param_1 == 0) {
          FUN_ram_40394d60();
          iVar2 = FUN_ram_403968e2(param_1[2]);
          FUN_ram_40394d8e();
        }
        FUN_ram_4039660c(param_1 + 9,aiStack_34[0]);
        FUN_ram_403952c2(param_1);
        iVar3 = FUN_ram_403963e2();
        if (iVar3 == 0) {
          FUN_ram_40394dce();
        }
      }
    }
    else {
      FUN_ram_403952c2(param_1);
      FUN_ram_403963e2();
      iVar3 = FUN_ram_4039519a(param_1);
      if (iVar3 != 0) {
        if (iVar2 == 0) {
          return 0;
        }
        FUN_ram_40394d60();
        iVar2 = 0;
        if (param_1[9] != 0) {
          iVar2 = 0x19 - *(int *)param_1[0xc];
        }
        FUN_ram_40396a56(param_1[2],iVar2);
        break;
      }
    }
    bVar1 = true;
  }
  FUN_ram_40394d8e();
  return 0;
}

