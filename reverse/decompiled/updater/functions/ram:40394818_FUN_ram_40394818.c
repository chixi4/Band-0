
/* WARNING: Removing unreachable block (ram,0x40394792) */

undefined4 FUN_ram_40394818(int param_1,undefined4 param_2,uint param_3,int param_4)

{
  bool bVar1;
  int iVar2;
  int iStack_38;
  int aiStack_34 [3];
  undefined1 auStack_28 [12];
  
  if (*(uint *)(param_1 + 4) < param_3) {
    return 0;
  }
  if (((*(uint *)(param_1 + 8) & 2) != 0) && (param_3 == 0)) {
    return 1;
  }
  bVar1 = false;
  iStack_38 = param_4;
  aiStack_34[0] = param_1;
  while( true ) {
    FUN_ram_40394d60();
    iVar2 = (**(code **)(aiStack_34[0] + 0xc))(aiStack_34[0],param_3);
    if (iVar2 == 1) {
      (**(code **)(aiStack_34[0] + 0x10))(aiStack_34[0],param_2,param_3);
      if (*(int *)(aiStack_34[0] + 100) == 0) {
        if ((*(int *)(aiStack_34[0] + 0x50) != 0) &&
           (iVar2 = FUN_ram_40396680(aiStack_34[0] + 0x50), iVar2 == 1)) {
          FUN_ram_40394dce();
        }
        FUN_ram_40394d8e();
      }
      else {
        FUN_ram_40394d8e();
        FUN_ram_40395514(*(undefined4 *)(aiStack_34[0] + 100),aiStack_34,0,0);
      }
      return 1;
    }
    if (iStack_38 == 0) break;
    if (!bVar1) {
      FUN_ram_40396804(auStack_28);
    }
    iVar2 = FUN_ram_4039681a(auStack_28,&iStack_38);
    if (iVar2 != 0) break;
    bVar1 = true;
    FUN_ram_4039660c(aiStack_34[0] + 0x3c,iStack_38);
    FUN_ram_40394dce();
    FUN_ram_40394d8e();
  }
  FUN_ram_40394d8e();
  return 0;
}

