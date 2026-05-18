
int FUN_ram_40394694(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,int param_7)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int aiStack_44 [2];
  int iStack_3c;
  undefined1 auStack_38 [12];
  
  bVar1 = false;
  aiStack_44[0] = param_7;
  while( true ) {
    FUN_ram_40394d60();
    iVar2 = FUN_ram_4039465c(param_1);
    if (iVar2 == 1) break;
    if (aiStack_44[0] == 0) goto LAB_ram_40394708;
    if (!bVar1) {
      FUN_ram_40396804(auStack_38);
    }
    iVar4 = FUN_ram_4039681a(auStack_38,aiStack_44);
    if (iVar4 != 0) goto LAB_ram_40394708;
    bVar1 = true;
    FUN_ram_4039660c(param_1 + 0x50,aiStack_44[0]);
    FUN_ram_40394dce();
    FUN_ram_40394d8e();
  }
  iStack_3c = 0;
  if ((*(uint *)(param_1 + 8) & 2) == 0) {
    param_6 = 0;
    piVar5 = &iStack_3c;
  }
  else {
    piVar5 = (int *)0x0;
  }
  uVar3 = (**(code **)(param_1 + 0x14))(param_1,piVar5,param_6,param_4,*(code **)(param_1 + 0x14));
  uVar6 = *(uint *)(param_1 + 8);
  *param_2 = uVar3;
  if ((uVar6 & 1) != 0) {
    if (iStack_3c == 1) {
      uVar3 = (**(code **)(param_1 + 0x14))
                        (param_1,&iStack_3c,0,param_5,1,*(code **)(param_1 + 0x14));
      *param_3 = uVar3;
    }
    else {
      *param_3 = 0;
    }
  }
LAB_ram_40394708:
  FUN_ram_40394d8e();
  return iVar2;
}

