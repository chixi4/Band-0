
int FUN_ram_42031120(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iStack_a4;
  undefined1 auStack_a0 [136];
  
  if (param_1[4] == 0) {
    return -0x40;
  }
  bVar1 = false;
  iVar3 = -0x3c;
  puVar2 = param_1;
  for (uVar5 = 0; (int)uVar5 < (int)param_1[4]; uVar5 = uVar5 + 1) {
    iStack_a4 = 0;
    bVar1 = (bool)(bVar1 | puVar2[9] == 1);
    iVar3 = (*(code *)puVar2[5])(puVar2[6],auStack_a0,0x80,&iStack_a4);
    if (iVar3 != 0) goto LAB_ram_42031150;
    if (iStack_a4 != 0) {
      iVar4 = FUN_ram_42031080(param_1,uVar5 & 0xff,auStack_a0);
      if (iVar4 != 0) {
        return iVar4;
      }
      puVar2[7] = puVar2[7] + iStack_a4;
    }
    puVar2 = puVar2 + 5;
  }
  if (!bVar1) {
    iVar3 = -0x3d;
  }
LAB_ram_42031150:
  FUN_ram_420293a6(auStack_a0,0x80);
  return iVar3;
}

