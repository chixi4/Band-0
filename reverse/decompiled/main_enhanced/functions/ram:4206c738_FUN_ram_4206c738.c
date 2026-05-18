
int FUN_ram_4206c738(int *param_1,undefined1 *param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined1 local_40 [40];
  
  if (param_1 == (int *)0x0) {
    return -0x5100;
  }
  iVar2 = *param_1;
  if (iVar2 == 0) {
    return -0x5100;
  }
  if (param_1[2] == 0) {
    return -0x5100;
  }
  if (*(byte *)(iVar2 + 5) < param_3) {
    iVar2 = FUN_ram_4206c624();
    if (((iVar2 != 0) || (iVar2 = FUN_ram_4206c666(param_1,param_2,param_3), iVar2 != 0)) ||
       (iVar2 = FUN_ram_4206c6a0(param_1,local_40), iVar2 != 0)) goto LAB_ram_4206c7ea;
    iVar2 = *param_1;
    param_3 = (uint)*(byte *)(iVar2 + 4);
    param_2 = local_40;
  }
  iVar4 = param_1[2];
  iVar2 = iVar4 + (uint)*(byte *)(iVar2 + 5);
  (*(code *)&SUB_ram_40010488)(iVar4,0x36);
  (*(code *)&SUB_ram_40010488)(iVar2,0x5c,*(undefined1 *)(*param_1 + 5));
  for (uVar3 = 0; param_3 != uVar3; uVar3 = uVar3 + 1) {
    *(byte *)(iVar4 + uVar3) = param_2[uVar3] ^ *(byte *)(iVar4 + uVar3);
  }
  for (uVar3 = 0; param_3 != uVar3; uVar3 = uVar3 + 1) {
    pbVar1 = (byte *)(iVar2 + uVar3);
    *pbVar1 = param_2[uVar3] ^ *pbVar1;
  }
  iVar2 = FUN_ram_4206c624(param_1);
  if (iVar2 == 0) {
    iVar2 = FUN_ram_4206c666(param_1,iVar4,*(undefined1 *)(*param_1 + 5));
  }
LAB_ram_4206c7ea:
  FUN_ram_4206d7da(local_40,0x20);
  return iVar2;
}

